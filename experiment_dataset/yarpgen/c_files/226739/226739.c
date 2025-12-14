/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = var_3;
                    var_18 ^= ((((min((((arr_3 [i_2]) ? 201 : var_8)), (43808 / 24622)))) ? ((var_10 ? (!254) : (40216 | var_5))) : var_3));
                    var_19 = (((((-15894 ? var_15 : ((56180 ? 59465 : 47))))) ? ((~((min(var_14, (arr_3 [i_0])))))) : (((arr_0 [i_0] [i_2]) ? ((max((arr_0 [i_0] [i_1]), 114))) : ((31523 ? var_15 : 34013))))));
                }
            }
        }
    }
    var_20 += (min(var_16, (~232)));
    var_21 &= ((var_10 ? (max(((var_14 ? 145 : var_5)), ((min(var_4, var_15))))) : (((10903 && var_7) ? ((var_5 ? var_8 : var_13)) : var_15))));
    #pragma endscop
}
