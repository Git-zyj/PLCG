/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 23;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_4 - 2] [i_2] [i_4] = ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_8))) ? (arr_7 [i_4 - 1] [i_3] [i_1] [i_0]) : (arr_7 [i_0] [i_1] [i_2 - 1] [1])));
                                var_11 = (min(var_11, (((-((((var_6 ? (arr_2 [i_4] [i_4]) : (arr_3 [i_0] [0] [5]))) / (arr_8 [i_4] [i_0] [i_0] [i_0] [i_4]))))))));
                            }
                        }
                    }
                    var_12 = (((((var_7 ? var_10 : (arr_7 [i_0] [i_0] [i_2 + 1] [i_0])))) ? ((max(var_10, var_6))) : var_2));
                    var_13 = (((arr_5 [i_0]) ^ ((~(arr_5 [i_0])))));
                    arr_14 [i_0] [i_0] [i_0] [i_2] = ((((((var_10 ? var_6 : var_8)) ? (((arr_9 [i_0] [i_0]) << (var_10 - 71))) : (arr_10 [i_0] [i_2])))));
                }
                /* vectorizable */
                for (int i_5 = 2; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    var_14 &= arr_16 [i_5 - 2] [14] [i_0];
                    var_15 = (((arr_1 [i_0]) & -1220539059));
                    var_16 = (min(var_16, (arr_4 [i_5 + 2] [i_1] [i_0])));
                    var_17 = (max(var_17, ((((arr_9 [14] [12]) ? 19863 : ((var_3 ? (arr_4 [i_0] [i_1] [i_1]) : (arr_0 [i_0]))))))));
                }
                /* vectorizable */
                for (int i_6 = 2; i_6 < 23;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_18 = (arr_5 [i_0]);
                                var_19 -= ((((((arr_12 [i_8] [i_8]) ? var_7 : -2404161436667538030))) ? (arr_19 [i_8]) : (arr_3 [i_0] [i_0] [i_0])));
                                var_20 = (arr_0 [i_6 + 2]);
                            }
                        }
                    }
                    var_21 += (arr_20 [i_6] [i_1] [i_6 + 2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            {
                                arr_29 [20] [i_0] [i_1] [i_6] [i_6] [14] = (arr_26 [10] [i_0] [i_1] [i_6] [i_1] [i_1]);
                                var_22 = (((arr_1 [i_0]) ? var_5 : (arr_1 [i_0])));
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] = ((!(!1220539034)));
                                arr_31 [i_0] [1] [i_6] [i_0] [7] [i_6] = (var_6 ? (arr_28 [i_0] [i_1] [i_6] [i_0] [i_10] [i_10]) : (arr_25 [i_1] [i_1] [i_9 + 1] [i_10]));
                                var_23 = (max(var_23, ((((arr_9 [i_9 - 1] [i_10]) && (arr_9 [i_0] [i_10]))))));
                            }
                        }
                    }
                }
                arr_32 [i_0] = (max(((((((arr_8 [i_0] [i_1] [i_1] [i_1] [i_0]) * (arr_15 [i_0] [i_0] [i_1])))) ? (max(var_7, 3331062167)) : (((0 ? 3331062167 : -45))))), 1666344590));
                var_24 ^= (arr_19 [22]);
                arr_33 [0] [10] &= (((((-(arr_2 [0] [i_1 - 2])))) ? (((var_4 + 2147483647) >> (((((arr_10 [0] [i_1]) ? var_2 : (arr_10 [20] [20]))) + 211049791)))) : var_0));
            }
        }
    }
    var_25 &= var_7;
    #pragma endscop
}
