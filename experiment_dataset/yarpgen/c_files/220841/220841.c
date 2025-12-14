/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((min(var_5, (var_8 * var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 = ((!(arr_3 [i_0])));
        arr_4 [i_0] [i_0] = (arr_1 [i_0]);
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_15 = (((-(arr_7 [i_1 - 2] [i_1 + 1]))));
        var_16 += ((!(((((-(arr_5 [i_1 + 1] [i_1]))) | (!4294967295))))));

        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_12 [i_2 - 2] = (arr_2 [3]);
            var_17 = ((-15 ? (arr_11 [i_2 - 2] [i_2 - 2]) : (4294967280 * 4294967295)));
        }
        for (int i_3 = 2; i_3 < 15;i_3 += 1) /* same iter space */
        {
            arr_16 [i_1] [i_1] = (((arr_13 [i_1 + 1] [i_3 + 1] [i_1 + 1]) | (((arr_8 [i_1 + 1]) * (arr_13 [i_1] [i_3 + 1] [i_3])))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 16;i_5 += 1)
                {
                    {
                        arr_23 [i_1] [i_1] [17] [i_5] [17] [16] &= ((!(15 == 7)));
                        var_18 = (((+(max((arr_20 [i_4]), (arr_13 [i_1] [i_1] [i_1]))))));
                        var_19 = (max(var_19, ((((arr_21 [i_1] [i_1] [i_1 - 1] [i_1]) && ((!(arr_6 [i_3 - 2]))))))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 18;i_8 += 1)
                    {
                        {
                            var_20 = (max(var_20, (arr_0 [i_1 - 2])));
                            arr_30 [i_1] [i_3] [i_6 - 1] [i_7] [i_3] = (((arr_7 [i_1 - 2] [i_6 + 1]) - (arr_6 [i_7])));
                        }
                    }
                }
            }
        }
        for (int i_9 = 2; i_9 < 15;i_9 += 1) /* same iter space */
        {
            var_21 = (arr_13 [11] [i_9] [i_9]);
            var_22 = (min((((arr_24 [i_1 - 2] [i_1 - 1] [i_9 + 2] [i_9 - 2]) ^ (arr_24 [i_1] [i_1 - 2] [i_9 + 2] [i_9 - 1]))), (arr_24 [i_1 - 1] [i_1 - 2] [i_9 - 1] [i_9 - 2])));
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1) /* same iter space */
        {
            var_23 = (min(((!(arr_10 [i_10 + 3] [i_10 + 4] [i_10 + 4]))), (!-2108129708)));
            var_24 = (min(var_24, (((((!((((arr_22 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_38 [i_1] [i_1] [i_1]) : (arr_35 [i_1 + 1]))))))) | (arr_21 [i_1] [i_1 - 2] [i_1] [i_1 + 1])))));
        }
    }
    var_25 = ((1515 ? 15 : (22 == 4294967295)));
    var_26 = (max(var_26, var_5));
    var_27 = (~42095);
    #pragma endscop
}
