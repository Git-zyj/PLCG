/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (arr_0 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_21 = (min(var_21, ((max(((-(arr_1 [i_4 - 3] [15]))), -var_3)))));
                                var_22 = ((!(((var_10 ? (arr_9 [i_0] [15] [i_2] [i_3] [i_4 - 4]) : var_13)))));
                                var_23 |= (((arr_2 [0]) & (((((arr_10 [i_4 - 3]) != (arr_5 [12] [i_1] [i_0])))))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        var_24 = (((33056 ? 1782280272 : (arr_13 [i_0] [i_5] [i_2] [i_0]))));
                        var_25 = (min(var_25, ((((!(arr_14 [4] [i_5] [i_2] [4] [4])))))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_26 = (max(var_26, (((((max((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_9 [1] [i_1] [i_2] [i_6] [i_1])))) || (((~(arr_9 [i_7] [i_6] [i_2] [1] [i_0])))))))));
                            var_27 = (!(arr_7 [i_2]));
                            var_28 = (((((((247 ? 26493 : var_1))) ? (((((arr_18 [i_0] [i_6] [i_2] [i_0] [i_0]) != var_8)))) : (arr_13 [i_0] [i_1] [i_2] [i_6]))) + (((((((arr_17 [i_1] [i_1] [i_2] [i_1] [i_0] [i_0]) ^ var_1))) ? (!1) : (arr_1 [i_0] [i_1]))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            var_29 = ((-(arr_6 [i_0] [i_2])));
                            arr_22 [i_0] [i_1] [i_0] [i_0] [i_6] |= (arr_21 [i_8] [i_8 + 2] [i_6] [i_6] [i_0] [i_0]);
                        }
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            var_30 = var_11;
                            var_31 = (((((~(((arr_9 [i_9 + 2] [1] [i_1] [i_1] [1]) ? (arr_3 [i_1] [i_0]) : 52349))))) == (min((arr_20 [i_0] [0] [i_2] [0] [i_2]), (min(var_0, (arr_15 [i_1] [i_0])))))));
                            var_32 ^= (arr_24 [i_0] [i_1] [i_2] [1] [i_9 + 1]);
                            arr_25 [i_0] [i_1] [i_1] [i_6] [i_9 + 1] [i_0] [7] = 1;
                        }
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            var_33 = (max(var_33, (arr_2 [i_6])));
                            arr_29 [i_0] [i_0] [i_1] [3] [i_6] [i_10] = 1639;
                        }
                        var_34 = ((!((max((arr_8 [i_0]), (min(21027, 3457457417)))))));
                    }
                    /* vectorizable */
                    for (int i_11 = 3; i_11 < 15;i_11 += 1)
                    {
                        var_35 = ((-(arr_20 [i_0] [i_0] [i_11 - 1] [i_11 - 1] [i_11])));
                        arr_32 [i_0] [i_2] [i_0] = (1406175765959722312 * 1406175765959722312);
                        arr_33 [i_0] [i_1] [i_1] [i_1] = ((((((-21853 + 2147483647) << (514552949 - 514552949)))) ? (arr_23 [i_0] [i_0] [i_1] [13] [i_2] [i_2] [i_11]) : (arr_7 [i_0])));
                    }
                }
            }
        }
    }
    var_36 = var_12;
    #pragma endscop
}
