/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_1 [14]) ? ((8191 ? 65535 : 120)) : (arr_0 [i_0 - 1]))))));
        var_18 = (255 + 908);
        var_19 = (i_0 % 2 == 0) ? ((((arr_2 [i_0] [i_0]) << (((arr_2 [i_0] [i_0]) - 62045))))) : ((((arr_2 [i_0] [i_0]) << (((((((arr_2 [i_0] [i_0]) - 62045)) + 17780)) - 25)))));
    }
    var_20 = ((var_16 % (~-871469678)));
    var_21 = ((((max(var_4, var_3))) < (min(((var_5 >> (var_11 - 1121454222))), var_6))));
    #pragma endscop
}
