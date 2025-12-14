/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226199
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) arr_1 [i_0]))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((_Bool) ((0) + (24))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)31)) << (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_20 -= ((/* implicit */signed char) ((arr_0 [i_0] [i_0]) ? (((((/* implicit */long long int) max((-17), (((/* implicit */int) var_8))))) % (var_5))) : (((arr_0 [i_0] [i_0]) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6))) : (var_14)))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1])))), ((+(((/* implicit */int) arr_4 [i_1 - 1])))))))));
        arr_6 [i_1] [i_1 - 2] = ((/* implicit */signed char) ((var_17) == (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_4 [i_1]))))) - (((((/* implicit */_Bool) (signed char)32)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))))));
        arr_7 [i_1] = ((/* implicit */short) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 - 1]))) ^ (arr_5 [i_1 + 1]))));
    }
    var_22 = var_16;
}
