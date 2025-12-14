/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241594
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_4 ? (((var_16 * var_12) * (287948901175001088 / -1179540538))) : ((max((var_7 * var_12), (var_9 * var_6))))));
    var_18 = (max(var_8, ((max(var_2, (max(var_10, var_9)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] |= (((min((arr_1 [i_0]), (arr_1 [i_1]))) / (arr_1 [i_1])));
                arr_5 [i_0] [i_0] = ((((((min(var_14, (arr_3 [i_0] [i_0]))))) <= ((~(arr_0 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 13;i_4 += 1)
                            {
                                var_19 = ((((((arr_12 [i_0]) & (arr_6 [i_0])))) ^ (~1044921924491017209)));
                                var_20 = (((((arr_10 [i_1] [i_1] [i_1] [i_1]) + 2147483647)) >> (((arr_10 [i_1] [i_1] [i_3] [i_3]) + 30746))));
                            }
                            arr_13 [i_0] [i_3] = ((~((-(arr_3 [i_0] [i_1])))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
                var_21 += (min((arr_3 [i_0] [i_1]), ((var_5 ^ (arr_12 [i_1])))));
                var_22 ^= (((-2660016610183399167 & 177) ? (arr_0 [i_0] [i_1]) : (((((arr_8 [i_1] [i_0] [i_0] [i_0]) & (arr_0 [i_1] [i_1])))))));
            }
        }
    }
    #pragma endscop
}
