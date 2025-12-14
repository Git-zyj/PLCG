/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225616
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    var_15 = ((min(((var_4 ? var_7 : var_6)), var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_16 = (max(var_16, (((var_13 ? (min(var_7, (arr_2 [i_0]))) : (arr_2 [i_1]))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] = (min(((((((var_13 ? var_7 : (arr_8 [i_0] [i_0] [i_0] [i_0])))) ? (((arr_5 [i_0] [i_1]) ? (arr_3 [i_1] [i_3]) : var_10)) : ((var_12 ? var_11 : var_11))))), (min((min(var_2, (arr_4 [i_1]))), (arr_0 [i_0])))));
                        arr_13 [i_1] = (min(((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_1]), ((min(-100, var_10)))))), var_5));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
                    {
                        var_17 = 38003;
                        var_18 = (max(var_18, var_0));
                    }
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_19 = (arr_9 [i_0] [i_1] [i_5] [i_1]);
                        var_20 = (min(((~((var_2 ? 0 : var_2)))), ((var_2 ? var_5 : 8))));
                        var_21 = (var_12 ? (min((((arr_15 [i_0] [i_1] [i_5] [i_6]) ? var_1 : 32303)), -40)) : (~var_2));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_24 [i_0] [i_0] [i_5] [i_7] [i_7] [i_5] |= var_11;
                        arr_25 [i_0] [i_1] = var_4;
                        arr_26 [i_0] [i_0] [i_1] [i_0] = var_12;
                        var_22 = (arr_21 [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_31 [i_1] = var_2;
                        var_23 *= (!((min((((157 ? var_10 : var_11))), (min((arr_4 [i_0]), var_13))))));
                        var_24 ^= var_7;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 22;i_10 += 1)
                        {
                            var_25 = (((((~(min(var_8, (arr_27 [i_1] [i_9] [i_1] [i_9])))))) ? var_7 : (min(((min(var_0, (arr_8 [i_9] [i_9] [i_9] [i_9])))), (~var_9)))));
                            arr_39 [i_1] [i_9] [i_5] [i_9] [i_10] = ((!((min(var_7, (!var_0))))));
                            var_26 = (arr_17 [i_1] [i_1] [i_1] [i_1]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            var_27 = var_7;
                            arr_43 [i_1] [i_1] [i_1] [i_5] [i_1] = ((var_7 ? 107 : var_13));
                            arr_44 [i_1] [i_1] [i_1] [i_0] [i_11] = var_2;
                            var_28 = var_12;
                        }
                        /* vectorizable */
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_47 [i_9] [i_1] [i_1] [i_9] [i_12] = arr_10 [i_0] [i_0] [i_5] [i_9] [i_1];
                            arr_48 [i_0] [i_1] [i_1] [i_9] = (arr_21 [i_9]);
                            var_29 &= var_5;
                        }
                        var_30 &= (min(var_12, (arr_33 [i_0] [i_0] [i_9] [i_9])));
                    }
                    arr_49 [i_0] [i_1] [i_1] [i_0] = (arr_45 [i_5]);
                    arr_50 [i_1] [i_1] [i_1] [i_5] = (min(var_3, ((-var_5 ? var_13 : var_11))));

                    for (int i_13 = 1; i_13 < 1;i_13 += 1)
                    {
                        arr_53 [i_0] [i_1] [i_0] [i_0] = var_13;
                        var_31 = (((arr_19 [i_0] [i_0] [i_1] [i_1] [i_5] [i_13 - 1]) ? 1 : 14359));
                        arr_54 [i_0] [i_1] [i_5] [i_13 - 1] = 1;
                        arr_55 [i_0] [i_0] [i_0] [i_1] = ((26 ? 0 : 4));
                    }
                    arr_56 [i_1] [i_1] [i_1] = (arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                }
                arr_57 [i_0] [i_1] [i_0] = (arr_46 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 21;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 22;i_15 += 1)
                    {
                        {
                            var_32 = (arr_34 [i_15] [i_0] [i_0]);
                            arr_63 [i_0] [i_1] [i_1] [i_15] = (arr_28 [i_1] [i_1]);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
