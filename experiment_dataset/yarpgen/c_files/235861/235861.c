/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;
    var_18 = (max(var_13, var_14));
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_20 *= var_12;
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_21 += var_6;
                        var_22 = 63719;
                        var_23 = (max(-56, 83));
                        arr_11 [i_0] [i_1] [i_2] = ((min(var_8, var_3)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
