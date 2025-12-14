/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (1 + var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_15 = var_13;
                            arr_11 [i_0] [i_3] [i_2] [i_3] = var_8;
                            var_16 = (max(var_16, ((min(1, -1)))));
                        }
                    }
                }
                var_17 = (max(((~((-7 ? -3 : var_3)))), var_2));
            }
        }
    }
    var_18 = (((((var_7 % var_7) ? (!var_6) : var_2)) * var_7));
    var_19 = ((-7 ? var_4 : ((var_3 ? var_8 : var_13))));
    var_20 ^= -1;
    #pragma endscop
}
