/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_18 ^= ((-2109 ^ ((max((max(1, (arr_1 [12] [12]))), ((max(1, 1))))))));
        var_19 |= 3358;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((var_2 < (!1)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, 1));
                    var_21 ^= -3359;
                }
            }
        }
    }
    var_22 = (min(var_13, (((1 >> 1) ? var_6 : -3383))));
    #pragma endscop
}
