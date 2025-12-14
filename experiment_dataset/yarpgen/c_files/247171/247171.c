/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(4206723524416854734, ((((var_0 ? var_16 : var_15))))));
    var_20 = max(var_10, (!4085923661399241146));
    var_21 = (min(var_21, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = 38465;

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    var_22 |= (max(-4206723524416854735, 38477));
                    arr_7 [i_2] [i_1] [i_0] = (max((max(-1, 31)), (arr_6 [i_0] [i_1] [i_1] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_23 = (max(((~(5034086562076256844 | -3645992410891900817))), ((+(((arr_6 [i_4] [i_3] [i_2] [i_1]) | 18013848753668096))))));
                                var_24 = (arr_5 [i_0] [i_1] [i_3]);
                                var_25 = (arr_1 [i_0] [i_0]);
                                arr_13 [i_4] [i_1] [i_2] [13] = ((~(arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])));
                                var_26 = (-4206723524416854734 == -74);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_18 [i_1] [i_1] [i_1] = (!18446744073709551615);
                    arr_19 [i_1] = var_8;
                    arr_20 [i_0] [i_0] [i_0] [i_0] = (((((arr_5 [2] [i_1] [i_1]) && -1456719163)) ? (-24 || var_15) : ((var_18 ? var_18 : (arr_9 [i_0] [13] [13] [i_0] [13])))));
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    arr_24 [i_6] [i_6] = (((((arr_0 [i_6 - 3]) ? (arr_0 [i_6 - 2]) : (arr_0 [i_6 + 3]))) == (max(16586, (arr_21 [i_6] [i_6 - 2])))));

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_27 = ((~((((arr_16 [i_1] [i_7]) || (arr_17 [i_1]))))));

                        for (int i_8 = 1; i_8 < 12;i_8 += 1)
                        {
                            var_28 = (arr_27 [7] [7] [i_6] [i_7] [i_1] [i_6]);
                            var_29 = ((19886 || (arr_28 [i_0] [i_1] [i_6] [i_1] [i_8 + 1])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
