/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_0] [i_1] = (((((1 % ((var_13 << (var_2 - 21197)))))) ? (((!(((var_10 ? var_2 : 127)))))) : var_0));
                arr_5 [i_1] = (~var_18);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = var_18;
                            var_21 = (~32763);
                        }
                    }
                }
                var_22 = var_11;
            }
        }
    }
    var_23 = 32763;
    #pragma endscop
}
