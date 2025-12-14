/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216171
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((-((var_2 ? ((var_10 >> (var_4 - 6865651243717903451))) : var_7)))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 &= arr_0 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (!((((var_10 | var_1) ? (((arr_4 [i_1]) & (arr_4 [i_1]))) : ((var_5 ? var_8 : (arr_5 [i_2])))))));
                    var_13 = (min(((var_8 ? var_4 : (max(18446744073709551615, var_9)))), ((((arr_3 [i_1] [i_1]) <= ((18402593264519844012 ? -1431612410 : 19089)))))));
                    arr_7 [i_0] [i_0] [i_1] = ((arr_5 [i_0]) ? var_7 : ((-(((arr_4 [i_1]) | (arr_3 [i_1] [i_1]))))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 13;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_5] [i_6] = (min((!1), (1073741823 - 3033530632)));
                                var_14 = ((!((min(var_1, (arr_2 [i_4 + 2] [i_3] [i_6 - 1]))))));
                                var_15 = (min(var_10, -5335722573592648380));
                                arr_20 [i_0] [i_3] [i_0] [i_3] [i_0] = (arr_4 [i_5]);
                            }
                        }
                    }
                    arr_21 [i_3] [i_4] &= (arr_10 [i_0] [i_3] [i_4]);
                    var_16 = ((-1023 == (((arr_14 [i_0] [i_3]) / 99))));
                    var_17 = (max(var_17, (((-((-30 ? (max(var_5, var_3)) : (var_8 / var_3))))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        var_18 ^= arr_22 [i_7];
        /* LoopNest 3 */
        for (int i_8 = 4; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_19 = (!(arr_22 [i_9 - 1]));
                        arr_31 [i_10] [i_7] = (max(((30 ? 1 : 29)), (arr_30 [i_8 - 1] [i_9 - 1] [15] [i_8 - 1] [i_8])));
                        arr_32 [i_7] [i_7] [i_7] [i_9] = (min((!31324), (arr_27 [1] [1] [i_8] [i_7])));
                    }
                }
            }
        }
        arr_33 [i_7] = ((((max(((var_6 ? var_2 : var_2)), (arr_26 [i_7] [i_7] [1] [i_7])))) ? var_6 : var_5));
    }
    for (int i_11 = 1; i_11 < 23;i_11 += 1)
    {
        var_20 -= (((arr_26 [i_11] [i_11] [i_11 + 1] [i_11 + 1]) | (min((((3033530632 | (arr_24 [i_11])))), (min((arr_24 [i_11]), (arr_27 [i_11] [i_11] [i_11] [i_11])))))));
        var_21 = ((((max((arr_22 [i_11 + 1]), (arr_22 [i_11 - 1])))) ? (((arr_28 [i_11] [i_11 + 1] [i_11 + 1] [i_11] [i_11]) ? var_3 : (min(var_1, (arr_27 [i_11] [i_11] [13] [i_11]))))) : ((((!((max(1, var_6)))))))));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 3; i_13 < 22;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 24;i_14 += 1)
                {
                    {
                        var_22 -= 52;
                        var_23 = ((-(arr_41 [i_11 + 1] [i_11])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
