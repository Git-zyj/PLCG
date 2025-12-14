/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((((var_8 ? var_13 : var_0))) - (max(18446744073709551607, 1))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] = 4814209491863566316;
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((39 ^ (max((max(var_0, 1)), 1))));
                    var_18 = ((((13257810970105539969 ? ((var_13 ? var_7 : var_11)) : (((var_4 ? var_2 : var_16))))) / var_16));
                    var_19 *= (((((28 + (arr_0 [i_0] [i_0]))) < ((-680492396 ? -680492396 : var_5)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_22 [i_7] [i_7] [i_5] [i_7] [i_3] = (((min((arr_20 [i_6 + 3]), (arr_20 [i_6 + 3]))) ? 0 : (((((1120 ? 4814209491863566328 : var_1)))))));
                                arr_23 [i_3] [i_4] [i_6] [i_6] [i_7] |= -23818;
                                var_20 = var_5;
                                var_21 = (((arr_12 [i_4] [i_5]) | var_13));
                                var_22 = (min(var_22, (((arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]) ? (max(((((arr_1 [i_3] [i_3]) - -24702))), 1258789567556203487)) : (-9223372036854775807 - 1)))));
                            }
                        }
                    }
                }
                var_23 = (arr_11 [i_3] [i_3]);
            }
        }
    }
    var_24 = var_7;
    #pragma endscop
}
