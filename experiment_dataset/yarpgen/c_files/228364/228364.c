/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [7] [i_0] [i_0] = (((arr_8 [i_2] [8] [i_0] [i_0]) & -87));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_3] = (-((var_5 ? var_10 : var_1)));
                        arr_14 [7] [i_2] [i_1] [i_0] = 3089901713924879834;
                    }
                    arr_15 [6] [i_2] [6] = (((arr_12 [i_2 - 3]) ? (arr_2 [i_2 + 2]) : (arr_0 [i_2 + 2] [i_2 - 3])));
                    var_14 *= ((~(arr_6 [i_0] [i_2 - 2] [i_0])));
                    var_15 = (arr_11 [12] [i_1] [i_2 - 3] [i_2]);
                }
                /* vectorizable */
                for (int i_4 = 2; i_4 < 15;i_4 += 1)
                {
                    var_16 = (arr_3 [i_0]);

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
                        {
                            var_17 = ((((((arr_3 [i_4]) ? var_8 : (arr_18 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4 + 1])))) ? (arr_7 [i_0] [i_1] [i_1]) : ((var_4 & (arr_21 [i_6] [6] [6] [i_0] [i_0] [i_0])))));
                            var_18 *= var_12;
                        }
                        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
                        {
                            var_19 = ((((arr_5 [i_7] [i_4] [3] [i_0]) * (arr_1 [i_5]))) * var_2);
                            var_20 ^= (((var_3 ? var_8 : (arr_6 [i_0] [i_0] [8]))));
                            var_21 *= ((((arr_4 [i_0]) - (arr_0 [i_0] [i_5]))));
                            var_22 = (arr_2 [i_4 - 1]);
                            var_23 = var_3;
                        }
                        arr_25 [7] [i_1] [i_1] [i_1] = -7232320815871987337;
                        var_24 *= (arr_11 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        var_25 ^= (((arr_27 [9] [i_4] [i_1] [1] [i_0]) != (arr_24 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 2])));
                        var_26 = (arr_18 [i_8] [i_4 + 1] [i_1] [i_1] [i_0] [12]);
                        arr_28 [1] [i_8] [1] [i_8] = ((((4294967295 ? (arr_7 [i_0] [i_1] [2]) : (arr_0 [13] [i_8]))) > (((var_7 ? var_5 : -98)))));
                    }
                    var_27 |= var_4;
                    arr_29 [i_1] [i_1] [i_0] [i_0] = ((var_1 & (arr_8 [i_0] [i_1] [i_4] [i_4])));
                    var_28 = (min(var_28, (((((((arr_0 [13] [5]) + (arr_19 [i_0] [12] [i_1] [i_0] [i_0] [i_4])))) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : -22)))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    arr_32 [i_9] [i_1] [i_9] = var_1;
                    var_29 = (max(var_29, (((var_9 > (arr_31 [i_0] [i_1] [i_9] [i_9]))))));

                    for (int i_10 = 1; i_10 < 13;i_10 += 1) /* same iter space */
                    {
                        var_30 = (max(var_30, ((((arr_18 [i_0] [i_1] [i_9] [i_0] [i_10] [i_1]) ? var_2 : (arr_18 [i_10] [i_1] [i_1] [i_1] [i_0] [i_0]))))));
                        arr_35 [i_9] [i_1] [i_1] [i_1] = (((arr_31 [i_0] [i_1] [15] [i_10 + 2]) > (((arr_1 [i_1]) ? var_5 : (arr_8 [i_0] [i_0] [1] [i_10])))));
                        var_31 = ((-(arr_7 [i_10 - 1] [4] [i_10 + 2])));
                    }
                    for (int i_11 = 1; i_11 < 13;i_11 += 1) /* same iter space */
                    {
                        var_32 *= (((((arr_2 [i_1]) ? 27648 : var_8)) >> ((((-25403 ? 3807636664 : (arr_6 [i_0] [i_1] [1]))) - 3807636656))));
                        var_33 *= 1236905531711139293;
                    }
                }
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 16;i_13 += 1)
                    {
                        {
                            var_34 = (min(var_34, (((min((arr_3 [i_0]), var_12))))));
                            var_35 |= var_12;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 16;i_15 += 1)
                    {
                        {
                            var_36 = (((arr_19 [i_0] [i_0] [i_1] [i_14] [i_15] [i_15]) || var_9));
                            var_37 *= 51;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
