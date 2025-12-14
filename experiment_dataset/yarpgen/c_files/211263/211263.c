/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((max((var_16 && var_5), ((3482973600638997721 ? 0 : -6943867587926904702)))) & ((max(var_2, var_15)))));
                arr_7 [i_0] = (((max((min(var_10, var_0)), ((max(var_13, var_7))))) & (((15801 ? ((4 >> (3716970978 - 3716970971))) : 15)))));
                var_17 = (min(var_17, ((min(var_4, var_9)))));
            }
        }
    }
    var_18 = var_16;
    var_19 = (((((var_7 >> (var_15 - 81))) ? ((var_3 ? var_7 : var_9)) : var_7)));
    var_20 = (min(var_20, var_14));
    #pragma endscop
}
