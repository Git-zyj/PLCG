/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += var_15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_19 = ((((((-20247 + 2147483647) << (490369701 - 490369701)))) ? (((-(max(-446825229, 32754))))) : (((arr_0 [i_0] [i_1 - 1]) ? (arr_0 [i_1 - 1] [i_1 - 1]) : 2147483644))));
                                var_20 = 837308244;
                                arr_14 [i_0] [13] [i_0] [i_3 + 1] [18] = (arr_0 [i_2] [i_2]);
                            }
                        }
                    }
                }
                var_21 = var_11;
            }
        }
    }
    var_22 |= var_14;
    var_23 = -13126196664651807614;
    var_24 = 1536;
    #pragma endscop
}
