/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~(min(20004, var_4))))) ? var_12 : ((max(((var_5 ? 1019443346 : var_1)), var_5))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((~(~var_4)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_16 = -45517;
                            var_17 = ((!((max(var_13, 1797184185376364263)))));
                            arr_11 [3] [3] [i_1] = var_9;
                            var_18 = (((((-(min(var_9, var_13))))) ? (min(var_7, ((var_1 ? (arr_4 [2]) : (arr_3 [i_1 - 2]))))) : (arr_3 [14])));
                        }
                    }
                }
            }
        }
    }
    var_19 *= (max((~9223372036854775807), -9223372036854775787));
    var_20 = var_1;
    #pragma endscop
}
