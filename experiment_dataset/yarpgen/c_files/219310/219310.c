/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 ^= (~var_7);
                            var_17 = ((min((arr_4 [i_0] [i_0]), var_14)) | (arr_5 [i_0] [i_2] [i_2] [i_3]));
                            var_18 = var_5;
                            var_19 = (max(var_19, ((-((((max((arr_0 [8]), -1573562983))) ? (min((arr_5 [i_0] [i_0] [i_0] [i_0]), 4294967295)) : ((((arr_4 [i_0] [2]) ? var_13 : (arr_6 [5] [5]))))))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            {
                                var_20 = (max(((-8069418047397081167 & (((83 ? var_2 : var_6))))), var_15));
                                var_21 = var_11;
                                var_22 = ((+((((~-1573562983) != (((arr_16 [i_6] [i_5] [i_4 + 1] [i_1] [i_0]) ? (arr_9 [i_0] [i_1] [i_4]) : (arr_16 [i_0] [i_1] [i_0] [i_5] [i_0]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            arr_30 [i_10] [i_8] [4] [i_7] [9] [7] = ((((((arr_24 [i_7] [i_8] [i_9] [i_10]) & var_13))) ? 1 : ((min(83, var_8)))));
                            var_23 = ((var_5 > ((~(arr_21 [i_7])))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_24 = 32;
                            arr_38 [i_7] [i_11] [i_8] [i_7] = (((((max(var_13, (arr_28 [i_7] [i_7]))) ^ (arr_33 [i_7] [i_8]))) | (-33 | var_8)));
                            var_25 = (arr_32 [1] [1]);
                            var_26 += ((((arr_28 [12] [i_8]) != var_13)));
                            var_27 = (((((arr_22 [i_7] [i_7] [i_12]) ? var_10 : ((5635621777109450586 ? (arr_28 [5] [i_7]) : var_2)))) + ((((((arr_35 [i_11] [i_8] [i_11] [i_8]) ? var_12 : var_11)) ^ var_13)))));
                        }
                    }
                }
            }
        }
    }
    var_28 = var_7;
    #pragma endscop
}
