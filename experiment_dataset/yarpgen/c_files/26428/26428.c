/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_11));
    var_15 = (min(var_15, var_0));

    for (int i_0 = 3; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_16 += (((max(29434, (arr_0 [i_0 - 1])))) ? ((((arr_1 [i_0 + 2]) > (arr_0 [i_0 - 3])))) : var_11);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_17 &= 33867;
                arr_7 [2] [i_0] [i_0] [10] = (((arr_3 [i_0]) ? (arr_4 [i_0] [i_0] [i_0 - 3]) : ((-1463305805 ? 19522 : 1463305805))));
            }

            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                arr_12 [i_0] [4] [i_0] = (-339414237 ? -1409071161 : 21147);
                var_18 = (((((-418692243 & (arr_1 [i_0])))) ? -1756324255 : var_5));
            }
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                var_19 = ((arr_10 [i_0] [i_1] [i_4] [i_0 - 2]) - (arr_10 [i_0] [i_1] [10] [i_0 - 1]));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 8;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            arr_22 [i_4] [i_6] &= (arr_8 [i_5 + 1] [i_5 - 1]);
                            var_20 = (max(var_20, ((var_12 ? ((38923 / (arr_3 [i_0]))) : 5708))));
                        }
                    }
                }
                arr_23 [i_1] [i_0] [i_1] = (((arr_9 [i_1] [5] [i_4 - 2]) ? -1453405296 : (arr_9 [i_0] [i_1] [i_4 - 1])));
            }
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 12;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_21 = (max(var_21, 609025564));
                            arr_35 [i_0] [7] [7] [i_7] [i_8] [i_0] [i_10] = ((arr_0 [i_0 + 2]) ? -418692243 : (arr_0 [i_0 - 2]));
                        }
                    }
                }
            }
            arr_36 [i_0] = -1623987566;
        }
    }
    for (int i_11 = 3; i_11 < 10;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 3; i_12 < 9;i_12 += 1)
        {
            for (int i_13 = 4; i_13 < 9;i_13 += 1)
            {
                for (int i_14 = 1; i_14 < 10;i_14 += 1)
                {
                    {
                        var_22 = (min(var_22, -2004261071));
                        arr_47 [6] [i_14] [i_12] [i_12] [i_13] [i_14] = var_9;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_15 = 3; i_15 < 11;i_15 += 1)
        {
            for (int i_16 = 1; i_16 < 11;i_16 += 1)
            {
                {
                    arr_55 [i_11] [i_11] [i_16 + 1] &= ((((min(var_5, 23146))) ? (-1586136085 && var_4) : (max((-686233240 % 418692247), ((((-2147483647 - 1) != 536870400)))))));
                    arr_56 [i_11] [i_15 - 2] [10] = min((min((max(639527888, var_6)), (max(-1, var_2)))), ((min(45710, 65535))));
                    var_23 = (max(var_23, ((((((((arr_26 [10] [10] [0]) ? var_0 : (arr_16 [i_11] [i_11] [8] [i_15] [i_15] [3]))))) ? var_12 : (min((2103738121 || -1073741824), ((-(arr_33 [10] [10]))))))))));
                    arr_57 [i_16] = ((((((arr_32 [i_11] [i_15 + 1] [i_16 + 1] [i_16]) ? (arr_42 [i_15] [i_15 - 3] [i_16 - 1]) : 25031))) ? (!var_3) : ((min(var_13, (arr_42 [i_15] [i_15 - 3] [i_16 + 1]))))));
                    var_24 ^= -595101956;
                }
            }
        }
    }
    #pragma endscop
}
