/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(var_16, ((((((arr_3 [i_0 + 1] [i_0 + 2]) && (arr_1 [i_0 + 1]))) ? (((arr_0 [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 2]) : (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 + 1]) ^ (arr_0 [i_0 + 1]))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_6 [i_0] = (arr_0 [i_0 - 1]);
                    var_17 = (max(var_17, 171));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 11;i_4 += 1) /* same iter space */
                    {
                        var_18 = (((((1429885348920006190 ? 2147483646 : 4294967291)) <= 1)) ? var_8 : (arr_1 [i_0]));
                        var_19 = (max(var_19, (((var_13 | ((max((arr_10 [i_0] [i_1] [i_3] [i_4]), (arr_1 [i_3])))))))));
                        var_20 = (((~var_3) ? (arr_4 [i_0] [i_1] [i_3] [i_4]) : (arr_10 [i_4] [i_3] [i_1] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_0 - 1] [i_1] [i_1] [i_0] [i_3] [i_5] = var_13;
                        var_21 = (((-2147483647 - 1) ? (arr_14 [i_0] [i_0] [i_0 + 1] [i_0 + 1] [8]) : ((((((arr_3 [i_1] [i_1]) ? -20556 : 65517))) ? (((arr_0 [i_0]) ? var_4 : (arr_14 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (((arr_9 [i_1] [i_1]) ? var_12 : var_14))))));
                        var_22 = ((((-(arr_5 [i_0 - 1] [i_0 + 2] [i_0]))) > (((arr_15 [i_1] [i_0 + 1] [4]) & var_4))));
                    }
                    for (int i_6 = 1; i_6 < 8;i_6 += 1)
                    {

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            var_23 = -110;
                            var_24 = ((!(!969)));
                            var_25 = (arr_14 [i_0] [i_1] [i_6 + 3] [i_0 - 1] [i_6 + 3]);
                        }
                        arr_23 [i_0 + 2] [i_0] [i_3] = ((-940 | (((474737181 || ((min(-23, (arr_7 [i_3] [1] [i_0])))))))));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_26 = (8 <= var_6);
                        arr_28 [i_0] [i_0] [i_3] [i_3] [i_8] = (((arr_11 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 1]) ? 529092284 : (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1])));
                    }
                    for (int i_9 = 3; i_9 < 8;i_9 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_1] [i_1] = ((min((arr_30 [i_0 - 1] [i_1] [i_3] [i_9]), (arr_19 [i_0 - 1] [i_1] [i_1] [i_3] [i_9] [i_9 + 2]))));

                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            var_27 &= ((((min(((min(var_12, (arr_19 [i_10] [i_9] [i_3] [i_1] [i_0] [i_0])))), ((-(arr_27 [i_0] [i_0] [i_3])))))) ? -1325391937 : (max(var_3, (((~(arr_13 [i_9 + 1] [i_9] [8] [i_9 + 1]))))))));
                            var_28 = ((((-(var_12 - 1))) - var_7));
                        }
                        /* vectorizable */
                        for (int i_11 = 3; i_11 < 9;i_11 += 1)
                        {
                            arr_37 [i_0] [i_1] [i_3] [i_0] [i_11] [5] = (arr_24 [i_0] [i_11 + 2] [i_9 + 1] [i_3] [i_1] [i_0]);
                            var_29 = 1144496759;
                        }
                    }
                    for (int i_12 = 4; i_12 < 10;i_12 += 1)
                    {
                        arr_41 [i_0] = ((-(min(((max((arr_12 [i_12 - 4] [i_0] [i_1] [i_0] [i_0]), var_6))), (arr_32 [i_0 + 1] [i_12] [i_12 - 3] [i_0] [i_12 - 4])))));
                        var_30 = (max(var_30, ((max((max((arr_14 [i_0] [i_1] [i_3] [i_12 - 2] [i_12]), (arr_4 [i_1] [i_1] [i_3] [i_12 - 2]))), 252)))));
                    }
                    arr_42 [i_0 - 1] [i_0 + 1] [i_0] = ((((arr_13 [i_3] [i_3] [i_1] [i_0 + 2]) >= var_8)));
                    var_31 *= ((~(arr_19 [i_0] [i_1] [i_0 + 1] [i_0 + 2] [0] [i_1])));
                    var_32 = (min((arr_15 [i_0] [i_3] [i_3]), ((((arr_0 [i_0 + 2]) == (max(3765875003, 2739053101)))))));
                }
                /* vectorizable */
                for (int i_13 = 0; i_13 < 11;i_13 += 1) /* same iter space */
                {
                    arr_46 [i_0] [i_1] [i_0] = (((arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_4 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) : var_3));
                    arr_47 [i_1] [i_0] = ((((((32607 > (arr_30 [i_13] [i_13] [i_1] [i_0]))))) <= (((arr_15 [i_1] [i_1] [i_1]) / 3765875012))));
                    arr_48 [i_0] [i_0] = ((var_12 && (arr_5 [i_0 + 2] [i_0 - 1] [i_0])));
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1) /* same iter space */
                {

                    for (int i_15 = 3; i_15 < 7;i_15 += 1)
                    {
                        var_33 = (min(var_33, (arr_3 [i_15 - 2] [i_0 + 2])));
                        var_34 = (var_9 | var_13);
                        var_35 = (arr_5 [i_15 + 2] [i_0 + 2] [i_0]);

                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            var_36 = ((-((125 ^ (arr_52 [i_0] [i_1] [i_14] [i_15 + 2] [i_15])))));
                            var_37 = (arr_40 [i_16 - 1] [i_16 - 1]);
                        }
                        for (int i_17 = 1; i_17 < 10;i_17 += 1)
                        {
                            var_38 -= (((arr_9 [i_14] [i_14]) ? (((((arr_24 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 - 1] [i_1]) && (arr_27 [i_0 - 1] [i_0] [i_0]))))) : ((764659900 * (arr_38 [i_17 - 1] [i_14] [i_1] [i_0 - 1])))));
                            arr_60 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = -72;
                        }

                        for (int i_18 = 2; i_18 < 10;i_18 += 1)
                        {
                            var_39 *= (arr_30 [i_0 - 1] [i_1] [i_14] [i_15 + 4]);
                            arr_63 [i_18] [i_1] [6] [i_15 + 1] [i_0] [i_1] = 125;
                        }
                        for (int i_19 = 1; i_19 < 9;i_19 += 1)
                        {
                            var_40 -= ((-(((0 != (arr_27 [i_0 + 1] [2] [i_15 - 2]))))));
                            var_41 = (((arr_26 [i_19 + 2] [i_0 - 1]) ^ var_6));
                            var_42 = ((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1]));
                        }
                    }
                    for (int i_20 = 0; i_20 < 11;i_20 += 1)
                    {
                        var_43 = (min(var_43, 1));
                        arr_71 [i_0] [i_0] [9] = (((-4829 ? var_5 : (arr_65 [i_0 + 2] [i_1] [i_14]))));
                    }
                    var_44 = var_3;
                }
            }
        }
    }
    var_45 = var_3;
    var_46 = 15601473795878512317;
    var_47 = var_3;
    var_48 = (var_6 > var_10);
    #pragma endscop
}
