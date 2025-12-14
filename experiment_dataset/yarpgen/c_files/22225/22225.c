/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            var_18 = (min(((!(arr_12 [i_4 + 1] [i_4 + 1] [i_3] [i_4] [i_4] [i_4]))), var_12));
                            var_19 = (max(-32742, (arr_5 [i_0] [i_0])));
                        }
                        arr_14 [i_0] [i_0] [i_3] [i_0] [i_0] = var_8;
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_20 = (arr_5 [i_6] [i_5]);
                                var_21 = (max(((((arr_19 [i_1 - 2]) ? (arr_19 [i_1 - 2]) : (arr_5 [i_1 + 1] [i_1 + 1])))), ((((var_4 ? var_5 : 32746)) % (((var_3 ? var_13 : (arr_4 [i_6] [i_0]))))))));
                            }
                        }
                    }

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1] [i_7] = ((~(((32743 <= ((var_1 ? (arr_8 [i_7] [i_1] [i_7]) : (arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_7]))))))));
                        var_22 = (max(((((arr_23 [i_7] [i_2] [i_1] [i_1] [i_7]) == (arr_24 [i_7] [i_2] [i_1 - 2] [i_0])))), ((-113 ? (arr_13 [i_0] [i_1 + 1] [i_2] [i_1]) : (arr_23 [i_7] [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2])))));
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_23 = (min(((var_14 ? (((arr_11 [i_9] [i_8] [i_2] [i_1] [i_9]) ? (arr_5 [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0] [i_0] [1]))) : (arr_23 [i_9] [i_1] [i_1 - 2] [i_1] [i_1 + 1]))), (arr_3 [i_0] [i_1] [i_9 - 1])));
                                var_24 = (min(((((arr_23 [i_9] [i_1 - 1] [i_1 + 1] [7] [i_1]) ? var_17 : (arr_21 [i_0] [i_1] [i_9] [i_8])))), ((((((arr_9 [1] [i_8] [11]) ? (arr_13 [i_1] [19] [i_8] [i_9]) : var_11))) ? 128 : (max(1681284398, var_7))))));
                                var_25 = ((var_2 && ((((max(var_11, -842027622452626548))) || ((!(arr_22 [16] [16] [i_2] [1] [i_2] [i_2])))))));
                            }
                        }
                    }
                }
            }
        }
        arr_32 [1] = ((+(((arr_2 [i_0]) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_10 = 2; i_10 < 13;i_10 += 1)
    {
        var_26 = (((((max(var_3, (arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]))))) ? (((arr_20 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 2]) ? (arr_16 [i_10 + 1] [i_10 - 2] [i_10] [i_10 + 2] [i_10 + 1]) : (arr_3 [i_10 + 3] [i_10 + 3] [i_10 - 1]))) : (((((var_7 ? var_13 : var_14)))))));
        var_27 += (--1);
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 16;i_14 += 1)
                        {
                            {
                                var_28 = (((~-4730) % var_17));
                                arr_46 [i_12] = (i_12 % 2 == zero) ? ((((max((arr_23 [i_12] [i_10 + 2] [i_10] [i_10 + 3] [i_10 - 2]), -2080367370)) >> (((arr_10 [i_10] [i_11] [i_10] [i_13] [2] [i_12]) + 757979614))))) : ((((((max((arr_23 [i_12] [i_10 + 2] [i_10] [i_10 + 3] [i_10 - 2]), -2080367370)) + 2147483647)) >> (((((arr_10 [i_10] [i_11] [i_10] [i_13] [2] [i_12]) + 757979614)) + 135699180)))));
                            }
                        }
                    }
                    var_29 &= (((arr_6 [i_10 + 3] [i_12]) + 1084902621));
                }
            }
        }
        var_30 = (min(var_1, (arr_39 [i_10 + 1] [i_10 + 1] [11])));
        var_31 = (max((((arr_45 [i_10 + 2] [i_10] [i_10 - 1]) != var_3)), (23 <= 11)));
    }
    var_32 = var_12;
    var_33 = ((var_13 ? var_15 : (((!(((var_0 ? var_0 : var_1))))))));
    var_34 |= var_17;
    /* LoopNest 3 */
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 0;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 17;i_17 += 1)
            {
                {
                    var_35 = ((32753 ^ (((arr_5 [i_16 + 1] [i_16 + 1]) & (arr_5 [i_15 + 1] [i_15 - 1])))));
                    /* LoopNest 2 */
                    for (int i_18 = 3; i_18 < 15;i_18 += 1)
                    {
                        for (int i_19 = 0; i_19 < 17;i_19 += 1)
                        {
                            {
                                var_36 = 32738;
                                var_37 = ((-(max((arr_31 [i_15 + 1] [i_15]), ((~(arr_19 [i_15])))))));
                                var_38 = (min(var_38, ((max((((!(arr_26 [i_16 + 1] [i_16] [i_16] [i_16 + 1])))), -4716)))));
                                var_39 = ((3290110271 > (arr_10 [i_15] [i_18] [i_17] [i_17] [i_16] [i_15])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
