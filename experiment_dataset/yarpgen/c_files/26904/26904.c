/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((-((var_11 ? 26551 : var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = (max(var_18, (max((max((arr_10 [i_2 - 1] [i_2]), (arr_10 [i_2 - 1] [i_2 - 1]))), (max((arr_10 [i_2 - 1] [i_3]), var_11))))));
                            var_19 = (max(var_19, (((((arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1]) ? (arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1]) : (arr_7 [i_2 - 1] [i_3 - 1] [i_3 - 1])))))));
                            var_20 += ((((((((-(arr_6 [i_0] [1] [i_3 + 1])))) ? var_15 : (arr_4 [i_3 - 1])))) ? (max((((arr_0 [i_0] [7]) * (arr_6 [i_1] [i_2] [i_1]))), (arr_12 [i_0] [i_1] [i_2] [i_2]))) : ((min((arr_7 [i_2 - 1] [i_3 - 2] [i_3 - 1]), (arr_11 [i_3] [i_3] [i_0] [i_3]))))));
                        }
                    }
                }
                var_21 = (((max((arr_10 [i_0] [i_0]), (arr_4 [i_0]))) != var_15));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_22 += ((5 ? 149 : -1078002559));
                                var_23 = ((((((((arr_9 [i_0] [i_0] [i_0] [i_5]) | var_13))) | (((arr_1 [i_0]) ^ var_7)))) != ((((arr_3 [i_6] [i_4]) ? (arr_9 [i_0] [i_1] [i_4] [i_5]) : (((arr_7 [i_0] [i_4] [i_6]) ? var_15 : var_2)))))));
                                arr_20 [i_6] [6] [i_4] [i_4] [i_6] [i_6] [i_4] = ((((-((max(var_15, (arr_5 [i_6])))))) < ((max((arr_5 [i_6]), (!-1078002559))))));
                            }
                        }
                    }
                }
                var_24 = ((((max((max(var_15, (arr_16 [i_1]))), var_13)))) + ((var_14 * (((arr_14 [i_0] [i_1] [i_1] [i_1]) - var_3)))));
            }
        }
    }
    var_25 = var_6;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            {
                var_26 = (max(((max(((var_2 & (arr_22 [i_7]))), 155))), (((((arr_17 [7] [i_7] [i_8] [i_8] [i_8]) ? (arr_26 [i_7] [i_8] [i_8]) : 80)) + (((max(var_1, (arr_18 [i_8] [i_7] [i_8])))))))));
                var_27 = (max((((((~0) + 2147483647)) << ((((var_2 ? (arr_14 [i_8] [i_8] [i_8] [i_8]) : (arr_23 [i_7]))) - 703381753)))), ((((max(var_7, var_0))) ? ((-1 ? var_8 : var_7)) : ((-32080 ? var_7 : var_16))))));
                var_28 = (min(var_28, ((max((((var_3 < (arr_0 [i_7] [i_7])))), (var_10 & 700595227))))));
            }
        }
    }
    var_29 = (max(var_29, ((max(((-(max(var_3, 2)))), var_16)))));
    #pragma endscop
}
