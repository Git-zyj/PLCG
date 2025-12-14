/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_6 [0] = min((arr_2 [i_1]), var_8);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_11 = ((((max((arr_1 [i_0] [i_2]), 4333))) ? -var_5 : var_7));
                            arr_14 [3] [6] [1] [i_3] [i_3] = ((((!(-1 && var_8))) && var_2));
                            arr_15 [i_0] [i_0] [i_3] [3] [i_3] = 196;
                            arr_16 [i_3] [9] [1] [i_3] = ((+((min((arr_7 [11] [5] [11]), (arr_7 [0] [0] [9]))))));
                        }
                    }
                }
                var_12 = (max(var_12, (((((((((min(245, var_3)))) - var_3))) ? (((-(arr_13 [14] [14] [12] [i_1])))) : (arr_3 [i_0]))))));
                var_13 = (min(((((((var_0 ? var_4 : (arr_1 [i_0] [2])))) || (arr_1 [i_0] [i_1])))), 205));
                var_14 -= var_0;
            }
        }
    }

    for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [8] [6] [7] [6] [i_5] = (arr_10 [9] [0]);
                        arr_29 [12] [11] [i_5] [i_5] [5] [5] = (((((0 ? var_8 : -5))) ? ((((!var_0) ? var_1 : var_7))) : ((-(arr_13 [i_4] [7] [8] [i_5])))));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_34 [2] [2] [i_5] [3] [5] [2] = var_10;
                        arr_35 [4] [i_5] = (arr_11 [i_5] [16] [2] [i_5]);
                        arr_36 [12] [11] [11] [i_5] [5] = (((((((var_2 ? var_6 : var_6))) ? (~var_2) : (var_2 ^ var_4)))) ? 443493062 : (((var_10 == (arr_1 [i_5] [i_5])))));
                    }
                    var_15 = (((((+((var_5 ? (arr_24 [11] [11]) : -46))))) ? ((var_4 ? (((arr_5 [3] [12]) ? (arr_9 [4] [4] [5] [1]) : (arr_4 [11]))) : 205)) : ((((((arr_32 [i_4] [6]) ? -2 : (arr_12 [9] [9] [1] [16])))) ? (((arr_21 [i_4] [i_4]) ? var_5 : var_4)) : var_8))));
                    var_16 = ((((min((((var_1 + 2147483647) << (((var_5 + 57) - 8)))), (-2147483647 - 1)))) ? ((((39 ? var_5 : 2)))) : ((min((!var_3), ((220 || (arr_22 [i_5]))))))));
                    var_17 = (max(((min(var_6, ((((arr_31 [i_4] [i_4] [0] [7]) >= 219)))))), (((var_7 ? (arr_1 [9] [6]) : 56)))));
                }
            }
        }

        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_18 = (min(var_18, var_1));
            var_19 = (max(var_19, ((((max((((arr_0 [i_9]) & -421547538)), ((-1221901698 / (arr_38 [i_4] [12] [1]))))) / ((-(arr_32 [4] [i_4]))))))));
        }
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            var_20 = (((((4041323424757924854 ? (arr_2 [i_4]) : var_6))) ? (((arr_4 [2]) % ((var_3 ? var_4 : 10305)))) : ((((min(var_5, (arr_39 [10])))) ? var_7 : var_4))));
            var_21 -= (-2147483647 - 1);

            for (int i_11 = 0; i_11 < 15;i_11 += 1)
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 15;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 13;i_13 += 1)
                    {
                        {
                            arr_50 [i_13] [i_13] [i_13] [i_13] [10] = ((((((max((arr_11 [i_13] [1] [1] [2]), (arr_13 [1] [15] [12] [i_13])))) ? 202 : -24147)) >= 23974));
                            arr_51 [i_13] = ((((((((var_4 ? var_1 : (arr_44 [i_4] [13])))) ? ((147 << (31241 - 31228))) : (~var_0)))) ? (min((arr_12 [3] [3] [3] [8]), -var_0)) : var_9));
                        }
                    }
                }
                arr_52 [i_4] [5] [1] [6] = (min(((var_2 ? (var_1 / var_5) : 1746668860)), (min(var_3, -var_7))));
            }
            for (int i_14 = 0; i_14 < 15;i_14 += 1)
            {
                var_22 = (((-(arr_10 [i_10] [i_14]))));
                var_23 = (arr_4 [i_4]);
                var_24 &= ((~-1492274172) ? var_8 : var_1);
            }
            for (int i_15 = 0; i_15 < 15;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 2; i_16 < 14;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 15;i_17 += 1)
                    {
                        {
                            arr_63 [5] [8] [5] [13] [13] = ((((((var_10 && 130) ? (~var_10) : var_9))) ? 1 : (((arr_58 [i_16 - 1]) ? (arr_58 [8]) : (arr_58 [i_4])))));
                            arr_64 [11] [11] [0] = (-((-((var_2 ? 4 : (arr_25 [i_15]))))));
                            var_25 -= 129;
                        }
                    }
                }
                var_26 = -37;
                arr_65 [2] [2] [7] [7] = ((min(700018969, -7919842855718506942)));
            }
        }
        var_27 = (max(var_27, ((min((arr_23 [i_4] [4]), ((68 ? (arr_23 [i_4] [i_4]) : (arr_23 [i_4] [i_4]))))))));
    }
    for (int i_18 = 0; i_18 < 15;i_18 += 1) /* same iter space */
    {
        arr_69 [13] = ((!(((132 << (((arr_1 [i_18] [i_18]) - 25)))))));
        var_28 = var_5;
    }
    #pragma endscop
}
