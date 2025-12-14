/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37509
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [15] [i_2] [i_1] [6] = 1910143594;
                                var_19 = ((60762 ? 2588387113730151802 : 49152));
                            }
                        }
                    }
                }
                var_20 *= ((!((((arr_5 [i_0] [0]) & (~var_11))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_23 [i_5] [i_1] [i_5] [i_6] = (arr_16 [i_0] [i_1] [i_5] [i_1]);
                            var_21 = ((-(((((arr_10 [i_6] [i_6] [i_6] [1] [i_6]) ? (arr_12 [i_0] [i_0] [i_0] [i_1] [i_5] [i_5] [i_0]) : (arr_20 [i_5] [i_5] [i_0] [7] [i_6] [i_6]))) << (((max(var_17, 26)) - 3337692857))))));
                            var_22 ^= (arr_17 [i_1] [i_1] [i_5] [i_1]);
                        }
                    }
                }
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
