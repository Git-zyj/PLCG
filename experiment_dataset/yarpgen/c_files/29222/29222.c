/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_0;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_1] = 240;
            arr_5 [i_0] [i_1] [i_1] = 1688523224;
        }
        arr_6 [i_0] = ((-(arr_1 [i_0] [i_0])));
        arr_7 [i_0] [9] = -2836996156574327857;

        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_11 [i_0] [i_2] = (max(174, (((!(arr_8 [i_2]))))));
            var_14 *= (min(((~((-4668136617413590250 ? 5 : 7936)))), 0));
            arr_12 [i_2] [i_2] = (((arr_2 [i_0] [i_2] [i_2]) ? ((var_4 & (arr_1 [i_0] [i_2 + 2]))) : (186 | 203)));
        }
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            arr_16 [i_0] [11] = (((((1688523224 ? (arr_3 [i_3 - 2] [i_3 + 1] [i_0]) : (arr_3 [i_0] [i_0] [i_0])))) ? ((255 << (var_10 + 9318))) : 1));
            var_15 = (min(var_15, 2986326710517383989));
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_16 = ((var_0 ? (arr_9 [i_4 - 1] [i_5 - 1] [i_5 - 1]) : var_0));
                            var_17 = var_2;
                        }
                    }
                }
            }
            arr_29 [i_4] = ((~(((!(arr_21 [i_0] [i_4 - 1] [i_4] [i_0]))))));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_34 [i_0] [i_0] [i_0] = -1688523225;

            for (int i_9 = 4; i_9 < 11;i_9 += 1)
            {

                for (int i_10 = 2; i_10 < 11;i_10 += 1)
                {
                    arr_42 [i_0] = (((((~(((arr_27 [i_0] [i_9]) ? (arr_40 [i_0]) : var_8))))) ? (min((arr_36 [i_10 - 1] [i_9] [i_8]), (arr_20 [1]))) : 18325));
                    var_18 *= (max((~1), (min(3, 2371))));
                }
                for (int i_11 = 1; i_11 < 9;i_11 += 1)
                {
                    var_19 = (15 | var_12);

                    for (int i_12 = 1; i_12 < 1;i_12 += 1)
                    {
                        arr_48 [i_11] [i_8] [i_9] [i_11 - 1] [i_12] = ((~((~((min(var_1, var_1)))))));
                        arr_49 [i_0] [i_0] [i_0] [i_0] [i_11] = ((~(arr_44 [i_12 - 1] [i_11 + 2] [i_9 - 1] [i_9 - 3] [i_9])));
                    }
                }
                arr_50 [i_0] [1] [1] = (((-3 + 2147483647) << (((min((arr_24 [6] [i_9]), (arr_24 [i_0] [i_9]))) - 4116051397223069022))));
            }
        }
        arr_51 [i_0] [i_0] = min(((((arr_41 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (arr_41 [i_0] [i_0] [i_0] [i_0] [i_0])))), (min(((max(-1213054832, 0))), 2836996156574327857)));
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            {
                arr_58 [i_13] [i_13] [1] = (~63);
                arr_59 [i_14] [12] [12] = ((!(((~(!0))))));
                arr_60 [1] [i_14] [8] = (((~(arr_53 [i_13] [i_14]))));
            }
        }
    }
    #pragma endscop
}
