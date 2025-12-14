/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((!-1871910712) ? ((54559068813920916 ? -1871910712 : 0)) : (15360 >= -33)))) && ((min(((var_0 ? -1871910712 : 54559068813920916)), ((var_1 ? var_7 : var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_15 = (min(var_15, ((min(((((arr_1 [i_0 - 1]) ? ((((arr_0 [i_0 - 1]) && var_7))) : (((arr_1 [i_0]) | var_5))))), ((((((arr_1 [i_0]) % var_0))) ? ((1 ? (arr_0 [i_0]) : var_10)) : ((((arr_2 [i_0]) ? (arr_2 [i_0]) : var_1))))))))));
                var_16 = (max((max(var_9, -1871910712)), (~var_8)));
            }
        }
    }
    var_17 -= ((!(((min(var_3, var_11)) < (~var_2)))));
    #pragma endscop
}
