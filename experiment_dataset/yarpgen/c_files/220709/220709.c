/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220709
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_2, (min(-var_8, ((min(var_10, var_10)))))));
    var_13 = (min(var_13, 15360));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_14 = ((var_3 / var_3) ? 32767 : var_10);
                            arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (((((max((arr_5 [i_0]), var_3)))) != (min((arr_5 [i_1]), var_6))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] |= ((var_9 / (max(var_9, var_4))));
                var_15 *= var_9;
            }
        }
    }
    var_16 -= var_6;
    #pragma endscop
}
