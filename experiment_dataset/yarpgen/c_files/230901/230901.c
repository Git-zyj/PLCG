/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 4; i_2 < 15;i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0] [i_0] [i_0] [i_1] = (((arr_0 [i_0]) << (-var_4 - 4326611620999021367)));
                    var_18 ^= 2209221337;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] = (((((var_12 ? 27 : var_15))) ? ((2085745959 >> (2085745958 - 2085745944))) : (arr_1 [i_0])));
                                arr_13 [i_0] [i_1] [i_2 - 4] [i_3] [i_4 + 1] = (((-(arr_1 [i_1]))));
                            }
                        }
                    }
                    arr_14 [i_0] [i_0] [i_1] [i_0] = var_15;
                }
                for (int i_5 = 4; i_5 < 15;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [i_1] [i_7 + 1] [i_1] [i_5] [i_7] = (arr_7 [i_6] [8] [i_6] [i_6]);
                                var_19 = (((arr_2 [i_5] [i_1]) - var_15));
                            }
                        }
                    }
                    var_20 = (max((((((~(arr_20 [i_0] [i_1] [i_5] [i_1] [i_1])))) ? (~0) : 26)), ((((((arr_4 [i_5] [i_1] [1]) ? (arr_4 [i_5] [i_1] [i_0]) : -12)) <= ((((arr_7 [i_0] [i_1] [16] [i_5]) || 0))))))));
                    var_21 = var_15;
                    arr_24 [i_0] [i_1] [i_0] [3] = (((((arr_11 [i_0] [i_1] [i_0]) % (arr_7 [i_0] [i_1] [i_5] [i_5]))) * (~var_15)));
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_31 [i_1] = (arr_2 [i_9] [i_1]);
                                var_22 = (min((((var_14 && (arr_5 [i_1] [i_1] [1])))), (((~-12) + var_1))));
                                var_23 = 1;
                            }
                        }
                    }
                }
                var_24 = var_16;
                arr_32 [i_0] [i_0] &= (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    var_25 |= ((var_7 + (~1)));
    #pragma endscop
}
