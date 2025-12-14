/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((min(250, 250))) ? ((((var_9 >= (250 ^ 1))))) : (5 % 18446744073709551595)));
        var_19 = 1;
    }
    for (int i_1 = 1; i_1 < 8;i_1 += 1)
    {
        arr_8 [i_1] = (0 <= 5);
        var_20 -= (min(((11150077755017341459 ? (var_0 - var_18) : (((1 >> (11150077755017341459 - 11150077755017341455)))))), (((var_0 != (1349435096056698291 && 15028825447842741134))))));
    }
    var_21 = (min(var_14, ((((((11785974344200041419 ? var_9 : var_1))) && var_2)))));
    var_22 *= (((255 ^ 6660769729509510203) ? (((1 > (min(var_18, 3417918625866810477))))) : ((((var_16 * var_6) <= 83)))));
    var_23 = (max(var_23, ((((44750 ? 4610 : 44750))))));
    #pragma endscop
}
