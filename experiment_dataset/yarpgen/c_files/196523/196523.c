/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [1] [i_0] = (~var_12);
        arr_3 [i_0] [i_0] = 3;
        arr_4 [7] = ((((((((3 ? 1 : var_5))) ? -6 : var_6))) ? ((((min(8992085988533774047, (arr_0 [14]))) > 5))) : (((arr_0 [i_0]) ? (arr_1 [i_0]) : ((((arr_1 [i_0]) == (arr_0 [i_0]))))))));
        var_16 = (min(var_16, (((8215363159346595682 ? 5 : 8992085988533774047)))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_17 = var_10;
        var_18 = (max(var_18, ((max(-15202, var_2)))));
        var_19 = (max(var_19, ((max((((12288 % 7248291169315675869) / (arr_6 [i_1 - 1]))), ((((((12288 ? 25 : 2787656496))) ? 32047 : (arr_6 [i_1 + 1])))))))));
    }
    var_20 = (min(var_20, var_8));
    #pragma endscop
}
