/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (!var_16);
    var_20 |= ((~(((var_3 + 31051) ? 65516 : var_5))));
    var_21 = var_11;
    var_22 = max(4111612867, -94);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [4] &= var_7;

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1] = var_4;
                        arr_13 [i_3] [i_1] [i_1] [11] = var_18;
                        arr_14 [i_0] [i_1] [i_2] [i_0] [i_2] [i_3] = 27;
                    }
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_18 [i_1] = ((max(3707403552, 31070)));
                        arr_19 [i_0] [i_1] [i_2] [15] = ((min(-29, 51822)));
                        arr_20 [i_1] = ((!(((3 ? 3 : 2607735231)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
