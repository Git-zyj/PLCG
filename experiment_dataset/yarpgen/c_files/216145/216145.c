/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (min(var_19, var_10));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
                    {
                        var_20 = ((!(arr_7 [i_0] [i_1] [i_2] [i_1])));
                        var_21 *= (((var_1 & var_7) ? var_6 : ((1289032455 - (arr_7 [5] [i_1] [i_1] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                    {
                        var_22 = (arr_9 [i_4] [i_0] [i_0] [i_0]);
                        arr_15 [i_0] [i_4] [i_0] [i_4] [i_4] = 105;
                    }
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        var_23 = (arr_13 [i_0] [i_5 + 2]);
                        var_24 = (((arr_17 [i_0] [i_1]) | -14071));
                        var_25 = var_8;
                    }
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((-(((arr_8 [i_0] [i_1] [i_0] [i_1]) + var_1))));
                        var_26 -= ((147 ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_6] [i_2] [i_1])));
                        var_27 = ((-(96 | 17)));
                        var_28 = -415987398;
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            {
                                var_29 = 3314893500;
                                var_30 = (!var_13);
                                var_31 = ((-var_1 ? (((arr_5 [i_0] [i_0] [i_0] [i_0]) ? var_15 : (arr_0 [i_0] [i_1]))) : 14071));
                            }
                        }
                    }
                    arr_27 [i_0] [i_1] = ((-(arr_10 [i_2])));
                }
                for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                {
                    var_32 = (max(4198, (arr_25 [i_0] [i_0] [i_1] [i_9] [14] [i_9])));
                    var_33 = (-((((137 ? (arr_16 [i_0] [i_1] [i_9] [i_1]) : (arr_29 [i_9]))))));
                    var_34 ^= var_7;
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                {
                    arr_32 [i_0] [i_10] = (((53345 ? 3121484374525611631 : (max(1, 7027753633201385394)))));

                    for (int i_11 = 2; i_11 < 22;i_11 += 1)
                    {
                        var_35 = max(var_2, (min(-7037115774827474753, (arr_6 [i_0] [i_0]))));
                        var_36 = ((((max((arr_12 [i_0] [i_0] [i_10] [i_11 + 2] [i_10] [i_11]), (arr_19 [i_0] [i_1] [i_10] [i_11 + 1])))) ? ((((arr_3 [i_0] [i_0] [i_0]) ? (!var_12) : (((arr_14 [i_1] [i_10] [i_11]) ? var_13 : var_2))))) : (max(var_6, (arr_26 [i_11 - 2] [i_1] [i_10] [i_0] [i_11])))));
                        arr_35 [i_0] [i_10] [i_1] [i_10] = (max((((-(arr_14 [i_0] [i_11 + 2] [15])))), ((152 ? 0 : 136))));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 24;i_12 += 1) /* same iter space */
                    {
                        var_37 = (arr_20 [i_0] [i_1] [i_10] [i_10]);
                        var_38 = (((arr_37 [i_0] [i_10] [i_10] [i_12]) != var_6));
                        arr_38 [i_0] [i_0] [i_10] [i_10] [i_12] [i_0] = (((arr_30 [i_0] [i_1] [i_10]) != (arr_30 [i_0] [i_1] [i_10])));
                    }
                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 24;i_13 += 1) /* same iter space */
                    {
                        arr_41 [i_10] [i_10] = (arr_28 [i_0] [i_1] [i_10] [i_10]);
                        var_39 = (max(var_39, ((((arr_8 [i_0] [10] [i_10] [i_13]) ? 8058398676657449280 : (arr_22 [i_13] [i_10] [i_10] [i_1] [i_0]))))));
                        var_40 = ((var_11 ? ((-(arr_8 [i_0] [i_0] [i_0] [i_13]))) : (arr_3 [i_0] [i_1] [i_0])));
                        var_41 = arr_6 [i_13] [i_1];

                        for (int i_14 = 0; i_14 < 24;i_14 += 1)
                        {
                            arr_44 [i_14] [i_10] [i_10] [i_10] [i_1] [i_10] [i_0] = (arr_26 [i_0] [i_0] [i_10] [i_13] [i_13]);
                            var_42 |= (((arr_42 [i_14] [2] [i_1] [i_10] [i_1] [i_0] [i_0]) + (arr_42 [i_1] [i_1] [i_13] [i_1] [i_14] [i_1] [i_13])));
                        }
                        for (int i_15 = 0; i_15 < 24;i_15 += 1)
                        {
                            var_43 = (arr_28 [i_0] [i_1] [i_13] [i_10]);
                            var_44 = (arr_33 [i_0] [i_1] [i_0] [i_10] [i_15]);
                            var_45 = (max(var_45, ((((((arr_47 [i_0] [i_0]) / (arr_12 [i_0] [i_0] [i_0] [i_10] [i_0] [i_10]))) >> ((((10 ? (arr_43 [i_13] [i_15] [i_13]) : var_4)) - 1560008344)))))));
                            var_46 = (var_4 ? (arr_28 [i_13] [i_1] [i_1] [i_10]) : (arr_28 [i_10] [i_10] [i_10] [i_10]));
                        }
                    }
                    for (int i_16 = 0; i_16 < 24;i_16 += 1) /* same iter space */
                    {
                        var_47 = (((arr_45 [i_0] [i_1] [i_10] [i_1] [i_10]) ? (arr_12 [i_0] [i_1] [i_1] [i_16] [i_16] [i_10]) : (((max((arr_46 [i_0] [i_0] [i_0] [i_0] [i_0]), var_9))))));
                        arr_51 [i_10] [i_10] = (min(((((min(var_10, 22))) ? ((18446744073709551615 ? 3046210368488187919 : 10)) : var_16)), 14085526673287424945));
                        var_48 = (arr_14 [i_0] [i_1] [i_16]);
                        arr_52 [i_16] [i_1] [i_10] [i_0] = (max((((((min((arr_14 [i_10] [i_10] [i_16]), var_8))) + 15))), ((((min((arr_50 [i_10] [i_10] [i_10] [i_10]), (arr_33 [i_16] [i_16] [i_10] [i_10] [i_16])))) ? (((4 ? var_9 : var_5))) : (max(var_17, 150))))));
                    }
                    var_49 = min(((((arr_48 [i_10] [i_1] [i_10] [i_1] [i_1] [i_0]) ? (arr_1 [i_0] [i_0]) : 0))), (arr_8 [i_0] [i_0] [i_0] [i_0]));
                }
                for (int i_17 = 0; i_17 < 24;i_17 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_18 = 0; i_18 < 24;i_18 += 1)
                    {
                        for (int i_19 = 4; i_19 < 21;i_19 += 1)
                        {
                            {
                                arr_61 [i_19] [i_0] [i_18] [i_18] [i_19] = var_14;
                                var_50 = (max(var_50, (((-2127213435 ? -71712204 : 105)))));
                                var_51 = (arr_29 [i_18]);
                            }
                        }
                    }
                    arr_62 [i_0] [i_1] [i_17] = (max((max(var_17, var_3)), (arr_30 [i_0] [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_20 = 0; i_20 < 1;i_20 += 1)
                    {
                        for (int i_21 = 0; i_21 < 24;i_21 += 1)
                        {
                            {
                                arr_68 [i_20] [i_1] [i_17] [i_20] [i_1] = var_14;
                                arr_69 [i_0] [i_0] [i_0] [i_0] [i_20] [i_0] = max((arr_23 [i_1] [i_1] [i_21] [i_21] [2]), (-17 && -71712204));
                            }
                        }
                    }
                }
                arr_70 [i_0] [i_1] [i_0] = var_17;
                arr_71 [i_1] [i_1] = 2315545303851831195;
            }
        }
    }
    var_52 = ((var_15 * (var_14 == var_9)));
    var_53 += var_1;
    #pragma endscop
}
