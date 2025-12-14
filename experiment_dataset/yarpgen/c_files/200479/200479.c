/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((92 * (((var_7 ^ var_7) & (~var_7)))));
    var_13 = (((((~var_0) ^ ((var_0 ? 0 : var_6)))) & var_7));
    var_14 = ((~(min(((var_11 ? -2527807681030464806 : var_0)), var_5))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (min((!var_7), ((var_3 ? -54 : var_9))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] = ((var_7 ? var_1 : 2527807681030464805));
                                var_15 -= ((((((((var_11 ? var_8 : var_11))) ? var_9 : (var_4 & 2527807681030464796)))) ? (((var_11 ^ var_0) ? ((var_5 ? var_1 : 3744501135)) : var_5)) : (((var_8 & ((var_11 ? var_10 : var_7)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 -= var_1;
    #pragma endscop
}
