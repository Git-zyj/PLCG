/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((((((49152 ? 1 : var_2)) <= (max(-118, 4294967286)))) ? ((max(var_1, ((var_4 ? 9 : 0))))) : -6136354415109307530));
    var_18 = ((var_2 | (((var_2 && (-3295135227455952154 || var_1))))));
    var_19 = ((var_0 / (((var_14 ^ var_16) ? var_4 : var_13))));
    var_20 = (max((((var_10 ? var_1 : (max(var_15, var_13))))), ((var_9 ? 0 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (((min(((6520791238759704050 << (((-1 + 52) - 51)))), ((max((arr_1 [i_0]), (arr_1 [i_1])))))) * (((((((arr_2 [i_1 - 1] [i_0]) ? (arr_1 [i_0]) : var_1)) <= (min((arr_0 [i_0]), 1304098316))))))));
                arr_6 [i_0] [2] = ((!(((min(3, var_16))))));
            }
        }
    }
    #pragma endscop
}
