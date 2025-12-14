/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((((~((((arr_2 [21]) != (arr_2 [22])))))) + 2147483647)) << (((arr_2 [i_0 - 1]) - 1820499145)))))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        var_18 = (max(var_18, ((~(arr_2 [i_3 - 1])))));
                        arr_9 [i_2] [i_2] = ((-((((arr_1 [i_3]) <= (arr_2 [i_2]))))));
                        arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_2] = (arr_8 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1]);
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        arr_13 [i_2] [i_2] [i_2] [i_4] [i_4] [18] = (((arr_2 [i_4 + 2]) ? (arr_1 [i_4]) : (arr_8 [i_2] [i_1] [i_1] [i_1] [i_1] [i_4 + 2])));
                        arr_14 [i_2] [11] = ((((((-705605566 + 2147483647) >> (197 - 170)))) ? (arr_4 [i_1] [i_4 + 2]) : (((arr_8 [i_2] [i_2] [i_1] [i_2] [21] [i_2]) ? (arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_2]) : (((arr_8 [i_2] [i_1] [i_1] [i_1] [i_2] [i_4]) & (arr_4 [i_0] [i_4])))))));
                        var_19 = (((((arr_3 [i_0] [i_0]) ? ((3023794673 - (arr_11 [i_0 - 2] [5] [i_2] [i_4]))) : (((((arr_0 [i_0]) >= (arr_8 [i_2] [4] [i_2] [i_2] [i_2] [i_2]))))))) <= (arr_11 [i_0] [i_1] [i_2] [i_1])));
                    }
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            arr_20 [i_2] [i_2] [i_2] [i_5] [i_5] [20] [i_0] |= (((((-(arr_15 [i_0] [i_1] [i_2] [i_5] [i_0])))) != (((((~(arr_8 [i_1] [4] [20] [i_2] [i_5] [i_6])))) ? ((~(arr_15 [i_0] [i_0] [i_0 - 3] [i_0 - 3] [i_0]))) : (arr_5 [8] [i_0 - 2] [i_0 - 3])))));
                            var_20 = (max(var_20, ((((arr_4 [i_0] [16]) & (arr_12 [0] [0] [i_0 - 3] [14] [i_0]))))));
                            arr_21 [i_2] [i_2] = (arr_3 [i_0] [i_0 - 4]);
                            arr_22 [i_0] [7] [i_2] [11] = (arr_2 [i_0]);
                            var_21 = (max(var_21, (arr_3 [i_0 - 2] [i_0 + 1])));
                        }
                        var_22 += ((((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 + 1])))) ? (arr_11 [16] [i_0 - 3] [i_0] [i_0]) : (arr_17 [i_0 - 4] [i_1] [i_0 - 4] [22] [i_0 - 4])));
                        var_23 = (max(var_23, (arr_11 [i_1] [i_2] [i_0] [i_0])));
                    }
                }
            }
        }
    }
    var_24 = var_4;
    #pragma endscop
}
