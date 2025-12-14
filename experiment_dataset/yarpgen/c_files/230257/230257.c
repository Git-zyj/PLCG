/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_11 &= ((((((arr_0 [i_0]) * (min((arr_1 [i_0] [i_0]), var_0))))) && ((((min((arr_0 [i_0]), -5))) || (arr_2 [i_0] [i_0])))));
        arr_3 [i_0] = ((!(((-((min((arr_0 [i_0]), (arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [7] [i_2] [8] = (((arr_6 [i_0] [i_1] [i_2]) ? ((((arr_8 [i_2] [i_2] [i_1] [i_0]) || (arr_6 [i_2] [i_1] [22])))) : ((min((arr_6 [i_0] [1] [i_2]), (arr_6 [i_0] [i_1] [i_2]))))));
                    arr_11 [i_0] [8] [i_0] [i_2] = ((((-((var_0 ? var_7 : 7)))) * ((~(arr_0 [i_0])))));
                    arr_12 [i_0] [i_0] = (min((((-4 + 2147483647) >> (((arr_9 [i_0] [i_0] [i_1] [17]) + 1623)))), 29156));
                }
            }
        }
        var_12 = (max(var_12, (((!(var_2 && var_4))))));
        var_13 = (min((((((min((arr_1 [13] [i_0]), 17))) && ((min(4294967295, -5)))))), ((min((arr_2 [i_0] [i_0]), (arr_8 [i_0] [i_0] [i_0] [i_0]))))));
    }
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                {
                    arr_20 [i_5] [i_4] [i_5] = (-84 * -21);
                    arr_21 [i_5] [i_5] [i_5] = (((((-13 < 29164) ? var_2 : ((var_6 | (arr_9 [1] [6] [i_5] [i_4]))))) / (((((min(12, (arr_16 [i_4] [i_5])))) || (arr_16 [i_4] [i_4]))))));

                    for (int i_6 = 2; i_6 < 17;i_6 += 1)
                    {
                        var_14 &= (((((var_6 ^ ((15680953892884872194 ? 29149 : (arr_19 [i_5 + 3] [i_3])))))) ? 1 : (min((29156 + 618365821), (35 >= 4)))));
                        var_15 = ((-(min((min(72, -7457436061427181643)), 5))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {

                        for (int i_8 = 4; i_8 < 16;i_8 += 1)
                        {
                            var_16 = (min(var_16, ((((arr_22 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 2] [i_8 + 1]) ? 17133010394518210952 : (arr_23 [i_3 - 1] [i_8] [i_5] [i_7] [i_8 + 2]))))));
                            var_17 *= (((arr_24 [i_7] [i_8 + 2] [i_5] [i_4] [i_5 - 1] [i_3 - 1]) ? (arr_27 [i_5 + 2] [i_5 - 1] [i_5 + 4] [i_8]) : (~1)));
                        }
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_18 = 2594113411281307083;
                            var_19 = var_5;
                            arr_31 [i_5] [1] [i_5 + 4] [i_5] [i_5] = (((arr_8 [i_3] [i_3 + 1] [i_3 + 1] [i_5 + 3]) < (arr_2 [i_3] [i_3 + 1])));
                            arr_32 [i_7] [i_4] [4] [i_7] &= (arr_19 [i_5 + 2] [i_3 + 1]);
                            var_20 = (arr_4 [i_3]);
                        }
                        var_21 = 65528;
                        var_22 = (arr_13 [i_5 + 4]);
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        arr_35 [i_3] [i_5] [i_5 + 1] [i_3] [i_4] = ((255 / (arr_8 [i_10] [i_5 + 2] [i_3 - 1] [i_3])));
                        arr_36 [i_10] [i_4] [7] [i_5] [17] = ((((1 ? var_4 : 109)) != (((arr_2 [i_3 + 1] [i_3]) / var_6))));
                    }
                    /* vectorizable */
                    for (int i_11 = 4; i_11 < 16;i_11 += 1)
                    {
                        var_23 = (((((arr_38 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) / (arr_30 [i_3] [i_4] [i_4] [i_5 + 2] [i_11]))) << (((((arr_25 [i_3] [i_4] [i_5]) ? var_1 : (arr_37 [i_5] [i_5] [i_5] [i_11]))) - 65301))));
                        arr_40 [i_5] [i_5] = ((4 ? (arr_16 [17] [i_3]) : (arr_23 [i_3 - 1] [i_5] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
                    }
                }
            }
        }
        var_24 = var_2;
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_49 [i_12] [i_14] [i_13] [i_12] [i_12] = (((((1701870958 + (arr_15 [i_3])) * (((-(arr_27 [i_3] [i_12] [10] [i_12]))))))));
                        arr_50 [i_12] [i_12] [i_3] [14] = 2593096329;
                    }
                }
            }
        }
    }
    var_25 = ((var_3 ? ((((min(var_2, 80))) - (108 | 1))) : (((min(117, var_8))))));
    #pragma endscop
}
