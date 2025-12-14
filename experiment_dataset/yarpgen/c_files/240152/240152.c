/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240152
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] = -29502;
                    var_14 = (((((((4083334445 || (arr_0 [i_2]))) ? 1795245560 : (!var_3)))) ? (((var_0 ? ((max(var_4, var_4))) : var_6))) : var_2));
                    arr_7 [i_0] [i_0] [i_1] [i_0] = (((var_13 ^ (1 - var_5))));
                    var_15 = (((-1 * -1) * ((~(((-2147483647 - 1) ? 1 : -837342699))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] [0] = 0;
                                arr_15 [7] [i_1] [23] [i_2] [i_3] [i_4] = -837342699;
                            }
                        }
                    }
                }
                for (int i_5 = 2; i_5 < 23;i_5 += 1)
                {
                    var_16 ^= (((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2]) ? (arr_10 [i_5 - 1] [i_5] [i_5] [21]) : var_13));
                    arr_19 [i_0] [i_1] [i_0] |= ((arr_10 [i_5 + 1] [i_5] [i_5] [i_5]) ? (~var_0) : (((((arr_10 [i_5 + 1] [i_5] [i_5] [24]) <= var_4)))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            var_17 ^= -647792440;
                            var_18 = (max(var_18, (((((((arr_5 [i_7 + 2] [i_7 + 2] [i_7 - 1]) - var_0))) ? (!837342698) : (((-22564 & 1) ^ 0)))))));
                        }
                    }
                }
                var_19 ^= (((!647792439) ? (((var_10 ? 11580 : (arr_0 [i_0])))) : (-5668250260925476709 & 44176)));

                /* vectorizable */
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_29 [i_0] [0] [0] [i_8] = ((~((14366574090680245392 ? var_11 : -647792440))));
                    arr_30 [i_0] [i_0] [i_0] = var_10;
                    var_20 = (max(var_20, var_13));
                }
            }
        }
    }
    var_21 -= var_9;
    /* LoopNest 3 */
    for (int i_9 = 2; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 19;i_11 += 1)
            {
                {
                    var_22 &= var_12;
                    arr_38 [16] [i_9] [i_10] [i_9] = (min(var_8, var_10));
                    var_23 = (min(var_23, var_10));
                    var_24 ^= var_9;
                    arr_39 [i_9] [i_9] [i_10] [i_11] = var_7;
                }
            }
        }
    }
    var_25 += ((((((444023367 < ((-25 ? 2147483647 : -837342699)))))) >= var_2));
    #pragma endscop
}
