/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0 + 1] &= var_5;
        var_17 |= 3828402695;
        var_18 = 466564601;
    }
    var_19 = (((max(6285882440145372420, var_7))) ? 4846 : 5500229964109992771);
    var_20 |= ((((max(var_9, 12160861633564179195))) ? var_4 : var_7));
    #pragma endscop
}
