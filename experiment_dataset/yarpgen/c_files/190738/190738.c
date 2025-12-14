/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_10 = ((var_0 ? ((~(arr_1 [i_0]))) : (((((var_0 * (arr_0 [i_0] [4])))) ? ((max(31, 46))) : var_0))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_11 = (((((arr_5 [i_1] [i_0] [i_1] [i_2 - 1]) == var_1)) ? (arr_4 [i_1]) : var_7));
                        var_12 -= (arr_7 [10] [6] [10]);
                    }
                }
            }
        }
        var_13 = (arr_8 [1] [i_0] [i_0 + 1] [i_0] [i_0]);
        var_14 = ((((var_5 ? ((min(1, -97))) : (arr_7 [8] [i_0 + 3] [8]))) * ((min(1, (107 >= 1))))));
        var_15 = 1;
    }
    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_16 = (min(var_16, ((max((((~var_1) ? (~var_5) : var_0)), ((max(53, (arr_1 [i_4 - 1])))))))));
        var_17 -= (min(((((min((arr_1 [i_4 - 1]), (arr_5 [6] [i_4] [i_4] [i_4])))) ? (!var_1) : ((((arr_10 [i_4 + 3]) > (arr_8 [i_4] [i_4] [1] [i_4 + 1] [i_4])))))), (!var_2)));
    }
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {
                        var_18 = (max((arr_16 [i_5] [i_5]), ((((arr_20 [i_7 + 1] [i_6] [i_5] [i_6 + 1]) == var_4)))));
                        var_19 = ((~(((((arr_19 [i_5] [i_6] [i_7] [i_7]) ? (arr_19 [i_5] [i_6] [i_7 + 1] [i_8]) : var_5)) | ((1 ? (arr_13 [i_5]) : 1))))));

                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            arr_25 [i_5] [i_5] [i_7 + 1] [i_5] [i_9 + 1] = max((max((arr_15 [i_8] [i_6 + 1] [i_5]), (-38 && 1))), ((!((!(arr_14 [i_5] [i_6]))))));
                            arr_26 [i_5] [i_7] = 70;
                        }
                        arr_27 [i_5 + 1] [i_6 + 1] [i_7 + 1] [i_8] [i_5] = (max((((arr_23 [i_5 + 2] [i_5 + 1] [i_5] [i_6 + 1] [i_7 + 1] [i_8]) >= var_6)), (min((arr_21 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]), (!1)))));
                    }
                }
            }
        }
        var_20 = (max(var_20, 1));
        arr_28 [i_5] = arr_16 [i_5] [i_5];
    }
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        var_21 = ((-124 ? 0 : -46));
        var_22 = ((+((((arr_6 [i_10] [i_10 + 1] [i_10] [i_10]) == (arr_7 [i_10] [i_10 + 1] [i_10]))))));
        var_23 = (min(((min(var_0, (arr_18 [i_10 + 1])))), ((((max((arr_22 [i_10 + 1] [i_10] [i_10] [0] [i_10] [i_10] [i_10]), (arr_13 [i_10])))) + var_1))));
        var_24 = (max(((((((arr_16 [i_10] [i_10]) ? var_0 : (arr_13 [i_10])))) ? ((max((arr_19 [i_10] [i_10 + 1] [i_10 + 1] [i_10]), var_3))) : (arr_12 [i_10 + 1]))), (arr_11 [i_10] [i_10])));
        var_25 += arr_5 [1] [1] [i_10] [i_10 + 1];
    }
    var_26 = var_9;
    var_27 = var_0;
    var_28 = var_7;
    #pragma endscop
}
