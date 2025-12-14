/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_0;
    var_18 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 ^= var_3;

                            /* vectorizable */
                            for (int i_4 = 3; i_4 < 20;i_4 += 1)
                            {
                                var_20 |= (((var_12 ? 7695 : 1018312699)));
                                var_21 |= (((((~(arr_7 [17] [i_1] [i_0])))) ? (arr_15 [i_0] [i_0] [i_1] [i_0] [i_4]) : (((18446744073709551599 ? 1 : var_4)))));
                                arr_17 [i_0] [i_0] [i_1] [i_3] [i_3] [i_0] = ((((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) / var_9)));
                            }
                            var_22 = (min(var_22, ((min(((3276654593 >> (-8103425598490836126 + 8103425598490836157))), ((1018312700 << (9787736610722548625 - 9787736610722548605))))))));
                        }
                    }
                }
                var_23 ^= var_7;
                arr_18 [i_0] = (((arr_4 [i_0] [i_0]) || (3276654593 || 18446744073709551599)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_24 ^= (var_10 ? ((-(arr_22 [i_6] [i_6]))) : ((((((min((arr_20 [i_6]), 1018312698))) && (((3276654611 ? 1020 : 39611))))))));
                var_25 = (arr_19 [i_5]);
                var_26 = (((((min(998, 49823)))) % ((var_2 ? (arr_19 [i_6]) : ((1018312678 / (arr_21 [i_6] [i_5])))))));
                arr_23 [i_5] = (((((1018312703 ? 36028797018963712 : var_1))) ? (((((arr_22 [i_5] [i_5]) != var_2)))) : (((((1 ? (arr_20 [i_5]) : (arr_20 [i_5])))) ? (~36028797018963712) : (min((arr_20 [i_5]), 0))))));
                arr_24 [i_5] [i_5] = (arr_22 [i_5] [i_5]);
            }
        }
    }
    #pragma endscop
}
