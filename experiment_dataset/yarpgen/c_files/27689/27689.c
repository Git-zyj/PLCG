/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27689
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (2679868107 ? var_1 : 65518);
    var_16 = (max(var_5, var_3));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((arr_0 [i_0]) && (arr_0 [i_0])))));
        var_17 = (((((~(-6508 < -32760)))) > -12));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1 - 2] = arr_6 [i_1 + 1];
        var_18 = (arr_1 [i_1 - 2]);
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (arr_5 [i_2] [i_2]);
        var_19 = (((arr_3 [i_2 + 3]) ? (arr_3 [i_2 + 1]) : var_8));
        var_20 = 3;
        arr_11 [i_2] [i_2] = 1349056481509219484;
        arr_12 [i_2] = (((arr_0 [i_2 + 2]) - (arr_0 [i_2 + 3])));
    }
    #pragma endscop
}
