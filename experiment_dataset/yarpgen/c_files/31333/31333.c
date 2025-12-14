/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31333
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= var_11;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 6;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 6;i_4 += 1)
                    {
                        {
                            var_14 = ((((((-(arr_4 [i_0] [i_0] [i_0]))))) ? ((min(128, var_7))) : (((0 + 14) / (arr_8 [i_0] [i_1] [i_1 + 3] [i_3])))));
                            arr_12 [i_0] [i_4] = ((~(min(65521, 16))));
                            var_15 += (((-(arr_9 [i_2] [i_1] [i_2] [i_4 + 3] [i_4] [i_4]))));
                            var_16 = -var_4;
                        }
                    }
                }
            }
            var_17 = (min(((-1 ? 6118994401187029591 : 6118994401187029568)), (((!(arr_5 [2] [2] [i_0 - 1]))))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_15 [i_0] = (max(4294967278, -var_4));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    var_18 = (((arr_13 [i_0] [i_0] [9]) == (arr_13 [i_0] [i_0] [i_0])));
                    var_19 += ((-1244053813 != (arr_7 [7] [i_5] [i_6])));
                    var_20 = (max(var_20, ((((arr_14 [i_0 - 1]) ? (arr_14 [i_0 - 1]) : -20)))));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {

                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        var_21 = 7904480761679072541;
                        arr_25 [i_0] [i_9] [i_6] [i_8 - 1] [i_9] = (arr_8 [i_0] [i_0] [i_5] [3]);
                        var_22 = (((arr_3 [i_8 - 1] [i_0 - 1]) || (arr_2 [i_0 + 1])));
                    }
                    var_23 = (((arr_11 [i_0]) == (arr_4 [i_0 - 1] [i_0 - 1] [i_8 - 1])));
                    arr_26 [i_0 - 1] [i_0] [i_0 + 1] = (arr_4 [i_0] [i_5] [i_6]);
                }
                var_24 += (arr_8 [i_0 + 1] [i_0 + 1] [i_6] [i_0 + 1]);
                var_25 &= ((-23 ? 3 : -4039));
                var_26 = (max(var_26, -var_4));
                var_27 = var_10;
            }
        }
        arr_27 [i_0] = (arr_11 [i_0]);
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 6;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 10;i_12 += 1)
                {
                    {
                        var_28 *= (((-(arr_0 [1]))));
                        arr_38 [i_0] [i_0] [i_0] [i_0] = var_3;
                        var_29 = (max(var_29, (107 % 1487275121)));
                        var_30 = (max(((var_1 ? 106 : ((0 ? 26954547472299690 : (arr_2 [i_10]))))), ((max(-9950, -15)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_13 = 1; i_13 < 9;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 10;i_15 += 1)
                {
                    {
                        var_31 = (max(var_31, (arr_17 [i_0] [0])));
                        var_32 = (((!48626) || (((((max(var_9, var_2))) / (min((arr_33 [i_13]), 4197115607)))))));
                    }
                }
            }
        }
        var_33 *= min((max((arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [i_0]), 48626)), (((var_9 && ((((-9223372036854775782 + 9223372036854775807) << (4194272 - 4194272))))))));
    }
    #pragma endscop
}
