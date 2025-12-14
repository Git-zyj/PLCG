/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_14 = var_9;
                        arr_10 [i_0] [i_0] = ((var_1 ? var_12 : (((((0 ? 39743 : var_9))) ? var_12 : ((32 ? 786432 : -9651))))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_11;
                        var_15 *= var_12;

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_16 = var_10;
                            var_17 += ((~(((arr_13 [i_0] [i_1] [i_2] [i_4] [i_5]) ? ((-1389 ? var_2 : 1)) : -var_6))));
                            var_18 *= ((((2240 ? var_2 : -1389))));
                            var_19 *= 17017;
                        }
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_20 = (min(var_20, var_8));
                        var_21 = (max(var_21, (arr_20 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])));
                        var_22 = 27105;
                        var_23 = (20609 / var_10);
                    }

                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_24 |= ((((min(var_10, ((-(arr_20 [i_0] [i_1] [i_1] [i_2] [i_2] [4])))))) ? (((((max(var_13, var_3))) ? var_6 : ((max(var_3, (arr_11 [i_0] [i_2] [i_7]))))))) : (max(var_10, ((max(var_0, var_4)))))));
                        var_25 = ((((max(((var_10 ? var_8 : var_5)), (((1 ? -17309 : 17309)))))) ? (max(((158648423 ? 10475866520840006583 : 39743)), 120)) : var_10));
                        var_26 -= var_8;
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                    {
                        arr_25 [i_0] = var_4;
                        arr_26 [i_0] [i_0] [18] [i_0] = (-(!-20733));
                        var_27 &= var_3;
                    }
                    for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                    {
                        arr_29 [i_0] = 3706676130;

                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = var_6;
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 24;i_11 += 1)
                        {
                            var_28 = 20733;
                            var_29 = ((var_5 ? var_3 : (arr_8 [i_0] [i_2] [i_9] [i_11])));
                            var_30 = var_9;
                            var_31 *= -var_12;
                        }
                        var_32 = (~-17309);
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 24;i_13 += 1)
                        {
                            {
                                var_33 = ((((!(((1 ? var_6 : var_11))))) ? -1950 : (((!var_10) ? ((64366 ? 1 : 1)) : var_9))));
                                arr_41 [i_0] [i_0] [i_1] [i_12] [i_12] [8] [8] |= (((((-((19141 ? 11545964198025639973 : 1))))) ? (((~var_0) ? ((var_1 ? var_10 : var_7)) : var_5)) : (~var_3)));
                                var_34 = max(8837371766539157182, 8191260727552329204);
                                var_35 = (arr_31 [i_13] [i_12] [0] [1] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_36 = (min((((!(((var_8 ? var_11 : var_13)))))), var_8));
    #pragma endscop
}
