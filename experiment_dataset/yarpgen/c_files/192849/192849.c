/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 ^= ((((~(~var_0))) <= (~var_3)));
                    arr_7 [i_2] [i_2] = (min(((var_5 % (~var_6))), 16));
                    var_14 = (max(var_14, (((((~var_5) < var_2))))));
                }
            }
        }
    }
    var_15 = (max(var_15, (max(var_2, var_4))));
    var_16 = max(var_7, var_10);
    var_17 = ((~((var_2 ? (var_5 + var_5) : (max(var_0, var_4))))));
    #pragma endscop
}
