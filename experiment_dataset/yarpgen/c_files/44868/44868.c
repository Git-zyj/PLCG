/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    var_17 = var_15;
    var_18 = ((((((((var_11 ? var_5 : 48))) ? (max(var_14, 255)) : ((38951 ? 60 : 48))))) ? (max(var_11, ((15472486167055929047 ? 26585 : 111)))) : var_6));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(var_19, ((min(((~(arr_0 [i_0] [i_0]))), (min(((max((arr_0 [1] [i_0]), -52))), var_14)))))));
        var_20 = var_10;
    }
    #pragma endscop
}
