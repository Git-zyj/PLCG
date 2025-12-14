/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((var_5 % var_10) <= (((((min(var_3, var_16))) ? -558373379 : var_11)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 *= (((24 ^ var_16) > var_17));
                var_21 = (4483682896235740716 > -7505869375616286668);
            }
        }
    }
    var_22 = (((((9263 * var_16) << var_3))) || var_3);
    var_23 = var_7;
    #pragma endscop
}
