/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_19 *= (((((var_13 | (min(var_10, var_17))))) ? ((((!var_5) && (arr_0 [i_0 + 2])))) : 0));
        var_20 = max((4066471951082941005 + -1265322402), 54157);
        var_21 = (max(var_21, ((max((((-((min(var_15, 751)))))), ((var_5 >> (var_0 - 50033))))))));
        var_22 ^= ((((((arr_3 [i_0 - 1] [i_0 - 1]) != 2147483642))) + (3815 >= var_15)));
        arr_4 [i_0] = 1265322401;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                var_23 = ((var_4 ? -1265322402 : (min(-1, -1265322402))));
                var_24 = ((102 ? 15419 : 52));
                var_25 *= (arr_7 [i_1]);
                var_26 = (((arr_6 [i_2]) ? var_0 : (arr_6 [i_2])));
            }
        }
    }
    var_27 -= var_0;
    var_28 = (max(var_28, var_13));
    #pragma endscop
}
