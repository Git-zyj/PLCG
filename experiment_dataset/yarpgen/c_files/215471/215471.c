/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (((-(((arr_0 [i_3]) ? var_8 : var_5)))));
                                var_20 = ((var_4 ? 0 : (((min(3423635795, -85))))));
                            }
                        }
                    }
                    var_21 = ((2287356700742705719 ? var_14 : 512));
                }
            }
        }
    }
    #pragma endscop
}
