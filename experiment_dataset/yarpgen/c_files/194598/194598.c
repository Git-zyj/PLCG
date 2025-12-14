/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -563602668;
    var_21 = (max(var_21, ((max(539109984, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_22 += 7;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 &= 255;
                        var_24 += var_9;
                        var_25 = (min(2147483643, (min(1773150218, (max(-2147483644, 4294967293))))));
                        arr_11 [i_0] [i_2] [i_2] [i_2] = ((max(16109206569133148604, var_11)) / (min(var_12, -2125876384)));

                        for (int i_4 = 4; i_4 < 17;i_4 += 1) /* same iter space */
                        {
                            var_26 = (max((max(-449697626769710712, (-127 - 1))), ((min(var_8, (!var_11))))));
                            arr_15 [i_0] [i_1] [i_2] [i_0] [i_3] [i_2] = (max(2147483629, -2147483643));
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 17;i_5 += 1) /* same iter space */
                        {
                            var_27 = ((var_18 ? 0 : 2147483626));
                            arr_18 [4] [i_1 - 1] [i_2] [i_3] [i_5] = 1;
                        }
                        for (int i_6 = 4; i_6 < 17;i_6 += 1) /* same iter space */
                        {
                            var_28 = var_2;
                            arr_21 [i_2] [i_3] [i_3] [i_2] = (min((max(4826574737474414954, -2147483644)), 1));
                            var_29 = (max(var_29, (((-((-2147483630 ? -1302817860 : 1)))))));
                            var_30 |= 2147483622;
                        }
                    }
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_24 [i_2] = ((((var_14 ? (((min(1, 1)))) : 1482641391217361210)) * (((19 ? 2147483626 : ((max(1, 27))))))));

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_31 = 3;
                            arr_28 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] = (1 - -772299474);
                            var_32 = var_7;
                        }
                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            arr_31 [i_7] [1] |= var_12;
                            var_33 = var_12;
                            var_34 = ((-(((max(var_16, -2147483644)) * 1))));
                            var_35 = (max(((var_6 ? ((-563480703 ? 18446744073709551596 : 2651601452646413409)) : (((var_7 ? 6488 : var_4))))), -14433));
                        }
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_36 = (96 ? 14421 : 0);
                            arr_34 [i_2] = (max(36, var_12));
                        }
                        var_37 = 3975334000;
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        var_38 *= ((((((((-2147483635 ? var_15 : -14431))) ? 0 : -85))) ? -5943 : (min(1483638758, -965996115))));
                        var_39 = (min((((((2147483647 ? var_10 : 1))) ? 511 : (((min(1, 250)))))), -18));
                    }
                    var_40 = var_10;
                }
            }
        }
    }
    var_41 = 1;
    #pragma endscop
}
