/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_11 -= ((((arr_2 [i_2] [i_1] [i_0]) ? var_4 : (arr_2 [i_1] [i_1] [i_2]))));
                    var_12 = (((arr_4 [i_0] [i_2]) * (arr_3 [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = var_3;
                                arr_11 [i_0] [i_0] [i_0] [i_3] [i_4] = (((((arr_10 [i_2] [i_2] [i_3 + 1] [i_2] [4] [i_3 + 2] [i_4]) + (arr_10 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 2] [i_3 - 2] [i_4]))) - (arr_10 [i_0] [i_3] [i_3 - 1] [0] [i_3] [i_3 - 2] [i_4])));
                                arr_12 [7] &= (~-2034432887);
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [i_0] = (max((arr_3 [i_0]), (arr_5 [i_0] [i_1] [i_2] [i_2])));
                }
                arr_14 [10] [i_1] = 47104;
                arr_15 [i_0] = (var_1 & ((18446744073709551615 ? 4294967284 : 18446744073709551615)));
            }
        }
    }
    var_14 ^= var_4;
    var_15 = var_0;
    var_16 = (min(var_16, var_7));
    #pragma endscop
}
