/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_13 = (max((!24), var_1));
        arr_4 [i_0] [i_0] = ((!(((arr_1 [i_0 + 2]) || (arr_1 [i_0 - 1])))));
        arr_5 [i_0] [i_0 + 1] = ((((((max(var_1, var_1))))) || var_3));
        var_14 = 1;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = var_0;
        arr_9 [i_1] = var_2;
        var_15 = ((6632689771177811378 ^ (arr_2 [i_1 + 1] [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_12 [i_2] = (arr_11 [i_2]);
        var_16 = ((((1 ? (arr_2 [i_2] [i_2]) : (arr_2 [i_2] [i_2]))) - ((min((arr_2 [17] [i_2]), (arr_2 [i_2] [i_2]))))));
    }
    var_17 = (((((1 ? (((var_2 ? var_10 : 1))) : ((var_4 ? 8956758147473970334 : 1))))) ? ((((max(var_0, var_11))))) : 16369998158339283933));
    #pragma endscop
}
