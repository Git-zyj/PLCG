/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = min((~var_6), (!110));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (min((min(((max(var_19, var_16))), (((arr_5 [i_0] [i_0] [i_0]) ? (-9223372036854775807 - 1) : (arr_2 [i_1]))))), var_13));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_0] [i_1] [i_1] = (((!((max(var_6, 1995863292))))));
                            var_22 = (!(((1639 ? var_3 : (arr_5 [i_3] [i_3 + 1] [i_3 + 1])))));
                            var_23 = (max(242, 88225998));
                            var_24 = (((65535 ? var_17 : var_11)));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    var_25 = ((1 ? (((63 ? 3073147496 : -1639))) : (((var_9 ? var_11 : ((0 ? -13955 : 14)))))));
                    var_26 = (-127 - 1);
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_0 - 1] [i_0 - 1] [i_0] = var_10;
                    var_27 = var_17;
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = var_16;
                    var_28 = (((((!(((1 ? (arr_13 [i_0] [i_0] [i_0 - 1]) : var_15)))))) > (arr_18 [i_0] [i_0 - 1] [i_0] [i_0 + 1])));
                    arr_22 [i_0] [i_0] = (max((~var_12), 0));
                    var_29 = var_8;
                }
                var_30 = ((!(((~((max(var_17, -10))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                {
                    var_31 = ((var_10 || ((!(arr_3 [i_9 + 2] [i_9 - 1])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_32 = ((((((arr_30 [i_9] [i_9 - 1] [i_9] [i_9 - 1]) ? var_7 : (~var_18)))) ? (((255 ? (max(61580, var_16)) : ((((arr_8 [i_7] [2] [i_7 + 1] [i_7 + 1]) ? var_14 : (-127 - 1))))))) : ((((max(var_16, var_16))) ? ((var_8 ? 0 : 18446744073709551604)) : (arr_27 [12] [i_8])))));
                                var_33 = (min(((var_8 ? ((var_14 ? 65535 : var_9)) : ((var_1 ? 1 : 27962)))), var_2));
                                var_34 = (~28133);
                                arr_39 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((~var_5) & ((((!var_12) ? var_15 : 0))));
                            }
                        }
                    }
                    var_35 = (min(var_35, ((min((~0), ((-96 ? 65535 : var_5)))))));
                }
            }
        }
    }
    #pragma endscop
}
