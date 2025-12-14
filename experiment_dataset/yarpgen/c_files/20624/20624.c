/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20624
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = arr_0 [i_1];
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [1] [i_0] [1] = (arr_2 [i_2 - 1] [i_2]);
                            var_16 = (min(var_16, 44522));
                        }
                    }
                }
            }
        }
    }
    var_17 |= (max(var_13, ((var_14 ? var_10 : ((20987 ? var_2 : var_10))))));
    #pragma endscop
}
