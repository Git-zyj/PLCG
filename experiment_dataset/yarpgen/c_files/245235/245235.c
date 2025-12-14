/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = ((-2 ? (4294967293 & 24) : -332174506));
        var_10 = (65528 * 10);
    }
    var_11 = (((((max((var_2 && -1333736003439214043), (1091890728 < 474351334))))) ^ 1333736003439214037));
    var_12 = var_2;
    var_13 = (((var_8 ? ((var_9 ? var_1 : 306224068)) : (var_3 > var_9))));
    #pragma endscop
}
