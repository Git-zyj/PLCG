/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_0));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_11 += (arr_1 [i_0]);
        var_12 = (13347592308753948900 || 13347592308753948900);
        var_13 ^= var_8;
    }
    var_14 = ((!(var_9 < var_2)));
    var_15 = (((max((max(var_5, var_0)), (13347592308753948900 / var_5))) / 5099151764955602716));
    #pragma endscop
}
