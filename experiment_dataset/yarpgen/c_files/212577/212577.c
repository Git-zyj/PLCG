/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212577
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 4294967293;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = ((-(arr_0 [i_1] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 22;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            var_19 |= (~var_15);
                            arr_16 [i_0] [i_1] [i_0] [i_3] [0] = var_6;
                            var_20 = (min(((((min(var_15, var_11))) ? (((var_10 ? 0 : var_0))) : var_6)), var_15));
                            arr_17 [i_0] [i_1] [i_1] [i_0] = (((var_7 & var_4) / (arr_12 [11] [i_0] [i_1] [i_0] [i_2] [i_3] [i_0])));
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1)
                        {
                            var_21 = (max(var_21, ((min(((~(((!(arr_9 [i_1] [i_5] [i_5] [i_1] [i_5])))))), (((!((((arr_10 [i_1] [i_1] [i_1] [6]) ? (arr_9 [i_5] [i_3] [i_2 + 2] [22] [i_0]) : (arr_14 [i_5] [i_3 - 2] [i_2] [i_1] [i_0]))))))))))));
                            arr_21 [i_0] [i_2] &= (arr_6 [i_2]);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_22 = 127;
                            arr_25 [i_6] [i_0] [i_0] [6] = arr_23 [i_6] [i_6] [i_6] [i_6];
                        }
                        var_23 = ((-(((arr_1 [i_0] [i_1]) ^ var_10))));
                    }
                }
            }
            arr_26 [i_0] [i_0] = (min(((var_6 | (arr_6 [i_0]))), ((((arr_5 [i_0] [i_0] [i_0]) ? ((((arr_20 [i_0] [i_0] [i_0]) ? (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) : 1))) : ((2147483647 & (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            var_24 = ((+((((arr_15 [i_0] [i_0] [i_0] [i_0]) != var_4)))));
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 21;i_9 += 1)
                {
                    {
                        var_25 = (arr_29 [i_0] [i_0] [i_0] [i_0]);
                        arr_33 [i_0] [1] [i_8] [i_9] [i_0] [i_0] = ((max(((var_1 | (arr_1 [i_0] [i_0])), 3))));
                        var_26 = (max(var_2, ((((!(arr_20 [16] [i_7] [7]))) ? (((arr_29 [i_0] [i_7] [i_0] [i_9]) ? (arr_30 [i_0]) : 255)) : ((var_13 ? 1 : var_10))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_10 = 1; i_10 < 21;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 22;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 23;i_12 += 1)
                {
                    {
                        arr_42 [i_0] = (((((~var_5) ? (arr_24 [14] [i_11 - 2] [i_0] [i_0] [3]) : (((arr_7 [i_0] [i_10]) ? var_0 : (arr_37 [i_0] [i_12] [i_0] [i_0]))))) >> ((((((1 ? -32749 : (arr_1 [i_10] [14])))) || ((min(65528, var_9))))))));

                        for (int i_13 = 0; i_13 < 23;i_13 += 1)
                        {
                            arr_45 [i_11 + 1] [i_11 + 1] [i_11] [i_0] [i_13] [i_13] [i_13] = ((var_10 | ((var_15 ? (((var_12 ? var_13 : (arr_29 [i_0] [i_0] [i_0] [i_0])))) : (~23)))));
                            arr_46 [i_0] = ((~(((arr_11 [i_10 - 1] [i_10 - 1]) ? ((max((arr_11 [i_0] [i_0]), (arr_19 [i_13] [0] [1] [i_10] [i_0] [i_0])))) : (arr_36 [i_0] [i_10 + 1] [i_11 - 1])))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 23;i_14 += 1)
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = (((arr_7 [i_10 + 1] [i_11 - 1]) < var_13));
                            arr_52 [i_0] [i_0] [i_10] [i_11] [i_10] [i_14] = ((-(arr_28 [i_10 - 1] [i_10] [i_0])));
                        }
                        arr_53 [i_0] [i_10] [i_10] [i_10] [i_10] = (min((((arr_23 [i_10] [i_10 + 2] [i_10 - 1] [i_10]) % (arr_18 [16] [i_0] [i_0] [16] [i_10 + 2] [i_11 + 1]))), var_11));
                    }
                }
            }
        }
        arr_54 [20] &= arr_31 [14] [14] [14] [i_0] [14] [2];
    }
    var_27 = (min(var_27, (var_16 ^ var_7)));
    var_28 = (max(-4294967295, ((-var_9 ? var_9 : var_4))));
    #pragma endscop
}
