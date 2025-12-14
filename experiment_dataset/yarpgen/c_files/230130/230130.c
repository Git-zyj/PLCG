/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_19 = (((arr_0 [i_3]) ? (arr_10 [i_0 - 1] [i_2 + 2] [i_1 + 1] [i_1]) : (arr_5 [i_2] [i_3 + 1])));
                            var_20 -= arr_3 [i_1] [i_1];
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        {
                            var_21 = ((!(((arr_11 [i_0] [i_4]) <= var_2))));
                            arr_15 [i_1] [i_4] [i_1] [i_1] = (((max((arr_3 [i_5] [i_1]), ((~(arr_11 [i_1] [i_1]))))) < ((-var_15 ? var_18 : (185 < var_15)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_22 = (max(((((3337271471 ? -5001 : 0)))), (arr_16 [i_6])));
                                var_23 = (max(var_23, (min((arr_21 [i_6] [i_10]), -0))));
                                var_24 = ((arr_23 [i_10] [i_7] [i_7] [i_6]) ? ((~(arr_23 [i_8 + 1] [i_7] [i_7] [i_7]))) : ((max((arr_23 [i_9] [i_7] [i_7] [i_6]), (arr_23 [i_9] [i_7] [i_7] [i_7 + 3])))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_11 = 3; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 13;i_13 += 1)
                        {
                            {
                                var_25 *= ((((((min((arr_16 [i_6]), var_16)) | (arr_29 [i_12] [i_13] [i_13] [i_6])))) ? ((((1122983433920574040 ^ (arr_18 [i_6] [i_6]))) ^ ((min(var_10, (arr_17 [i_12] [i_7])))))) : (~-14291)));
                                var_26 = (arr_32 [i_13] [i_11 - 1] [i_7] [i_7] [i_11] [i_11 - 3]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
