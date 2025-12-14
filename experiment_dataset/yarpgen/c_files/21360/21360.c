/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21360
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 = (max(var_15, var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [5] = (max(((-(arr_1 [i_0]))), ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_16 = (min(((max((arr_1 [i_0]), (var_10 - var_7)))), ((((max(var_5, 0))) ? ((58173 ? var_13 : var_5)) : (arr_1 [i_0])))));
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_17 = (max((max(2187673765, (arr_4 [i_1 - 3]))), (7359 - 7363)));
            var_18 *= (min((((arr_5 [i_1 + 2] [i_1 - 3] [i_2 + 1]) - 7367)), (arr_5 [i_1 + 2] [i_1 + 2] [i_2 + 1])));
        }
        for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 3; i_4 < 13;i_4 += 1) /* same iter space */
            {
                var_19 = (((arr_8 [i_4 - 1] [i_3 - 2] [i_1]) >> 1));
                var_20 = (arr_7 [i_3]);

                /* vectorizable */
                for (int i_5 = 2; i_5 < 14;i_5 += 1)
                {
                    arr_14 [i_3] [i_5] [i_4] [i_3] [i_1 - 4] [i_3] = (arr_4 [i_5]);
                    var_21 += (arr_8 [i_1] [i_1 - 4] [i_1]);
                    arr_15 [i_3] [i_3 + 1] [i_3] [i_5] [i_4] [i_4] = var_12;
                }
            }
            /* vectorizable */
            for (int i_6 = 3; i_6 < 13;i_6 += 1) /* same iter space */
            {
                arr_19 [i_1] [i_3] [i_6] = var_7;
                var_22 -= (arr_5 [1] [i_3 - 2] [i_1]);
            }
            for (int i_7 = 3; i_7 < 13;i_7 += 1) /* same iter space */
            {
                arr_23 [i_7 - 1] [i_3] [i_1] = ((((max((arr_3 [i_1 - 4]), (min(var_10, (arr_12 [i_7 + 1] [12] [i_1] [i_1])))))) ? (max((max(var_11, -1915113182)), var_11)) : (((((max(1, var_12))) ? (arr_13 [i_3 + 1] [i_7]) : var_3)))));
                /* LoopNest 2 */
                for (int i_8 = 4; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        {
                            var_23 = (arr_7 [i_3]);
                            arr_29 [i_3] [i_3] [i_8 - 3] = (max(((max((((~(arr_25 [i_1 + 2] [i_3] [i_7] [i_8])))), (max((arr_22 [i_9] [i_3] [i_3] [i_1]), (arr_20 [i_8])))))), ((((min((arr_4 [i_1]), (arr_26 [i_3] [i_3] [i_8] [i_3])))) ? var_1 : (58173 - var_2)))));
                            arr_30 [i_3] [i_1] [i_3] [i_1] = (arr_3 [i_9]);
                        }
                    }
                }
                arr_31 [i_7] [i_3] [i_1 - 2] = var_13;
                arr_32 [i_3] [i_3] [i_3] [i_7] = -4329440527566755386;
                var_24 = -6276;
            }

            for (int i_10 = 2; i_10 < 11;i_10 += 1)
            {
                var_25 = (max(var_25, (((!(arr_13 [i_10 - 1] [i_3 - 2]))))));
                arr_35 [5] [i_3] [i_3] = -1348510211;
            }
            arr_36 [i_3] [i_3] = var_4;
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 14;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 1; i_13 < 13;i_13 += 1)
                    {
                        {
                            var_26 = (min(var_26, 19856));
                            arr_46 [i_3] = ((~(arr_38 [i_12])));
                            var_27 = var_7;
                        }
                    }
                }
            }
            arr_47 [i_3] = var_0;
        }
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            var_28 = (min(var_28, (((((max((arr_37 [i_1] [i_14] [i_14] [i_14]), (max((arr_28 [i_1] [i_1] [i_14] [i_14] [i_1] [i_1] [i_1]), var_3))))) ? (((((((arr_37 [i_1] [i_14] [i_14] [10]) ? var_4 : var_0))) ? (((7363 - (arr_43 [i_1] [i_1] [i_1] [i_1] [i_1 - 3])))) : (((arr_25 [i_14] [i_14] [i_1 - 2] [i_1]) ? var_12 : (arr_42 [i_1] [i_1] [i_1] [i_1 + 1])))))) : (max((((58172 - (arr_38 [i_14])))), (arr_48 [i_1] [i_14]))))))));
            /* LoopNest 3 */
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                for (int i_16 = 1; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            var_29 &= (arr_3 [i_1]);
                            arr_57 [i_1 - 2] [i_17] [i_15] [i_1] [i_17] [i_17] [7] = (((((var_4 - (min(7371, 2231740214))))) ? -2023150175 : ((58173 ? (~58172) : 4238361685783391294))));
                            var_30 = ((((min((arr_55 [i_1] [i_1 + 1] [i_16 + 1]), (arr_3 [i_1 - 2])))) ? (max((arr_3 [i_1 - 1]), var_9)) : ((max(var_8, var_8)))));
                        }
                    }
                }
            }

            for (int i_18 = 0; i_18 < 15;i_18 += 1)
            {
                arr_60 [i_18] = -1;
                arr_61 [i_18] = var_1;
            }
        }
        arr_62 [i_1] = max(var_4, ((((max((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1] [i_1]), (arr_20 [i_1 - 3])))) ? 23567 : var_4)));
    }
    for (int i_19 = 2; i_19 < 21;i_19 += 1)
    {
        var_31 = (((max(((58184 - (arr_63 [i_19 - 2]))), 7352))) - (((((var_7 ? (arr_64 [i_19 - 2] [i_19]) : (arr_64 [i_19] [i_19])))) - (min(var_13, var_6)))));
        arr_65 [i_19] = max((arr_63 [i_19 + 2]), -var_5);
    }
    #pragma endscop
}
