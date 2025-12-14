/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43182
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_0))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_19 |= ((/* implicit */signed char) max((max(((short)-18199), (((/* implicit */short) arr_3 [i_0 + 1])))), (((/* implicit */short) ((signed char) arr_2 [i_0 - 1])))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) var_7)) * (var_2)))), (var_6)))) ? ((+(((/* implicit */int) ((unsigned char) var_3))))) : (2091532856)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_21 = var_8;
        var_22 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_5)))) != (max((arr_4 [i_1]), (arr_4 [i_1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) != ((~(arr_4 [i_1])))))));
        var_23 &= ((/* implicit */int) max((((/* implicit */unsigned int) ((((var_9) + (var_9))) - (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_17))))))), (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_5 [i_1] [i_1]) : (arr_5 [22LL] [i_1])))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 17; i_2 += 4) 
    {
        arr_8 [i_2] = ((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (arr_5 [13LL] [i_2 + 2]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_2] [15])))));
        var_24 = ((/* implicit */unsigned char) (+(arr_6 [i_2 - 1] [i_2 + 1])));
    }
}
