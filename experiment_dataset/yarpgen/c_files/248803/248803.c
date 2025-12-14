/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_12 = (((((-var_10 ? (var_6 < var_4) : var_10))) ? ((((var_1 && var_1) ? (!var_11) : (max(475007524, 3))))) : var_6));
                var_13 = (min(var_13, ((~(~var_11)))));
                arr_5 [i_0] [i_1 + 1] [0] = (((~var_8) ? (var_7 ^ var_6) : var_11));
            }
        }
    }
    var_14 = ((((-((var_6 ? var_7 : var_5)))) % ((var_4 ? ((min(26907, -3))) : var_5))));
    var_15 = var_9;
    #pragma endscop
}
