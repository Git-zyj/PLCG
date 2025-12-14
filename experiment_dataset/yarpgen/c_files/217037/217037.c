/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217037
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_1 << (((~var_18) + 1701646185))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_21 = (max(var_21, var_7));
                        var_22 = 8192;
                        arr_9 [i_1] [i_2] [i_1] [i_1] = (((arr_4 [i_1] [i_1 + 1] [i_2]) ^ (((arr_2 [i_1]) ? -19 : (arr_0 [i_2])))));
                    }
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        arr_14 [i_4 - 2] [i_4 - 2] [i_2] [i_1] [i_2] = (((((arr_13 [i_1] [i_1] [i_1] [i_0]) ? 15360 : (arr_0 [i_1]))) / (arr_10 [i_2] [i_4 - 1] [i_1 - 1] [i_2] [i_1 - 1])));

                        for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                        {
                            var_23 = (((arr_13 [i_0] [i_1] [i_5 + 1] [i_4 - 1]) + (arr_4 [i_1] [i_5 + 1] [i_5 - 1])));
                            arr_17 [i_1] [i_1] [i_2] [i_4] [i_2] = (arr_6 [i_1] [i_4] [i_2] [i_1]);
                            var_24 = (min(var_24, (arr_0 [i_5 - 1])));
                        }
                        for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_25 = 2305843009213562880;
                            arr_20 [i_4 + 1] [i_4 + 1] [i_1] [i_2] [i_1] [i_1 + 1] [i_0] = -var_12;
                        }
                        arr_21 [i_1] = var_6;

                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            var_26 = (min(var_26, (((-(arr_7 [i_4 - 1] [i_0] [i_4 - 2] [i_4 - 1]))))));
                            arr_24 [i_0] [i_1] = var_1;
                        }
                    }
                    var_27 = ((var_15 / ((-1745260907 ? 1 : 1))));

                    for (int i_8 = 4; i_8 < 16;i_8 += 1)
                    {
                        arr_28 [i_1] [i_2] [i_1] = ((!(arr_3 [i_1])));
                        var_28 = (var_3 ? var_4 : (arr_3 [i_1]));
                        arr_29 [i_1] [i_1] [i_2] [i_1] = (((arr_12 [i_0] [i_0] [i_1 - 3] [i_0] [i_8 + 1] [i_8]) != ((1 ? (arr_1 [i_0]) : (arr_6 [i_1] [i_1] [i_1] [i_1])))));
                    }
                    var_29 = 23;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_32 [i_1] [i_1] = ((1276490174 ? var_1 : ((max((16380 % var_8), -8173)))));
                    arr_33 [i_1] = ((-(max((max(4, var_3)), ((min(2777, (arr_13 [i_0] [i_1] [i_1] [i_9]))))))));
                    arr_34 [i_0] [i_1] [i_0] = ((((!((!(arr_19 [i_0] [i_9] [i_9] [i_0] [i_0]))))) ? -2778 : (((((8589934576 ? (-2147483647 - 1) : 53685))) ? -26324 : (arr_7 [i_1] [i_1] [i_1] [i_0])))));
                }
                arr_35 [i_1 + 2] [i_1] [i_0] &= ((((arr_30 [i_1] [i_1 - 3] [i_1 + 2] [i_1]) ? var_7 : (arr_31 [i_1] [i_0] [i_0]))));
                var_30 = ((((((arr_4 [i_1] [i_1] [i_1 + 2]) ? (arr_4 [i_1] [i_1] [i_1 + 2]) : (arr_4 [i_1] [i_1] [i_1 - 1])))) ? (min(11619570568967972709, (var_18 - 9223372036854775807))) : var_0));
            }
        }
    }
    var_31 = (((((((min(var_18, 0))) ? var_0 : ((max(26813, -26324)))))) ? var_13 : (min(((var_6 ? var_9 : var_7)), (~-1)))));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                {
                    arr_45 [i_11] [i_12] = ((((((arr_44 [i_11] [i_11]) ? var_1 : (arr_40 [i_10] [i_11])))) ? (-0 / var_13) : (arr_42 [i_10] [i_11] [i_10] [i_10])));
                    arr_46 [i_11] [i_11] [i_11] = (min((arr_37 [i_10]), (max((!var_11), var_1))));
                }
            }
        }
    }
    #pragma endscop
}
