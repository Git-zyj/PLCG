/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((var_10 ? var_3 : var_2))) ? 0 : var_10));
    var_12 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 = arr_2 [i_2 - 1] [i_0];
                                var_14 *= (((1 < -4340179424988666251) < (arr_6 [i_2] [i_2] [i_0])));
                                var_15 = (max((((arr_6 [i_0] [20] [i_3]) - (arr_10 [i_0] [i_0] [0] [i_0] [11]))), (arr_9 [i_0 - 2])));
                            }
                        }
                    }
                    var_16 &= 0;
                    var_17 = (arr_2 [i_2 + 2] [16]);
                }
            }
        }
    }
    var_18 |= (min((((var_5 || (!-6049)))), (((~4294967281) ? var_6 : (-2027 ^ 6462)))));
    #pragma endscop
}
