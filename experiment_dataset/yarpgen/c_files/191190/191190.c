/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((var_10 >= var_2), var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [9]);
        var_19 = (max(var_19, (((((-(((arr_0 [i_0]) ? 28 : 253)))) / 1298119027)))));
        var_20 = (arr_0 [i_0]);
        var_21 = ((((((var_8 != 28) ? (min((arr_1 [14] [i_0]), 2535307672)) : (((228 ? (arr_1 [i_0] [i_0]) : -31589)))))) < (min((((132 ? 28 : (arr_0 [i_0])))), 4194176))));
    }
    var_22 = (14293353368881516590 > var_14);
    #pragma endscop
}
