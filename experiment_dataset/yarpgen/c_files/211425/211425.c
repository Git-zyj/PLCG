/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 = (min(var_11, var_1));
                            var_12 *= (((arr_7 [i_0] [i_1] [i_2] [i_3]) ? ((117 ? 111 : -9)) : 0));
                        }
                    }
                }
                var_13 = (-60 + 127);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_14 = ((-60 ? 59 : 9));
                arr_15 [5] [i_5] [i_5] = (((!54) ^ (arr_13 [7] [0] [0])));
                var_15 *= var_4;
            }
        }
    }
    #pragma endscop
}
