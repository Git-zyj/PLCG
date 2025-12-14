/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [6] = (--563720171);
        arr_5 [5] [i_0] = 371625812;
    }
    var_20 += var_0;
    #pragma endscop
}
