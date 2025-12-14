/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238976
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 184;
    var_16 = (max((((2257941401547294646 | 2257941401547294646) ? var_12 : (((var_13 ? var_14 : var_2))))), ((((((-135900509 ? 7828118278556788568 : 2257941401547294646))) ? ((var_14 ? var_14 : -20)) : var_8)))));

    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_17 = (~var_0);
        var_18 *= (((((~((var_0 ? 15816383424757199154 : var_4))))) ? (max((arr_1 [i_0] [i_0]), (!var_6))) : (~-7828118278556788568)));
        arr_2 [i_0] = (min(var_2, (arr_0 [i_0] [i_0 + 2])));
        var_19 = ((((((arr_0 [i_0] [i_0]) || (((var_8 ? (arr_1 [i_0 - 1] [3]) : 7828118278556788568)))))) >= ((~((min((arr_0 [i_0] [i_0]), var_4)))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, var_10));
        var_21 = ((var_4 || ((((min(-14129, 0))) && 24))));
    }
    #pragma endscop
}
