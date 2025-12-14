/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_7;
    var_11 = ((var_5 << (((min(((var_6 ? 9102897463596530120 : var_7)), ((max(var_3, 3138745639))))) - 3138745639))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_12 = (+(((arr_3 [i_0]) / (min(24576, var_5)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = var_0;
                                var_14 &= ((var_9 ? var_1 : 9102897463596530120));
                                var_15 = (arr_8 [i_1] [i_2] [i_3] [1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
