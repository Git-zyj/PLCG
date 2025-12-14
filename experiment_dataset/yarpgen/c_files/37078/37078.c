/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((((var_17 >= (var_16 - var_0))) ? var_11 : ((((var_17 << (var_7 - 7969493169810209614))) * ((var_18 ? var_11 : var_6))))));
    var_20 = var_6;
    var_21 = ((var_6 * (((var_18 * var_1) ? (var_8 / var_14) : ((var_1 ? var_11 : var_17))))));
    var_22 += var_15;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_23 = (((((((((arr_4 [i_1] [i_3]) ? (arr_7 [i_2] [i_3]) : (arr_2 [i_1] [i_1]))) <= (arr_3 [i_1] [i_1] [i_3]))))) < (((arr_7 [i_1] [1]) & (arr_8 [i_1])))));
                        var_24 *= (((((((((arr_3 [i_0] [i_1] [i_0]) & (arr_0 [i_3])))) ? (arr_3 [i_0] [i_1 + 1] [2]) : (((arr_9 [i_2] [i_1] [i_0]) + (arr_2 [i_0] [i_0])))))) <= ((((((arr_6 [i_1 + 1]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0])))) % (arr_8 [i_3])))));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                    {

                        for (int i_5 = 2; i_5 < 10;i_5 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_4] [i_1] [i_1] = (((arr_13 [i_1 - 1] [i_2 + 2] [i_2 + 2] [i_5]) ? (((((((arr_11 [i_0] [i_1 - 1] [i_2] [i_2]) | (arr_10 [i_1 + 1] [2])))) ? (((arr_9 [i_0] [i_1 - 1] [i_2 + 1]) ? (arr_9 [9] [1] [10]) : (arr_4 [i_2] [8]))) : (((((arr_1 [i_0 - 1]) || (arr_12 [i_0] [i_0] [i_0] [10] [i_0])))))))) : (((((arr_5 [i_0]) - (arr_2 [i_0] [i_1]))) + ((((arr_4 [i_2] [i_4]) << (((arr_3 [i_1] [i_1] [i_2]) - 1829718282)))))))));
                            var_25 = (((arr_2 [2] [i_1]) % (arr_8 [i_2])));
                        }

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            arr_18 [i_1] [i_6] = ((arr_7 [i_2] [i_2]) ? (((arr_10 [i_0] [i_1 + 1]) + (arr_17 [i_6] [i_4 + 1] [i_2] [i_1 + 1] [i_0]))) : (((arr_1 [i_4 + 1]) ? (arr_11 [i_1] [i_1] [i_1] [i_1 - 1]) : (arr_7 [i_0 + 1] [i_0 + 1]))));
                            var_26 = (arr_9 [i_0] [i_2] [9]);
                            var_27 = ((((((arr_5 [i_0]) ? (arr_2 [i_0] [i_1]) : (arr_17 [i_0] [i_0] [i_0] [i_0 + 1] [5])))) > (((arr_3 [i_1] [i_1] [i_6]) ^ (arr_6 [i_0])))));
                            var_28 = (((((arr_15 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0]) <= (arr_4 [i_4 + 1] [i_6]))) ? (((arr_1 [i_0]) ? (arr_16 [i_0]) : (arr_3 [i_1] [i_1] [7]))) : (arr_11 [i_0] [i_0] [i_0 - 2] [11])));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_29 = (((((arr_0 [i_7]) || (arr_12 [i_2 + 2] [i_2] [i_2] [i_2] [i_2]))) || (arr_12 [i_0] [i_1] [i_1] [i_1] [i_7])));
                        arr_22 [7] [i_1] [i_2 + 1] [i_7 + 1] [i_1 - 1] [i_7 + 1] = (arr_20 [i_1] [i_1]);
                    }
                    var_30 = ((((((((arr_19 [i_0] [i_0 + 1] [i_0 + 1] [i_2 - 1]) ? (arr_12 [i_2] [i_1 + 1] [i_1 + 1] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_1 - 1])))) ? (((arr_6 [9]) / (arr_13 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1]))) : ((((arr_21 [i_0]) ? (arr_3 [i_1] [0] [3]) : (arr_16 [i_2 + 2])))))) * ((((((((arr_7 [i_0] [i_0]) * (arr_7 [i_0] [i_2])))) < (((arr_5 [i_2]) ? (arr_12 [4] [i_2 - 1] [i_1 - 1] [i_0 - 1] [i_0]) : (arr_9 [i_2 + 2] [i_2] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
