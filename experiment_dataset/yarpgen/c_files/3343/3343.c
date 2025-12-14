/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (((((arr_4 [i_0] [i_1]) ? (arr_2 [i_0]) : (arr_4 [i_1] [11]))) + (arr_2 [i_0])));

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_11 += (((1 < 0) ? 4294967290 : 15712));
                    var_12 -= (((1 > 0) ? ((1 ? 1343789829 : 1)) : ((((arr_1 [i_1]) ^ (arr_3 [i_2]))))));
                }
                var_13 = (~((((arr_2 [i_0]) <= (arr_8 [i_0] [i_0])))));
                var_14 *= ((((min((((!(arr_1 [i_0])))), ((~(arr_9 [i_0] [i_1] [i_0] [i_0])))))) ? ((((arr_4 [i_0] [i_1]) ? ((min(65524, 1))) : ((((arr_2 [i_1]) >= (arr_8 [i_1] [8]))))))) : (min(4294967295, 265565558))));
            }
        }
    }
    var_15 = ((~(1 <= var_1)));

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 = 9089332228978690698;

            /* vectorizable */
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_17 += (((((1317884034 ? (arr_12 [i_5]) : (arr_15 [i_3] [i_3])))) ? (0 & 76) : ((var_4 ? (arr_18 [i_3] [i_4] [11]) : (arr_18 [i_3] [i_4] [i_5])))));
                var_18 = (max(var_18, (arr_19 [i_3] [i_4] [i_5])));

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    arr_24 [i_6] [6] [3] [i_6] [6] = (-81 ? 65520 : 1);
                    arr_25 [3] [12] [i_6] = (((arr_14 [i_3] [i_5]) + (arr_14 [i_4] [i_4])));
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 21;i_8 += 1)
                    {
                        {
                            arr_32 [i_3] [i_5] [i_4] [i_7] [5] = (94 % 1);
                            arr_33 [i_7] = (-28 | 0);
                        }
                    }
                }
            }
        }
        var_19 = (max((max((arr_26 [i_3] [i_3] [i_3] [i_3] [8]), (min(4294967282, 0)))), ((~(arr_22 [i_3] [i_3] [i_3] [i_3] [10] [i_3])))));
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        var_20 = ((((((arr_14 [i_9] [8]) ? (arr_14 [2] [i_9]) : (-2040176831 && var_6)))) ? (arr_17 [i_9] [i_9] [i_9] [i_9]) : ((((255 != 70334384439296) / ((4294967288 ? 1 : 255)))))));
        arr_36 [i_9] = ((-(arr_12 [i_9])));
        var_21 = (max((arr_31 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]), (arr_28 [i_9] [i_9] [i_9] [i_9])));
    }
    #pragma endscop
}
