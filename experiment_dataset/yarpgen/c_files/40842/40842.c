/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_18 = (((var_9 ? var_10 : var_11)));
                                arr_16 [i_0] [i_1] [17] [i_3] [i_4] [i_0] = (((((~(min(1073741824, var_14))))) ? -3 : 0));
                            }
                        }
                    }
                    arr_17 [i_0] [i_0] [i_2] [i_2] = 21;
                }
            }
        }
    }
    var_19 = var_13;
    var_20 = (max(10, 58090));
    #pragma endscop
}
