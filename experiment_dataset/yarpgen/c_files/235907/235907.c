/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_12 += ((~(1 != 255)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = ((~(!-18490)));

                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_3] = ((((arr_3 [i_0]) / ((max(var_6, 1))))));
                        arr_9 [i_0] [i_0] [i_0] [i_0] = (((((!(arr_6 [i_2] [i_2] [i_2] [1] [i_3 - 2] [i_2])))) * ((1 ^ (arr_2 [i_3 + 1] [i_3 - 1])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_14 = (~-5877);
        arr_12 [13] = ((min(1, 6944)));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 10;i_6 += 1)
            {
                {
                    var_15 = ((!((!(-66 & var_7)))));
                    var_16 = ((-(+-18)));
                    arr_18 [i_4] [i_5] [i_4] [i_4] |= (+((~((((arr_6 [i_4] [i_4] [i_5] [i_5 + 2] [i_5] [i_6]) || (arr_17 [i_6])))))));
                }
            }
        }
        var_17 = 54682;
        arr_19 [3] [12] |= (max(-var_6, (max((((arr_2 [i_4] [i_4]) ^ var_1)), (var_7 / 4)))));
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_29 [1] = ((~(((!(~var_4))))));
                    var_18 = ((~((((arr_4 [i_8 - 3] [i_8 - 3] [i_8 - 2] [i_8 - 3]) || var_5)))));
                }
            }
        }

        for (int i_10 = 0; i_10 < 0;i_10 += 1)
        {
            var_19 = (!255);
            var_20 += (arr_14 [i_10] [i_10] [i_10 + 1]);
        }
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            var_21 &= (((min(5473, var_10))));
            var_22 = (min(var_22, ((((min(14, 62357)) != (~var_3))))));
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            var_23 += (+((((65281 ^ 65286) || ((((arr_5 [i_7] [10] [i_12]) / var_9)))))));
            arr_36 [i_7] [i_7] = (!-536870912);
            var_24 ^= var_5;
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_25 = ((65270 || (~21217)));
                        arr_42 [i_14] = ((~(((((arr_15 [i_14] [1] [i_7]) | (arr_3 [i_14])))))));
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 10;i_15 += 1)
    {
        var_26 = 18;
        var_27 |= (((!(arr_38 [i_15] [i_15] [i_15] [i_15]))));
        var_28 = (max(var_28, (((-((-1 * (66 / 2107361546))))))));
        arr_46 [i_15] = ((((arr_3 [i_15]) >> (var_2 - 2305600898653814020))));
        var_29 = ((+(((!(((arr_40 [i_15] [i_15]) || (arr_10 [i_15] [i_15]))))))));
    }
    var_30 += ((~(~1)));
    #pragma endscop
}
