/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((max(((32 ? var_2 : var_0)), ((min(var_5, var_1))))) | ((max((18446744073709027328 >= 654912946), (min(1, var_14)))))));
    var_17 = (min(var_17, ((min((((((max(var_15, var_14))) && -5126497025652957438))), (((5075796689058734518 + var_2) ? (var_5 + -5126497025652957433) : (-5126497025652957433 + var_6))))))));
    var_18 += var_0;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 *= (max(((var_2 ? (var_1 && var_0) : var_1)), (((((var_9 ? 88 : var_0))) ? -87 : var_3))));
        var_20 = (max(var_7, ((var_7 ? (((max(var_5, var_15)))) : (min(var_8, 2276798166))))));
    }
    #pragma endscop
}
