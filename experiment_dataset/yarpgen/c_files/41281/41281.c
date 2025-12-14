/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_12 &= (((3469632768 ? (arr_3 [i_2]) : ((((arr_5 [i_0] [i_1] [i_1]) >= (arr_3 [i_1])))))));
                                var_13 = ((32767 || (((((var_1 << (627419027 - 627419017))) * ((~(arr_2 [i_0] [2] [9]))))))));
                            }
                            var_14 &= (((arr_7 [i_3] [8] [i_2] [i_2] [i_1] [i_0]) ? ((min(var_0, (arr_13 [10] [i_1] [i_2] [1] [i_3])))) : ((((((var_9 >= (arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])))) > (!var_0))))));
                            arr_14 [i_2] [i_2] [i_3] [i_3] [i_1] = (((((-var_1 ? ((((arr_9 [i_0] [2] [i_0] [i_0]) << (95 - 88)))) : (arr_4 [9] [9])))) ? 32767 : ((((((var_1 && (arr_8 [i_0] [7] [i_2] [i_3] [i_1])))) < (arr_3 [i_0]))))));
                        }
                    }
                }

                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_15 *= var_4;
                                arr_22 [i_0] [i_1] [i_1] [i_7] = ((((((arr_7 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7]) & (~16886907089423014647)))) ? ((~(arr_17 [i_1] [i_6] [i_7]))) : 12288));
                                var_16 = ((-((~(((arr_13 [i_0] [i_1] [i_7] [i_6] [i_7]) * var_1))))));
                            }
                        }
                    }
                    arr_23 [i_5] [5] [i_5] = (!-1);
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1)
                {
                    var_17 = (((arr_1 [3] [i_1]) - (arr_11 [i_8] [15] [15] [i_1] [i_1] [i_0])));
                    var_18 ^= ((32767 ? ((var_0 ? var_5 : var_8)) : (arr_26 [i_0] [i_1] [i_8] [i_8])));
                    arr_28 [3] [i_8] = (~var_10);
                }
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                arr_39 [i_0] [i_1] [i_9] [i_10] [2] [i_11] = (max((((95 >= (-32767 - 1)))), ((min((arr_10 [1] [i_1] [i_0]), var_5)))));
                                var_19 = ((((-(arr_16 [i_0] [i_0] [14]))) + (((-1516832227 ^ var_8) + (arr_5 [5] [3] [3])))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 15;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 15;i_13 += 1)
        {
            {
                var_20 = ((((~((1 ? var_6 : (arr_35 [i_13] [i_13] [9] [i_12] [i_12]))))) | (arr_15 [i_13])));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 15;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            arr_52 [i_12] [i_13] [i_13] [i_13] = (((((~(arr_10 [i_12] [i_13] [i_14])))) || (((-32764 ? 32762 : 32758)))));
                            arr_53 [i_12] [4] [i_12] &= (((var_1 ^ (arr_19 [i_13]))));
                            var_21 = (max(var_21, (arr_3 [i_14])));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_10 + ((33653 + (var_9 + 1516832226)))));
    #pragma endscop
}
