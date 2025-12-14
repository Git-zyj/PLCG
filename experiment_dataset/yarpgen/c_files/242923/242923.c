/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_16 -= (min((arr_2 [i_1 + 1] [i_2 - 1]), (((!(arr_3 [i_0] [i_0] [2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((-(((var_4 ? var_8 : (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                                var_18 = (arr_10 [i_1] [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                                var_19 -= (arr_0 [i_1] [i_1 + 1]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = 1791805376;
                            }
                        }
                    }
                    var_20 = ((max(8351, -57185)) << var_7);
                }
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_21 += (((max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] [i_5]), (arr_7 [i_0] [i_0]))) & (((-14627 ^ (((!(arr_5 [i_5] [i_5])))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] = var_11;
                                arr_24 [i_0] [i_1] [i_1] [i_0] [i_1] [i_0] = 8348;
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (min((arr_4 [i_7] [i_7] [i_7]), (arr_22 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_7 - 2])));
                            }
                        }
                    }
                    var_22 ^= ((~(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
                for (int i_8 = 2; i_8 < 17;i_8 += 1)
                {
                    var_23 = (arr_2 [i_0] [i_0]);
                    var_24 ^= ((~(8362 * 1)));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 18;i_10 += 1)
                        {
                            {
                                var_25 = (((arr_5 [i_0] [i_1]) | ((((!(((-1102208075 ? (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : var_14)))))))));
                                var_26 = (max(var_26, (arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])));
                                arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] = ((((arr_3 [i_10] [i_10] [i_1]) ? (arr_20 [i_0] [i_0 - 4] [i_0 - 4] [i_8 + 2] [i_10 + 1]) : (arr_13 [i_0]))));
                                arr_33 [i_1] [i_1] = (arr_31 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]);
                                arr_34 [i_0] [i_0] [i_1] [i_0] [i_0] = ((~((((arr_15 [i_1] [i_1]) || var_0)))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_11 = 3; i_11 < 17;i_11 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19;i_12 += 1)
                    {
                        for (int i_13 = 1; i_13 < 16;i_13 += 1)
                        {
                            {
                                var_27 ^= (arr_26 [i_0] [i_0]);
                                var_28 = ((var_0 > (arr_19 [i_11] [i_11 - 2] [i_11 - 3] [i_11] [i_11 - 3])));
                                var_29 = (arr_7 [i_1] [i_1]);
                            }
                        }
                    }
                    var_30 = (max(var_30, (arr_6 [i_0] [i_0] [i_0] [i_0])));
                    var_31 = (arr_15 [i_1] [i_1]);
                }
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 19;i_15 += 1)
                    {
                        {
                            var_32 = 1;
                            arr_47 [i_0] [i_0] [i_0] [i_1] = (min((max((arr_9 [i_14] [i_1] [i_1] [i_0]), (arr_45 [i_1] [i_1] [i_1] [i_1]))), (127 ^ var_14)));
                            arr_48 [i_0] [i_0] [i_1] [i_0] [i_0] = ((-578181107 ? (!var_1) : ((((arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_1] [i_1] [i_1]) || (arr_12 [i_0] [i_0 - 4] [i_0] [i_0] [i_1] [i_0 - 4] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    var_33 = (max(var_33, ((((((((2955513617 ? 2377240946 : var_10)) || var_7))))))));
    var_34 = var_7;
    #pragma endscop
}
