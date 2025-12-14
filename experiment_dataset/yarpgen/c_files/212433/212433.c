/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212433
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((6 % (max(9400043546119551110, var_4))))) ? ((((min(9400043546119551110, 1555025075))) ? -1232632630 : ((var_5 ? var_3 : var_8)))) : var_5));
    var_20 = var_4;
    var_21 = ((min(var_18, (min(var_1, var_12)))));
    var_22 = ((-(-55 & 8645718790974348483)));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_23 = var_14;
                    var_24 = (min(var_5, (max((arr_9 [i_0] [i_0 - 1] [i_0 - 1]), var_12))));
                    var_25 = var_16;
                }
            }
        }
    }
    #pragma endscop
}
