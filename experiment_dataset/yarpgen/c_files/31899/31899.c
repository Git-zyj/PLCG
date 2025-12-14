/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~((min(11, 1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_12 = ((((((((min((arr_1 [4]), 0))) && (((-(arr_5 [i_1] [i_1] [i_2] [9])))))))) < (((((~(arr_5 [i_1] [i_1] [i_1] [i_1])))) ? (~-478669510) : ((var_3 ? 114 : var_10))))));
                    var_13 += var_1;
                    arr_6 [i_1] [i_1] [i_1] [i_1] = ((~(((-2147483647 - 1) ? (arr_5 [i_1] [i_1] [i_1] [i_1]) : (arr_5 [i_1] [i_1] [i_1] [i_0])))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    var_14 ^= (((((~(arr_8 [i_1] [0] [i_1])))) ^ (min((arr_1 [i_0]), 226))));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 8;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            {
                                arr_14 [i_1] [i_5] [i_0] [i_3] [i_0] [i_0] [i_1] = var_9;
                                arr_15 [i_0] [i_1] [i_1] [i_4] [i_1] = (min(((var_7 ? var_4 : ((3774 ? var_9 : 9190972566934495121)))), ((max((arr_9 [i_1] [9] [i_3] [i_4 - 2] [i_5] [i_5 - 3]), (arr_11 [i_5 - 2] [i_4 - 2] [i_4 - 2] [i_3]))))));
                                var_15 = (((((458752 ? -12 : (arr_3 [i_1])))) ? ((~(arr_2 [i_0]))) : (((25744 && ((min(0, var_0))))))));
                                arr_16 [i_1] = (((min(((var_5 ? 1772817210 : 24)), 104))) ? (arr_5 [i_1] [i_3] [i_1] [i_1]) : (arr_12 [i_1] [i_1]));
                            }
                        }
                    }
                    var_16 = (max(var_16, (((((((1 && (arr_8 [4] [i_1] [i_3]))))) > (max((arr_12 [i_0] [i_0]), -var_6)))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_17 += (((arr_8 [i_6] [i_6] [i_6]) ? (arr_8 [i_1] [i_1] [i_6]) : 62));
                                var_18 = (((var_9 << (61752 - 61748))));
                                var_19 -= (((((arr_11 [i_1] [i_1] [i_6] [i_7]) + 2147483647)) << (195188769 - 195188769)));
                                var_20 = var_8;
                            }
                        }
                    }
                    arr_24 [i_6] |= (((((0 >= (arr_0 [i_0] [i_1])))) ^ -0));
                    var_21 |= var_9;
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_22 = (max((((~(arr_10 [i_0])))), (((arr_2 [10]) ? 243 : var_10))));
                    var_23 = (max(var_23, (arr_22 [i_9] [i_1] [i_1] [i_1] [i_1] [i_0])));
                }
                arr_27 [i_0] [i_1] |= (((((arr_20 [i_1] [i_0] [3] [5]) ? (((var_3 ? var_2 : (arr_8 [i_1] [i_1] [1])))) : ((-(arr_10 [i_0]))))) - -3716621033));
                arr_28 [i_0] [1] [i_1] = ((((min(((((arr_4 [i_1] [i_1] [1] [i_1]) <= (arr_12 [2] [2])))), (max(226, (arr_17 [i_0] [i_1] [i_1] [i_1])))))) ? (arr_3 [i_1]) : (min(var_0, (arr_5 [i_1] [9] [i_0] [i_1])))));
                var_24 = (min(var_24, -23526));
                var_25 += (arr_20 [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
