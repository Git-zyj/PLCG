/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 18446744073709551594;
    var_12 = (max(var_12, ((var_0 >= (((var_0 < var_10) ? var_7 : ((var_7 ? 57996 : var_2))))))));
    var_13 = ((((min((var_1 & 172798075), (var_9 >> var_8)))) ? var_9 : (min(var_8, (max(var_9, var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_10 [i_1] = (((arr_6 [i_0] [2] [2]) || ((min(((~(arr_5 [i_0]))), (1 || 120))))));
                    var_14 = (max(var_14, ((min(((((((arr_8 [1]) ? var_3 : (arr_2 [6] [5])))) ? (arr_0 [i_1] [6]) : (max((arr_1 [1]), var_6)))), ((~(max((arr_9 [i_0] [i_0]), var_5)))))))));
                    var_15 = ((((-((3932202171 ? var_5 : var_9)))) != ((((((min(var_10, var_10))) && (arr_0 [i_2] [i_1])))))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    arr_13 [6] [i_1] [4] [4] = var_4;
                    arr_14 [1] [9] [i_3] = ((var_5 ? var_3 : var_7));
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 7;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_20 [i_0] [i_0] [1] [i_0] [2] [6] [1] = var_4;
                                arr_21 [6] [2] [6] [i_3] [i_3] [i_4] [6] = ((~(arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [1] [5])));
                                var_16 = var_7;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_17 = var_9;
                                arr_28 [i_3] [2] = ((!(var_4 == var_8)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 8;i_9 += 1)
                        {
                            {
                                arr_33 [i_0] [1] [3] [i_0] [i_0] = ((((var_10 ? var_8 : (arr_0 [8] [i_9]))) * (((var_1 ? var_10 : 16)))));
                                arr_34 [5] [i_1] [2] [4] [9] [i_1] = (((((~(arr_5 [7])))) ? (((var_9 >> (var_6 - 13458159449625884581)))) : (arr_25 [4] [i_8 - 1] [6] [2] [i_9] [i_9 - 2])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                {

                    for (int i_11 = 0; i_11 < 10;i_11 += 1)
                    {
                        var_18 -= (((arr_4 [i_10]) / -var_4));
                        var_19 = var_5;
                    }
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        arr_41 [3] [i_1] [i_10] [i_1] [i_12] = (((!var_7) <= var_9));
                        arr_42 [i_0] [i_0] [i_0] [0] [i_12] = var_2;

                        for (int i_13 = 0; i_13 < 10;i_13 += 1)
                        {
                            arr_45 [5] = ((-(((arr_2 [2] [1]) ? var_7 : var_2))));
                            var_20 = (max(var_20, (arr_37 [i_0] [i_0] [i_0] [i_10] [i_12] [4])));
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            arr_50 [i_0] [2] [6] [0] [i_0] = (~var_5);
                            var_21 = var_5;
                            var_22 ^= var_8;
                            var_23 *= ((-(!var_8)));
                            var_24 = (min(var_24, 1073741824));
                        }
                    }
                    for (int i_15 = 0; i_15 < 10;i_15 += 1)
                    {
                        arr_54 [i_0] [i_0] [i_1] [i_10] [i_15] = (((arr_43 [8] [i_1] [i_10] [8] [i_10]) ? (arr_43 [2] [1] [i_1] [1] [i_1]) : var_4));
                        var_25 = -var_6;
                        var_26 ^= var_5;
                        arr_55 [4] [4] [4] [4] = ((var_3 > (!var_4)));
                    }
                    arr_56 [i_1] [1] = (((arr_49 [i_0] [i_0]) >= var_6));
                    arr_57 [i_0] [0] [i_0] [i_0] = var_2;
                    var_27 = var_0;
                    arr_58 [i_0] [i_0] = (~var_2);
                }
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 10;i_17 += 1)
                    {
                        for (int i_18 = 0; i_18 < 1;i_18 += 1)
                        {
                            {
                                var_28 = (!((((arr_61 [3] [7] [i_1] [i_0]) ? (arr_4 [i_17]) : (((arr_37 [5] [i_1] [0] [i_17] [0] [i_16]) ? (arr_27 [0] [0] [0] [i_17] [0]) : (arr_64 [9] [2] [i_16] [8])))))));
                                var_29 = var_9;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
                    {
                        var_30 = ((((((arr_3 [i_1] [i_1]) % (arr_25 [i_0] [i_0] [i_1] [i_16] [8] [7])))) ? (((var_6 ? var_2 : (arr_52 [i_0] [i_1] [i_0] [i_0])))) : (~var_6)));
                        arr_70 [i_0] [6] [i_16] [i_19] = ((!(arr_36 [6] [9])));
                    }
                    for (int i_20 = 0; i_20 < 1;i_20 += 1) /* same iter space */
                    {
                        var_31 = (((!(var_0 || var_4))) ? 90 : var_5);
                        arr_75 [i_16] [i_16] = ((((max(var_5, 1281651379))) && (((((var_3 ? var_5 : var_4))) || (!349792567930059444)))));
                        var_32 -= (arr_63 [i_0] [i_1] [1] [i_20] [i_16]);
                        var_33 = ((~(((min(var_7, var_8))))));
                        var_34 = ((~(min(((min(var_0, -117))), (arr_17 [i_0] [1] [1] [1] [8])))));
                    }
                    for (int i_21 = 0; i_21 < 1;i_21 += 1) /* same iter space */
                    {
                        var_35 = ((((max((max(1, (arr_62 [i_0] [8] [i_16] [i_0]))), (((var_1 ? var_10 : (arr_65 [2] [i_16] [2] [2] [2] [i_21] [i_21]))))))) ? (min((~var_10), (var_6 | var_5))) : ((((max(var_3, var_10))) ? (((var_10 ? -5960450887840944327 : var_2))) : (min(var_6, var_5))))));
                        arr_78 [i_0] [1] [i_0] [i_16] = (((((((var_5 ? var_2 : (arr_66 [2] [3] [0] [7] [1]))) - (arr_69 [i_0] [i_16] [i_16] [1])))) ? 57518 : (max((((arr_2 [1] [2]) ? var_1 : (arr_12 [i_0] [3] [1] [i_21]))), var_0))));
                        arr_79 [1] [i_16] [i_16] [8] [9] [i_21] = (((var_3 ? var_0 : var_9)));
                    }
                }
                var_36 = var_4;
            }
        }
    }
    #pragma endscop
}
