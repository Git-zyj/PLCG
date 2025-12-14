/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((((((((((arr_0 [i_0] [i_1]) + var_10))) + var_3))) ? ((((((min(var_6, var_14)))) != (arr_4 [i_0] [i_1 + 3] [i_1])))) : var_16)))));
                arr_7 [i_0] = (arr_0 [i_0] [i_0]);
            }
        }
    }
    var_19 = var_10;
    var_20 = (max((((((min(var_13, var_14))) >> (!var_2)))), ((((((var_8 ? var_1 : var_0)) + 9223372036854775807)) << (((((~var_7) + 7726075743077941282)) - 39))))));
    var_21 = var_2;
    #pragma endscop
}
