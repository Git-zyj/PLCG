/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23694
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
    var_18 ^= ((/* implicit */int) var_16);
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) 614681035))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = arr_2 [i_0];
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13)))))));
        arr_5 [i_0] = arr_2 [i_0];
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_21 &= ((/* implicit */int) var_11);
            var_22 -= ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3))))) / (((/* implicit */int) arr_0 [i_0])));
        }
        for (signed char i_2 = 2; i_2 < 13; i_2 += 2) 
        {
            arr_12 [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0]);
            var_23 = ((/* implicit */signed char) -614681054);
            var_24 ^= ((/* implicit */signed char) arr_7 [i_0] [(signed char)3] [i_2]);
            var_25 = ((/* implicit */signed char) arr_10 [i_2 - 2] [i_2 + 3] [i_2 + 3]);
            arr_13 [i_0] [i_0] [i_2 + 2] = ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (arr_6 [i_0] [i_0]));
        }
    }
}
