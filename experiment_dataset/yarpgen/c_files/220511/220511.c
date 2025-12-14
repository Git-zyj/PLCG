/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((min((19694 ^ 19701), var_9)))));
    var_20 = 23824;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_21 -= min(57741, 511);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 ^= arr_5 [i_1];

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_23 = (min(var_23, (max((min((arr_10 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1 - 1]), 23824)), (arr_7 [i_1 + 1] [i_1 + 2] [i_1 - 1])))));
                                var_24 += 8176;
                            }
                        }
                    }
                }
                var_25 = (max((~13068), (((((var_1 % (arr_8 [i_0] [23])))) ? ((max(45819, 32927))) : (!61418)))));
            }
        }
    }
    var_26 = (max(var_17, (~var_11)));
    #pragma endscop
}
