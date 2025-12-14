/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (((((~(!var_6)))) ? (((((max(var_1, var_12))) && var_2))) : (var_10 % var_9)));
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = ((~((~(~var_16)))));
                    arr_9 [i_2] [i_1] [i_1 + 1] [i_2] = (((((arr_2 [i_2 + 1]) << (var_3 - 2648714066717037526))) % (~var_17)));
                    arr_10 [i_2] [i_2] = ((~(min((arr_0 [i_1]), (min((arr_0 [i_0]), var_13))))));
                }
            }
        }
    }
    var_21 = ((0 ? ((var_12 ? var_17 : var_13)) : (!var_17)));
    #pragma endscop
}
