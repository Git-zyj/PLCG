/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220302
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220302 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220302
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_16 ? ((0 ? (~6544) : 72)) : (((min(var_10, 57531)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_19 |= 0;

                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    var_20 = (max(var_20, (((((0 ? (var_10 > var_12) : 8)) + var_2)))));
                    var_21 = (max(var_21, (arr_1 [i_0] [i_2])));
                    arr_8 [i_2] = (min((min(var_8, (arr_7 [i_2] [i_0] [i_2] [i_0]))), var_10));
                }
                var_22 = var_9;
            }
        }
    }
    var_23 *= 1;
    #pragma endscop
}
