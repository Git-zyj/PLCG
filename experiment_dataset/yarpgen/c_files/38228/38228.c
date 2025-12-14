/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = (max(var_13, 4294967294));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 += ((((min((max(128, var_3)), var_5))) && var_2));
        arr_4 [i_0] [i_0] = (max(((1327089191 ? (arr_3 [i_0]) : var_1)), var_8));
        var_15 = (max(((max(14730, 28273))), var_4));
        var_16 -= (arr_2 [i_0] [i_0]);
    }
    var_17 = -825239868;
    #pragma endscop
}
