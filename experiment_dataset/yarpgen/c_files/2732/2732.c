/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_2 [i_0] [i_0])));
        var_18 = (min(3650962362, (min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))));
        var_19 = ((!((max(1554117731700830795, 16892626342008720828)))));

        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            var_20 = (arr_2 [12] [i_0]);
            var_21 = var_10;
            var_22 += (var_9 <= 80);
        }
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_23 = (((((max(var_7, var_6))) ? (max(var_7, var_13)) : var_12)) - (max((1554117731700830799 + -1031484301), (arr_2 [i_2] [i_2]))));
        arr_8 [i_2] = (max((((((var_14 ? var_5 : 16892626342008720806)) != 1031484308))), ((var_12 ? -var_3 : ((max(64688, 82)))))));
        var_24 = (var_7 != var_0);
    }
    var_25 = ((((min((~1031484320), var_10))) || (((var_2 != -23) != var_15))));
    #pragma endscop
}
