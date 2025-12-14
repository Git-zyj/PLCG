/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((!((!(!var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_3] = -var_12;
                            arr_11 [i_1] = var_9;
                            var_20 = (max(var_20, var_4));
                            var_21 |= (~var_8);
                        }
                    }
                }
                var_22 = (!var_11);
                arr_12 [i_0] [i_0] [i_0] = (~var_2);
            }
        }
    }
    var_23 = (max(var_23, (!var_7)));

    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_24 = (min(var_24, (~var_12)));
        var_25 -= (~var_3);
    }
    #pragma endscop
}
