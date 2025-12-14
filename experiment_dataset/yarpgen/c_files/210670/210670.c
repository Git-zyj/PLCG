/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210670
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 2; i_4 < 21;i_4 += 1)
                            {
                                var_20 = (((arr_10 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_3 + 1] [4] [16]) > (arr_10 [i_0] [i_0] [i_0 + 1] [i_1 - 1] [i_3 - 2] [i_4] [i_4])));
                                var_21 = (arr_3 [2]);
                                arr_12 [i_4] [i_0] [i_0] [1] = (((var_9 ? (arr_5 [i_0] [i_1 - 1] [i_2]) : 4227858432)));
                            }
                            for (int i_5 = 0; i_5 < 22;i_5 += 1)
                            {
                                var_22 |= ((((((arr_7 [0] [1] [i_0] [8] [i_5] [i_3 - 1]) % (arr_10 [i_5] [i_1 + 1] [i_2] [i_1 - 1] [4] [i_3 + 1] [i_5])))) ? ((((((-127 + (arr_11 [i_0 - 1] [i_1])))) ? (((var_8 <= (arr_5 [11] [i_2] [i_0])))) : (((((arr_2 [i_2] [i_3]) + 2147483647)) >> (((arr_5 [i_0] [i_1] [i_2]) - 83))))))) : ((((arr_5 [i_0] [i_1] [i_3]) / var_10)))));
                                var_23 ^= ((((~(arr_8 [i_5] [i_3 - 1]))) >= var_6));
                            }
                            for (int i_6 = 0; i_6 < 22;i_6 += 1)
                            {
                                arr_18 [i_0] [i_1] [i_0] = (arr_9 [i_2]);
                                var_24 = (((((~(!127)))) ? ((((var_17 && (arr_5 [i_0 + 1] [i_0] [i_0 - 1]))))) : ((((((arr_1 [i_0] [i_0]) ? (arr_7 [8] [17] [i_1] [i_3] [i_6] [i_1 - 1]) : (arr_5 [i_0 + 1] [i_2] [i_3])))) ? var_11 : 121))));
                                var_25 = -14431;
                            }
                            arr_19 [6] [i_2] [20] [20] [i_1 + 1] [i_0] &= ((((min(192, -108))) - (arr_17 [i_0] [i_0] [3] [i_2] [i_3])));
                            var_26 = (min((max((arr_13 [i_0] [i_0] [i_1] [i_2] [i_3 - 2]), (max(126, var_14)))), ((((max(34194, var_12))) ? -7 : ((var_9 ? var_9 : var_8))))));
                            var_27 = (arr_14 [i_3 - 2] [21] [i_2] [i_3] [i_0]);
                        }
                    }
                }
                arr_20 [i_0] [i_0] = ((!(6573 % 66)));
            }
        }
    }
    var_28 |= ((var_3 ? (((var_12 * var_1) ? (((max(var_7, var_9)))) : 14128709801873744948)) : var_10));
    #pragma endscop
}
