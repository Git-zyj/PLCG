/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-(~var_6)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_8 [i_3] [i_0] = (arr_3 [i_3] [i_2]);
                        var_13 = (((arr_1 [i_0] [i_0]) ? (arr_1 [i_1] [i_2]) : 2300242520));
                    }
                }
            }
        }
        arr_9 [i_0] = (arr_1 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((arr_4 [i_0]) ? (arr_4 [i_5 - 2]) : (arr_4 [i_4]))))));
                        var_15 -= (((var_0 ? 47250 : 60)) > ((var_4 ? (arr_11 [i_6]) : (arr_5 [5]))));
                    }
                }
            }
        }
        var_16 ^= 107;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_17 = (max(var_17, (arr_19 [i_7] [i_7])));
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 16;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 18;i_11 += 1)
                        {
                            {
                                arr_33 [i_7] [i_7] = (((arr_31 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1]) ? (((arr_26 [i_10] [i_9] [16]) ? 729490658 : -88)) : (arr_22 [i_8] [i_8 - 1] [13])));
                                var_18 ^= ((-var_4 ? ((-2147483641 ? (arr_24 [i_11]) : var_7)) : (arr_25 [i_7] [i_9] [i_7] [i_7])));
                            }
                        }
                    }

                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        arr_37 [17] [15] [i_9] [i_12] = ((~((var_6 ? 46 : 4294967269))));
                        var_19 = (((var_9 ? var_3 : var_6)));
                        arr_38 [i_7] = (~(((arr_31 [i_9] [i_9 + 1] [18] [11] [i_9]) >> (((arr_34 [i_7] [i_7]) + 99)))));
                    }
                    for (int i_13 = 3; i_13 < 18;i_13 += 1)
                    {
                        arr_41 [0] [0] [i_9] &= (arr_19 [i_13 - 1] [15]);
                        var_20 = (min(var_20, (arr_39 [i_13 - 2] [i_13 - 1] [17] [i_13])));
                        var_21 = 1;
                        var_22 = (arr_32 [i_13] [i_9] [i_8] [i_7] [i_7] [i_7]);
                    }
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 18;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_23 = (((arr_27 [i_14 + 1] [i_9 + 3] [i_9 + 3]) ? (arr_36 [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8] [i_8]) : var_7));
                                var_24 = ((~(arr_39 [5] [i_14 - 1] [i_14 + 1] [i_14])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = (max(((var_4 ? var_1 : var_9)), (~-var_4)));
    var_26 -= var_8;
    #pragma endscop
}
