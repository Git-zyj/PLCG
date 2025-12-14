/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_16 *= (max(((((arr_5 [19] [i_1]) ? 56442 : (((!(arr_2 [i_1]))))))), (max((arr_3 [i_2 - 2] [i_0 + 2]), (arr_5 [i_0] [i_0])))));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            var_17 *= var_12;
                            var_18 -= var_2;
                            var_19 = var_1;
                            var_20 = 1;
                        }
                        arr_11 [i_0] [i_1] [i_2] [i_3] &= var_3;
                        var_21 = (!var_1);

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_22 = (1 >= 1667242406749712721);
                            arr_15 [i_3] [i_2] = (max((((var_1 / var_1) * (arr_0 [i_5]))), ((min((arr_12 [i_2] [i_0 - 2] [i_0] [i_2] [i_0 - 1] [i_2 + 1] [i_2 - 1]), (arr_9 [i_0] [i_0] [i_0 - 2] [i_0] [i_3]))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_23 = (arr_5 [i_1] [i_6]);
                            arr_19 [i_2] [i_2] [i_2] [i_6] = (16779501666959838890 * 37);
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_24 = (((!(arr_3 [i_2 + 2] [5]))) ? var_13 : (min(var_13, var_0)));
                            var_25 -= (arr_1 [i_3] [i_7]);
                            var_26 -= ((var_10 >= ((min(-3, var_0)))));
                            var_27 = 1;
                        }
                    }
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        var_28 = (min((max((~16355346706528282542), (((~(arr_20 [i_0] [12] [9] [i_0] [i_8])))))), (max((arr_4 [i_0 + 1] [i_1] [i_1] [11]), var_12))));

                        for (int i_9 = 2; i_9 < 20;i_9 += 1)
                        {
                            var_29 += (((((1 ? ((var_9 ? var_6 : (arr_9 [i_0] [i_1] [i_0] [i_1] [6]))) : (~-3)))) ? (arr_8 [i_0] [i_2] [i_8] [i_0]) : (arr_22 [i_9 - 1] [i_1] [i_2] [i_8] [i_1] [i_1])));
                            arr_27 [i_2] [i_9] = (min((((-(arr_23 [i_0 - 2] [i_2] [i_2] [i_8] [i_8] [i_9])))), (max(((3 ? var_5 : var_1)), ((max((arr_25 [i_9] [i_8] [i_2] [i_2] [i_0] [i_0]), 1981914683)))))));
                            arr_28 [i_0] [i_0] [i_0] [i_2] [i_8] [i_8] [i_9] = (arr_26 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 + 2]);
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 17;i_10 += 1) /* same iter space */
                        {
                            var_30 = -2091397367181269049;
                            var_31 |= ((!((((arr_0 [15]) ? 0 : 14966)))));
                        }
                        for (int i_11 = 3; i_11 < 17;i_11 += 1) /* same iter space */
                        {
                            var_32 -= (min(3455129122448656325, (((arr_10 [15] [i_1] [i_2] [i_8] [i_1] [i_1] [i_11 + 3]) ^ 2091397367181269049))));
                            var_33 = (min(var_33, 3));
                            arr_34 [i_0] [i_0] &= ((((max((arr_2 [i_0 - 1]), (((arr_2 [20]) ? var_13 : var_12))))) ? (arr_2 [i_8]) : (var_10 && 58913)));
                            arr_35 [i_0] [i_1] [i_2] [i_2] [i_11 + 2] = ((((arr_18 [i_0 - 1] [i_1] [i_0 - 1] [i_11 - 3] [i_2 + 1]) ^ var_13)));
                        }
                    }
                    arr_36 [i_0] [i_2] = (min(var_3, ((var_10 ? var_0 : 1860622367))));

                    for (int i_12 = 0; i_12 < 21;i_12 += 1)
                    {
                        var_34 = max((((!(arr_7 [i_2] [i_2] [i_2] [i_2 - 1] [i_2])))), (arr_16 [i_0] [i_0] [i_1] [i_2] [10]));
                        var_35 = (max(-1795059796, (max(-var_6, var_10))));
                        var_36 *= 6085;
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        for (int i_14 = 1; i_14 < 1;i_14 += 1)
                        {
                            {
                                arr_45 [i_2] [i_1] [i_2] [i_13] [15] = (max((arr_25 [i_0 - 2] [i_0 + 1] [i_2] [i_2] [i_13] [20]), (((arr_1 [i_13 + 1] [i_14 - 1]) ? var_8 : 1667242406749712739))));
                                var_37 = ((!((((14455392629154389471 ? 1 : var_2))))));
                                arr_46 [i_2] = ((!((max(var_4, var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 -= ((var_4 ? var_9 : ((min(var_6, var_10)))));
    var_39 = (((((~((var_4 ? 9371281859509534520 : var_6))))) ? var_11 : var_7));
    #pragma endscop
}
