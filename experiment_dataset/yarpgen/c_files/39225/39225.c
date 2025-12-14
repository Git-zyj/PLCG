/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_18 = ((((!(arr_3 [i_0]))) ? (((arr_4 [i_0] [i_1] [i_1]) ? (arr_4 [1] [20] [i_0]) : (((arr_1 [i_0] [i_0]) ? (arr_0 [19] [i_1]) : (arr_4 [i_0] [i_0] [i_0]))))) : (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_19 = ((((min((arr_1 [i_1] [i_0]), ((min(100, 1)))))) ? var_17 : (arr_7 [i_0] [20] [i_2] [i_1])));
                    var_20 = ((~(var_14 & -1402847460)));
                    var_21 = 268435455;
                    var_22 = (arr_8 [i_2] [i_0] [i_0]);
                }
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_3] [i_1] [i_1] [i_1] = var_13;
                    var_23 = (+((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0])))));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_24 = (max(var_24, ((((((~((var_14 ? 31 : 255))))) ? (((1 > (arr_9 [i_0] [i_0] [i_0])))) : (((((arr_13 [i_0] [i_1]) ^ 268435455)))))))));
                        var_25 ^= ((~((var_13 ? (((~(arr_3 [i_0])))) : (20 % var_11)))));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        arr_18 [i_3] = (max((arr_16 [i_0] [i_1] [i_3] [i_3]), (max(-32767, (arr_3 [i_0])))));
                        var_26 = 31;
                        var_27 = (-var_16 ? (arr_0 [i_0] [i_0]) : (((max((arr_10 [i_3] [i_1] [i_1]), (arr_1 [i_0] [i_0]))))));
                    }

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_28 -= (arr_13 [i_1] [i_1]);
                        var_29 = ((-(((!(arr_15 [i_0] [i_0] [i_0] [i_3]))))));
                        var_30 = (~32755);
                    }
                    for (int i_7 = 3; i_7 < 19;i_7 += 1)
                    {
                        var_31 = ((~(((arr_3 [i_7]) / (arr_2 [i_3])))));

                        for (int i_8 = 0; i_8 < 0;i_8 += 1) /* same iter space */
                        {
                            arr_27 [i_3] [i_3] [i_3] = (min((((!(arr_19 [i_0] [i_1] [15] [i_1] [i_7 - 2] [i_7])))), (arr_19 [i_0] [18] [18] [i_1] [i_1] [i_0])));
                            var_32 = ((!((((arr_17 [i_0] [17] [i_3] [i_0]) ? 101 : (arr_15 [i_0] [i_1] [i_3] [i_3]))))));
                        }
                        for (int i_9 = 0; i_9 < 0;i_9 += 1) /* same iter space */
                        {
                            var_33 = (arr_13 [i_7 + 1] [i_3]);
                            var_34 = (((((arr_8 [i_1] [i_3] [i_9 + 1]) * ((min((arr_14 [14] [i_1] [i_3] [14]), (arr_10 [i_3] [i_3] [8]))))))) ? (((-(arr_8 [14] [i_9] [i_3])))) : (((~((~(arr_20 [i_3] [i_3] [i_3])))))));
                            var_35 = ((~1987851924) ? (min((((arr_5 [i_0] [i_0] [i_0] [i_7]) | (arr_7 [i_0] [i_0] [i_0] [i_0]))), -117)) : (arr_28 [i_0] [i_3]));
                            var_36 = (!((min(var_13, (-9223372036854775807 - 1)))));
                            var_37 = (arr_1 [i_7 + 2] [i_7 - 3]);
                        }
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            var_38 = (max(205, -111));
                            arr_34 [i_0] [i_3] [i_3] [i_7 - 2] [i_10] [13] = (~13775456348495445829);
                            arr_35 [i_0] [i_3] [i_1] [i_3] [i_7] [i_10] = ((((min((min((arr_1 [i_0] [i_0]), 204)), var_0)))) - (max((arr_4 [1] [i_1] [i_0]), 110)));
                        }
                        var_39 = (min(var_39, var_10));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1)
                    {
                        var_40 = (max((((arr_2 [i_0]) % (arr_2 [i_0]))), (((((max(var_9, (arr_6 [9] [i_1] [i_1])))) ? ((255 ? 1 : 2558979424)) : (arr_13 [i_0] [i_3]))))));
                        var_41 = (!((((arr_9 [i_0] [2] [i_3]) ? (arr_9 [i_11] [10] [i_1]) : (arr_5 [i_0] [i_1] [i_3] [i_11])))));
                        var_42 += (max((arr_22 [i_0] [i_1] [i_1] [i_11]), ((~(arr_22 [i_0] [i_0] [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    var_43 = var_5;
    #pragma endscop
}
