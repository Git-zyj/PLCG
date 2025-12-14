/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 &= (((var_8 || var_15) > (!-2249771105918402115)));
        var_20 = (((-2249771105918402115 & (arr_2 [19] [i_0]))));
        arr_3 [i_0] = 4946587650951586400;
    }
    var_21 = var_14;
    #pragma endscop
}
