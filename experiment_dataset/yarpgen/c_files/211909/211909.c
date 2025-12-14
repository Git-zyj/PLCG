/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((var_4 && var_3) || (var_2 && var_0))) ? var_3 : ((((((var_1 ? var_1 : var_7))) && (var_4 && var_2))))));
    var_12 = (max(var_12, var_7));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = ((192 ? -32411 : -1616579982));
                var_14 = (max(var_14, ((((min(((255 ? (-9223372036854775807 - 1) : 27)), (((var_1 << (var_2 - 206))))))) && ((!(arr_2 [i_1])))))));
            }
        }
    }
    var_15 = (((var_7 ? -29 : (min(262143, 18446744073709551610)))));
    var_16 = var_4;
    #pragma endscop
}
