/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196236
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_3 [i_0 - 2] [i_0 - 2]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_0] [i_1] [i_2 + 2] [i_3]))) ? (((((/* implicit */int) arr_5 [i_2] [i_1])) * (((/* implicit */int) var_14)))) : (var_6)));
                        arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((short) arr_10 [i_0] [i_1] [i_2] [i_2 + 1]));
                    }
                    var_20 = ((/* implicit */_Bool) ((unsigned char) var_16));
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0 - 1]), (((/* implicit */long long int) var_14))))) ? (min((((/* implicit */int) ((unsigned char) arr_9 [i_0 + 2] [i_0 - 2]))), ((+(((/* implicit */int) arr_7 [i_0] [i_0 - 2] [i_0])))))) : (var_9)));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14)))))) + (((/* implicit */int) arr_7 [i_0 + 1] [i_0] [i_0])))))));
    }
    var_22 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) (short)11135)) && (((/* implicit */_Bool) var_4))))), (((/* implicit */long long int) var_17))));
}
