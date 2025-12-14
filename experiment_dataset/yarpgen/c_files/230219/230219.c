/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = 193;
        arr_2 [i_0] = (1 * 115);
        var_12 = (-21635 > 50);
        var_13 = (25901 - 115);
        var_14 = (max(var_14, (32483 == 25901)));
    }
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            {
                var_16 = (max(var_16, (-1149540207 | 2147483647)));
                var_17 = 7108402739395310624;
            }
        }
    }
    #pragma endscop
}
