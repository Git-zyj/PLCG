/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241961
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
    var_13 = ((/* implicit */unsigned char) ((short) var_5));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) var_10);
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((arr_1 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */int) var_1)))) < (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) var_11)))))))));
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_4 [i_1] [i_0] [i_0]) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1] [1U] [i_1])))) : (((var_9) + (((/* implicit */unsigned long long int) var_7)))));
            arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((short) arr_4 [i_0] [i_0] [i_1 - 3]));
        }
        for (short i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            var_15 += ((/* implicit */int) ((_Bool) var_8));
            var_16 = ((((/* implicit */_Bool) ((arr_1 [i_2]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_0] [i_2] [i_0]))))) && (((/* implicit */_Bool) arr_0 [i_2])));
            arr_9 [i_2] [i_0] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) -1516348873))) ? (((/* implicit */int) arr_3 [i_2] [4LL] [i_2 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_12)))))));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) != (arr_4 [i_0] [i_0] [i_0])));
        arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_0 [i_0])) <= (var_8)));
    }
}
