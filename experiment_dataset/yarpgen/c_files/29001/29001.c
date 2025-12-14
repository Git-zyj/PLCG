/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (max(((min(1339, (min(22360, 1326))))), (((min(2623325576, -1340)) & (~-1350)))));
        var_19 = (min(-1340, ((~(arr_1 [i_0])))));
        var_20 = ((14672 ? 1 : 1));
        arr_2 [i_0] [i_0] = 3546005125359800389;
    }
    var_21 = (((-127 ? -1338 : -var_17)));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_22 = (arr_0 [i_1] [i_1]);
        var_23 = (min(((((min(19533, (arr_3 [i_1]))) < (arr_4 [i_1])))), -5284));
    }
    var_24 = (((min(var_1, ((1 ? var_16 : var_11))))) ? (!var_2) : (2 == var_6));
    #pragma endscop
}
