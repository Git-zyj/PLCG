/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = ((-var_11 ? (((195222167404396415 * 1542488180) | var_7)) : (((((min(-7568, var_9))) ? var_9 : ((((-7568 + 2147483647) >> (17022 - 17004)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = -2311293778061480285;
        arr_2 [i_0] = (max(((1 ? (arr_0 [i_0]) : (arr_0 [i_0]))), (arr_1 [i_0] [i_0])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_2] [i_2] = ((801849935 ? 2311293778061480285 : (((min(30693, (max(48514, 48513))))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_4] = (((arr_5 [i_1]) | (arr_4 [i_2] [i_3])));
                        arr_14 [i_2] [i_3] [i_2] [i_2] = ((arr_6 [i_3] [i_4]) != 34842);
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        arr_17 [i_2] [i_2] [i_3] [i_5] = (((arr_3 [i_3] [i_1]) ^ 2715420483601407492));
                        var_16 = (min(var_16, 113));
                        arr_18 [i_5] [i_2] [i_3] [i_2] [i_1] = ((~(arr_7 [i_2])));
                        arr_19 [i_5] [i_2] [i_2] [i_1] = (((26207 > 48514) != 18446744073709551604));
                    }
                    arr_20 [i_2] = (((arr_6 [i_3] [i_2]) / -73));
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_2] [i_2] [i_6] [i_7] [i_8] = ((((min((arr_26 [i_7] [i_2] [i_6] [i_2] [i_6 - 1]), -986987848113972282))) ? (max(33125, -2104878529)) : -118));
                                arr_29 [i_1] [i_2] [i_2] [i_7] [i_8 - 1] = ((25884 / (min((4118601098220449975 / 1), (((48519 * (arr_9 [i_2] [i_2]))))))));
                                arr_30 [i_2] [i_7] [i_2] [i_2] [i_2] = (((((((min((arr_11 [i_1] [i_7] [i_6 + 2] [i_8] [i_8 - 1] [i_2]), (arr_26 [i_1] [i_2] [i_6 + 1] [i_2] [i_8 - 1])))) ? (arr_1 [i_1] [i_2]) : (984325077 ^ 48513)))) ? (arr_6 [i_1] [i_2]) : -1597623334));
                                var_17 = 984325060;
                                arr_31 [i_2] [i_2] [i_6] [i_7] [i_8] = ((~(arr_25 [i_1] [i_1] [i_2] [i_6] [i_7] [i_2] [i_8 - 1])));
                            }
                        }
                    }
                    var_18 = (((48513 + 48513) + 17023));
                }
            }
        }
    }
    #pragma endscop
}
