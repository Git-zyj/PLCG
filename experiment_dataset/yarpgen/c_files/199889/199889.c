/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_4, var_6))) ? (!1) : (((((var_7 ? var_1 : var_2)))))));
    var_21 = 2989522913;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (min(var_22, 2989522910));
                var_23 *= (((var_2 >> (((-30 + 2147483647) >> (((arr_1 [i_0]) - 5321640152041069480)))))));
            }
        }
    }
    var_24 = ((!(-var_8 + -1305444396)));
    var_25 = ((var_10 ? 43 : ((var_2 ? (1 - -23) : (var_1 + var_16)))));
    #pragma endscop
}
