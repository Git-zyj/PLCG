/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_20 = (min(var_20, (((var_8 ? (max(((min(1543891811, 34))), (min((arr_1 [i_0]), (arr_1 [8]))))) : (--3670016))))));
        arr_4 [i_0 + 1] = (max((arr_3 [i_0]), ((((arr_1 [i_0]) && (arr_1 [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (~734454892385419788);
        var_21 = ((((((max((arr_6 [i_1]), (arr_7 [i_1 - 1] [i_1])))) ? var_16 : (max(var_13, (arr_6 [i_1]))))) / (arr_7 [i_1] [4])));
    }
    var_22 = var_6;
    var_23 = (((((max(-1, var_19)))) && var_17));
    #pragma endscop
}
