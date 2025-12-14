/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_0] = (max(91, 151));
                    var_21 = (((~35728) ? 151 : ((min(var_13, 852505161)))));
                    arr_9 [i_0] [i_0] [i_2 - 1] = ((~((0 ? -9 : 18288))));
                    arr_10 [i_0] [i_0] [i_0] = 1;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_22 = ((-97 ? -1 : var_1));

                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        var_23 = (max(var_23, ((var_17 ? 105 : (~3)))));
                        var_24 = (!1);
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        arr_19 [i_0] [i_1] [i_3] [i_5] [i_5] [i_5] = ((-(var_4 || var_9)));

                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_25 = var_2;
                            var_26 -= 8131059935034617976;
                            var_27 = var_15;
                            arr_22 [i_0] = var_19;
                        }
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_7] = (1 | 165);
                        var_28 = (max(var_28, var_13));
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {
                        arr_29 [i_0] [i_0] [i_0] [i_8] = -121;
                        var_29 = ((var_4 ? var_18 : 4));

                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            var_30 = -8932449093100651758;
                            arr_34 [i_0] [i_1] [i_3] [i_3] [i_9] = ((~((1 ? var_10 : var_14))));
                            var_31 = (max(var_31, var_7));
                        }
                    }
                    var_32 *= 68;
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 21;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 20;i_11 += 1)
                    {
                        {
                            arr_40 [i_0] [i_1] [i_10] [i_11] [i_1] [i_1] = ((var_0 ? ((-((0 ? -2978375897071848109 : 3)))) : (18446744073709551596 & 5551032250667664125)));
                            var_33 = (!var_6);
                        }
                    }
                }
                var_34 = var_6;
            }
        }
    }
    #pragma endscop
}
