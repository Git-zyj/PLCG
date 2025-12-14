/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21615
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] [4] [i_2] |= ((min(1, (arr_1 [i_2 - 2]))));
                    var_11 += (max(((((arr_1 [i_2 + 2]) == (max(0, 24))))), 524287));
                }
            }
        }
        arr_10 [i_0] [i_0] = ((-(min(var_4, (arr_2 [i_0])))));
        var_12 += 0;
        var_13 ^= (max((arr_0 [i_0] [i_0]), (!232)));
        var_14 = 2147483647;
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            {

                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                {
                    var_15 = 15;
                    var_16 = (min(var_16, (((!(arr_4 [i_4]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((-(arr_20 [i_6 + 1] [i_7 + 2]))))));
                                var_18 = ((24 * (22 && 0)));
                                var_19 ^= (arr_12 [i_3] [i_3]);
                            }
                        }
                    }
                    var_20 = (max(var_20, var_0));
                }
                for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                {
                    var_21 = (max(var_21, (arr_14 [i_3 + 3])));

                    for (int i_9 = 1; i_9 < 1;i_9 += 1)
                    {
                        var_22 = var_4;
                        var_23 = (min(var_23, (((-(arr_19 [i_8] [i_8] [i_8]))))));

                        for (int i_10 = 2; i_10 < 16;i_10 += 1)
                        {
                            var_24 = ((((var_2 * (arr_12 [i_9 - 1] [i_3 - 3]))) == (((arr_4 [i_3 - 1]) ? (arr_11 [i_3 - 1] [i_9 - 1]) : (arr_4 [i_3 - 1])))));
                            var_25 = (min(var_25, 64));
                            var_26 = (max((arr_29 [i_10] [i_10] [i_10 + 2] [i_10 - 1] [i_10 - 2]), (((-(arr_1 [i_3]))))));
                        }

                        for (int i_11 = 2; i_11 < 17;i_11 += 1)
                        {
                            var_27 = (max(var_27, (arr_31 [i_3] [i_3] [i_3 + 3] [i_3] [i_3])));
                            arr_32 [i_3] [i_4] [i_3] [i_3] [i_9] [1] [i_4] = var_3;
                        }
                    }
                }
                var_28 = (min(var_28, (((-(max((arr_13 [i_3 + 1] [i_3 + 1] [i_3 + 3]), var_3)))))));
                arr_33 [i_3 - 1] [14] [i_4] = (((arr_18 [i_4] [i_4] [i_3 + 2] [i_3 - 2] [i_3 - 2]) == (~4294967288)));
            }
        }
    }
    var_29 = var_10;

    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_30 += ((((((arr_21 [i_12] [i_12] [i_12] [2] [i_12] [10] [i_12]) ? (arr_17 [6] [i_12] [i_12] [i_12]) : 18446744073709551615))) ? (((var_1 ^ (arr_23 [i_12] [i_12] [i_12] [i_12])))) : (((arr_21 [i_12] [i_12] [0] [i_12] [i_12] [1] [8]) ^ (arr_21 [i_12] [i_12] [i_12] [i_12] [i_12] [16] [16])))));
        var_31 = (max(var_31, (arr_17 [2] [2] [i_12] [i_12])));
    }
    #pragma endscop
}
