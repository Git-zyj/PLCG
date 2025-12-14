/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0 - 3] &= ((((((arr_0 [i_0 + 2]) * (arr_0 [i_0 - 1])))) ? ((max((((arr_1 [i_0]) ? (arr_0 [i_0]) : 1)), (arr_1 [i_0 + 1])))) : ((((min(0, var_6))) ? 0 : (min(2164690927107286806, 16282053146602264809))))));
        var_18 = (max(var_18, (-94 % 53822)));
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {
        var_19 = (!11714);
        arr_5 [12] [i_1] |= (arr_0 [i_1]);
        var_20 = (max(var_20, (((~(((var_3 || 8764965555312746113) / ((35565 ? (arr_1 [i_1]) : (arr_1 [i_1]))))))))));
        arr_6 [i_1] = ((-2147483647 - 1) & ((min(511, 0))));
        arr_7 [8] &= var_14;
    }
    var_21 = ((((!var_7) ? -var_6 : ((min(26405, var_13))))));
    #pragma endscop
}
