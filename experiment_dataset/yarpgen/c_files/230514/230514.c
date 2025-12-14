/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((max((((-4913505409425504056 ? 53 : ((29 ? var_12 : var_3))))), (min(4913505409425504069, var_7)))))));
    var_14 = (min(var_14, var_2));
    var_15 &= ((+(max((~var_4), ((112 ? var_1 : var_7))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [2] = 0;
        arr_5 [i_0] [i_0] = (((5457932563952000651 >= 65518) || (arr_3 [i_0] [i_0])));
    }
    #pragma endscop
}
