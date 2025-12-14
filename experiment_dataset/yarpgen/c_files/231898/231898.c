/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_16 || (((879166787 ? var_6 : var_4)))))) == (max(var_3, ((34359738367 ? var_8 : -96))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_20 *= (((max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))) >= ((((arr_1 [i_0]) || 1)))));
        var_21 = (min(((max(((max(1, 25887))), (((-127 - 1) / var_13))))), (min(-1, var_15))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_22 = (max(var_22, (arr_3 [i_1 - 1] [i_1 - 1])));
                    var_23 &= -1135237665;
                    var_24 = (1 != 1120490228);
                }
            }
        }
        var_25 = (min(var_25, ((min(10, 268435456)))));
    }
    var_26 = ((!((max(var_3, (var_5 != 249))))));
    var_27 = var_14;
    #pragma endscop
}
