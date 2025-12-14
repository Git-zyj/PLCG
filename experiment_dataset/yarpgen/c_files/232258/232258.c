/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] [i_1] [i_3] [7] = (var_1 | var_6);

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_3] = ((((((var_5 ? var_2 : (arr_9 [i_3] [i_3] [i_4]))) + 2147483647)) >> (((~-104) - 102))));
                                var_10 = (((~-30612) || (((-1 / (arr_0 [i_0]))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 4; i_5 < 22;i_5 += 1)
                            {
                                arr_17 [i_3] [i_1] [i_2] [i_3] = (~-18648);
                                var_11 -= (((((arr_6 [i_0] [i_1] [i_5]) ? (arr_15 [i_0] [i_2] [i_3] [i_5]) : (arr_12 [i_0] [i_0] [i_0])))) ^ ((var_7 * (arr_12 [i_0] [i_0] [i_2]))));
                                var_12 &= (((arr_11 [i_0 + 1] [i_1 - 1]) / (arr_11 [i_0 - 1] [i_1 - 1])));
                                arr_18 [i_3] [i_3] = ((((((arr_9 [i_3] [i_1] [i_1]) ? (arr_5 [i_1 - 1] [16] [i_3] [i_5]) : var_6))) ? (arr_9 [i_3] [i_5 - 2] [i_5]) : -var_2));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                arr_21 [i_3] [i_3] [i_2] [21] [i_3] = (-127 - 1);
                                var_13 = (((arr_15 [i_3] [i_1 - 1] [i_2] [i_2 - 1]) ? (arr_15 [i_3] [i_1 - 1] [i_1 - 1] [i_2 - 3]) : 2291));
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_14 = (max(var_14, ((((((max((((-127 - 1) - var_9)), ((-(arr_11 [i_1] [i_2]))))) + 2147483647)) >> ((((+(((arr_0 [i_0]) ^ (arr_3 [i_0] [i_3] [i_7]))))) - 23344)))))));
                                var_15 = ((~(arr_8 [i_0] [i_1 - 1] [i_1 - 1] [i_0 + 1])));
                                var_16 = (max(var_16, ((((((var_6 ? var_5 : 12774)) | (((arr_6 [i_3] [11] [i_3]) ^ 25751))))))));
                            }
                        }
                    }
                }
                var_17 = (!4081);
                var_18 ^= ((~(((arr_0 [i_0 + 2]) ? (arr_20 [i_0] [i_0] [i_0 + 1] [i_0] [20]) : var_9))));
                arr_24 [i_0] [i_0] [i_0 + 2] = (arr_11 [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            {
                var_19 = ((-((25751 - (arr_0 [i_8])))));
                var_20 = (((((var_8 ? var_9 : (arr_8 [i_8] [i_8] [i_9] [i_9])))) ? (-127 - 1) : (arr_22 [i_9] [i_8] [i_8])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            {
                arr_35 [i_10] [i_11 + 1] [i_10] = ((39775 ? (arr_1 [i_11 + 1] [i_11]) : (!16777088)));
                var_21 = (min(var_21, (!17)));
                var_22 = (max(((!(arr_28 [i_11] [i_11 + 2] [i_11 + 2]))), (((0 != 3233448789) >= (arr_14 [i_10] [i_11] [16] [16] [i_10])))));
                var_23 = (arr_33 [i_10] [i_11]);
            }
        }
    }
    var_24 = var_3;
    #pragma endscop
}
