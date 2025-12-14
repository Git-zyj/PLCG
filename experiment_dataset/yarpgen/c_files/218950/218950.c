/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218950
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = (min((((((max(145, var_8))) ? (0 ^ var_12) : ((31814 ? var_4 : 65535))))), var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (max(var_18, (((((((((var_12 ? (arr_1 [i_1 + 2]) : (arr_4 [1] [i_0])))) ? (min((arr_2 [i_0] [2]), var_5)) : var_14))) ? (((arr_5 [i_0] [i_1 + 2] [6]) ? (arr_5 [i_0] [i_1 + 2] [22]) : (arr_5 [i_0] [i_1 + 2] [i_1 + 2]))) : (arr_2 [i_0] [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_17 [i_1] [1] = (((((65534 ? 65531 : 28))) ? (arr_1 [i_1 + 2]) : (!var_10)));
                                var_19 = (((((arr_10 [i_0] [i_0] [i_1] [6] [i_0]) + 2147483647)) << (((var_1 + 803738128) - 30))));
                                arr_18 [i_4] [i_3] [i_2 - 1] [i_0] [i_1 + 3] [i_4] &= (arr_7 [4] [i_1] [i_2] [i_3]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_20 |= (-127 - 1);
                            arr_25 [17] [i_0] [12] [i_5 - 3] [i_1] = (((arr_12 [i_6] [i_1] [i_5 - 3] [9]) << (65531 + 18)));
                            var_21 = (max(13829139647044355204, ((max((arr_14 [i_0] [i_1 + 1] [i_5 + 2] [i_6] [i_6]), 3)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_22 = (min((max(5, 4251324654321247671)), var_12));
                            var_23 = (((((arr_27 [i_8 - 1] [i_8] [i_8 - 1] [i_8]) ? 274877904896 : 15)) << (~-36)));
                        }
                    }
                }
                var_24 = ((65526 ? (arr_28 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 2]) : ((1 ? (arr_28 [i_1 + 3] [i_1] [i_1 + 2] [i_1 - 1]) : (arr_28 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 2])))));
            }
        }
    }
    var_25 = (max(var_3, 28180));
    #pragma endscop
}
