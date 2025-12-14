/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((((max(var_9, -12751))) ? var_2 : (max(145828387, var_2))))) ? var_1 : ((((var_6 ? var_3 : var_2)) * 0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] = (~var_8);
                arr_6 [i_0] [i_1] [i_1] = (~var_6);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_3] = ((var_7 ? -121 : (arr_8 [i_3])));
                var_11 = ((!((max((min(25203, (arr_4 [i_2] [i_3] [i_3]))), var_7)))));
                var_12 = -var_1;
                arr_13 [i_2] [i_3] = 1205716262;
                arr_14 [i_2] [i_3] [i_3] = 119;
            }
        }
    }

    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_17 [i_4] [i_4] = ((+(((1205716263 >> 1) ? var_3 : (~13)))));
        var_13 = -74;
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_6 = 1; i_6 < 18;i_6 += 1)
        {
            var_14 = -var_7;
            arr_23 [i_5] = var_7;
            arr_24 [i_5] [i_5] [i_5] = (arr_15 [i_5]);
        }
        arr_25 [i_5] = (((((max(var_3, 124)))) ? (((arr_19 [i_5]) ? var_1 : ((var_5 ? (arr_15 [i_5]) : var_9)))) : (!16)));
        arr_26 [i_5] [i_5] = var_9;
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 21;i_9 += 1)
                {
                    {
                        arr_34 [i_5] [1] [i_5] = var_2;

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            arr_38 [i_5] [i_5] [i_8] [i_9] [i_10] = (~65535);
                            arr_39 [19] [i_7] [i_7] [i_5] [i_7] = ((((min((arr_15 [i_9 - 3]), var_2))) ? (arr_37 [i_5] [i_5] [i_8] [i_9] [i_9 - 1] [i_10] [i_10]) : (((((var_7 ? var_7 : -1))) ? (min(var_5, (arr_22 [i_5] [i_7]))) : ((var_3 ? 1179931292 : 1929830339481671778))))));
                            var_15 *= (((arr_31 [i_9 - 2] [i_9 - 3] [2] [i_9 - 2]) ? 54439 : -var_9));
                        }
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            arr_43 [i_7] [i_8] [i_9] [i_5] = (((!(arr_37 [i_7] [i_5] [i_9] [i_9 + 1] [i_9] [i_9 - 1] [i_9 - 3]))));
                            arr_44 [i_5] = (arr_21 [i_5] [i_5] [i_5]);
                            arr_45 [i_5] [i_7] [i_7] [i_9 - 4] [i_11] = (min((((var_1 ? var_6 : (arr_35 [i_9 + 1] [i_9] [1] [i_9 - 2] [i_9])))), (max((((arr_35 [i_5] [i_7] [i_8] [i_9] [i_11 + 1]) ? (arr_15 [i_8]) : var_5)), -98))));
                        }
                        for (int i_12 = 0; i_12 < 22;i_12 += 1)
                        {
                            arr_48 [i_5] [i_7] [i_8] [i_9] = ((((arr_37 [i_5] [i_5] [i_7] [i_8] [i_9] [i_9 - 2] [i_12]) ? (arr_27 [i_5]) : var_6)));
                            arr_49 [i_5] [i_5] = (arr_37 [i_9 - 1] [i_5] [i_9 - 4] [i_12] [7] [i_12] [i_12]);
                            var_16 = (arr_33 [i_5] [i_7] [i_8] [i_9] [i_12] [i_5]);
                        }
                        arr_50 [i_5] [i_7] [i_7] [i_8] [i_5] = 13;
                        var_17 = ((max((!var_5), (arr_41 [i_5] [i_7] [i_8] [i_9] [i_8] [i_9 - 3] [i_9]))));
                        arr_51 [i_5] [i_5] [i_5] [i_5] = (((((var_4 ? var_3 : (arr_15 [i_5]))))) ? ((((!(arr_36 [i_5] [i_9 - 4]))))) : (((((var_9 ? (arr_21 [i_8] [i_7] [i_5]) : var_4))) ? (arr_15 [i_5]) : var_5)));
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1) /* same iter space */
    {
        arr_54 [i_13] = ((-(min((arr_28 [i_13] [i_13]), var_9))));
        arr_55 [i_13] [i_13] = (max((max((arr_15 [i_13]), (arr_27 [i_13]))), (arr_22 [i_13] [i_13])));
        var_18 = ((((((arr_47 [1] [i_13] [i_13] [i_13]) || (!var_0)))) * (min((arr_18 [i_13]), ((var_8 & (arr_15 [i_13])))))));
        var_19 = (~0);
    }
    #pragma endscop
}
