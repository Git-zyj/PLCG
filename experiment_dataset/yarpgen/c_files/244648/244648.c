/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 9486;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 = ((((max((((0 == (arr_2 [1])))), (((arr_1 [i_0]) ? var_1 : (arr_2 [18])))))) % (min((arr_0 [i_0]), (arr_1 [i_0])))));
        var_19 = (max(var_19, ((min((max((arr_2 [i_0]), 2287828610704211968)), ((min((arr_2 [i_0]), (arr_2 [i_0])))))))));
    }
    for (int i_1 = 4; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            var_20 = 9486;
            var_21 *= (min((max(9, (arr_4 [i_1 - 4] [i_1 - 1]))), ((((((30 ? 30 : 28))) ? (arr_8 [i_2 + 2]) : (max((-9223372036854775807 - 1), (arr_2 [i_2]))))))));
            arr_10 [i_2] [i_2] &= (arr_6 [0] [i_2]);
            var_22 &= (((arr_1 [i_1]) ? (min((max((arr_7 [i_1] [i_2] [i_2]), (arr_1 [18]))), (arr_9 [i_2] [i_2]))) : (max((!var_7), (arr_1 [i_2])))));
            arr_11 [i_1] [i_2] = 4398046511103;
        }
        arr_12 [i_1] [i_1] = ((((max(((-(arr_2 [i_1]))), (arr_2 [i_1])))) ? (min((min((arr_3 [14]), 9209991567096861727)), -2287828610704211968)) : (arr_3 [1])));
        arr_13 [i_1] &= 29;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 0;i_4 += 1)
            {
                {
                    arr_19 [i_1] [i_3] = var_8;
                    arr_20 [i_3] &= (arr_5 [i_1] [i_1]);
                }
            }
        }
        var_23 ^= ((((arr_6 [i_1 + 1] [i_1 - 4]) ? (arr_6 [i_1 + 1] [i_1 - 4]) : (arr_6 [i_1 + 1] [i_1 - 4]))));
    }
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {
                    var_24 |= ((arr_21 [i_5] [i_6]) >> (((-127 - 1) + 149)));
                    var_25 ^= var_11;
                    arr_27 [i_5] [i_5] [i_5] [i_5] = (arr_2 [i_6]);
                }
            }
        }
        arr_28 [12] |= (arr_21 [i_5] [i_5]);
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 22;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        var_26 = (max(var_26, ((min((var_11 ^ 29360128), (((((((arr_25 [i_5]) ? 9236752506612689868 : 9209991567096861727))) ? (arr_3 [i_9]) : ((max(28, (arr_3 [i_5]))))))))))));
                        arr_39 [i_5] [i_5] [0] [i_10] = ((247 && ((max(((min((arr_2 [i_9]), 36))), (min((arr_38 [20]), (arr_35 [i_5]))))))));
                        arr_40 [i_5] [i_8] [9] [i_5] [15] = (((arr_36 [i_5 + 1] [i_5] [i_5] [i_8 - 1]) && (((-9223372036854775807 - 1) < 247))));
                    }
                }
            }
        }
    }
    for (int i_11 = 1; i_11 < 15;i_11 += 1)
    {
        arr_43 [i_11] [i_11] = (max((min((arr_21 [i_11] [i_11]), (max((arr_31 [i_11] [i_11] [i_11] [i_11]), var_2)))), var_8));
        arr_44 [i_11] = var_0;
        /* LoopNest 3 */
        for (int i_12 = 4; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                for (int i_14 = 3; i_14 < 18;i_14 += 1)
                {
                    {
                        arr_52 [i_11] [i_11] [i_13] [i_11] = (arr_38 [16]);
                        arr_53 [14] [i_12] [i_14] &= (max((((arr_50 [i_12] [i_12] [i_12 + 1]) ? (arr_50 [i_12] [i_12] [i_12 - 1]) : var_15)), (arr_2 [1])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
