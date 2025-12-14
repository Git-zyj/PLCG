/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    var_20 = -53109;
    var_21 *= (min(var_13, -1));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (((3720580231862280105 ? var_8 : 65535)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_9 [14] [15] [i_2] [i_1] [i_0] = (min(((((arr_0 [10]) ? var_6 : var_1))), ((min(((61490564 ? 1 : 53129)), (var_9 || -15))))));
                        var_23 ^= ((!((((arr_0 [i_2]) ? 32767 : -3720580231862280100)))));
                        var_24 = 3720580231862280119;
                        var_25 |= (arr_0 [i_1]);
                    }
                }
            }
        }
    }
    #pragma endscop
}
