/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, ((((((((11372831710615910498 * -1556836173) ? -1556836173 : 1)) + 2147483647)) << ((((min((arr_9 [i_0] [i_0] [i_2] [i_3] [i_4]), 3584))) - 38)))))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_2] [i_4] = ((((((arr_9 [i_0] [i_1] [8] [i_3] [i_4]) ? (arr_8 [i_0] [i_0] [12] [i_0]) : var_2))) ? (((((((arr_6 [i_1]) ? 32299 : 1556836172))) ? (!var_17) : ((var_8 ? var_17 : (arr_12 [i_4] [i_3] [i_2] [i_0] [i_4] [14])))))) : (arr_4 [i_0] [i_1] [i_2])));
                                arr_16 [i_0] [i_1] [i_2] [4] [i_0] [i_4] = -6117404324352992953;
                            }
                        }
                    }
                }
                arr_17 [i_0] [i_0] [3] = 12329339749356558662;
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 = (((((((arr_13 [i_7] [i_7] [i_7] [i_6] [i_5] [i_1] [7]) ? 239 : (arr_23 [3] [i_7]))) != ((((arr_9 [i_0] [i_1] [i_5] [i_6] [i_7]) ? 4064 : (arr_2 [i_0] [i_5] [i_5])))))) ? ((32299 ? (((-1556836167 ? (arr_18 [10] [i_1] [i_5] [i_5]) : 32299))) : 363206970935614325)) : (max((((arr_5 [i_1] [i_1] [i_6] [i_7]) ? 12329339749356558662 : (arr_21 [i_5]))), (arr_20 [i_0] [i_1] [i_5] [i_6])))));
                                arr_24 [i_0] [2] [i_5] [i_5] [i_5] [i_6] [i_7] |= 128;
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 -= var_15;
    var_21 = var_17;
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                var_22 = (max((((arr_31 [i_11] [6] [i_11] [0]) ? (arr_31 [i_8] [i_9] [i_10] [i_8]) : (arr_31 [i_8] [i_9] [i_11] [i_12]))), (max((arr_31 [4] [i_9] [i_10] [i_11]), (arr_30 [i_11] [i_9] [i_8] [i_11])))));
                                var_23 = ((~(((arr_30 [i_8] [i_8] [i_10] [i_11]) | (((arr_7 [i_11] [i_9] [i_10] [i_11] [i_12]) ? var_10 : 33215))))));
                                var_24 = (min(var_24, ((((arr_38 [i_8] [6] [i_8] [2]) ? ((max(1, (arr_2 [i_8] [i_10] [i_8])))) : (arr_33 [7]))))));
                                var_25 = (((((var_2 || (arr_0 [i_10]))) ? -33215 : ((var_3 ? 24803 : 16)))));
                            }
                        }
                    }
                }
                var_26 = var_13;
                arr_41 [6] [i_9] &= max((((~(arr_35 [i_8] [i_8] [i_9])))), (min(var_11, (arr_25 [7] [i_8]))));
            }
        }
    }
    #pragma endscop
}
