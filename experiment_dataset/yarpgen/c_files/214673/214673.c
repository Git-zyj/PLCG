/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -17614;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((9223372036854775807 << (2 - 2)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = (max(4294967284, (7011315101089925784 || 32763)));
                            var_14 = ((7011315101089925784 ? 12 : 42609));
                            arr_13 [i_0] [i_1] [i_0] [7] [3] [3] = (7365 ? -12 : (max(635242818, var_7)));
                            var_15 = (min(var_15, ((((-127 - 1) ? 115 : (arr_6 [i_3] [i_1] [0]))))));
                        }
                    }
                }
                var_16 = (max(var_16, ((((arr_6 [i_0] [2] [i_1]) ? var_9 : -12632)))));
                arr_14 [i_0] = ((~(((arr_0 [i_0] [i_1]) << (((arr_0 [1] [i_1]) - 22717))))));
            }
        }
    }
    #pragma endscop
}
