/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((2675886455 * (-1407491578 - 1729382256910270464))) * ((max(var_10, 0))))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_16 *= 0;
        var_17 = (min(var_17, (((var_12 ? 22175 : (arr_0 [i_0 - 1]))))));
    }
    var_18 |= ((((min(1527092525, var_13))) ? var_6 : ((min((min(47, 22016)), (var_4 || 10593114782129341015))))));
    var_19 = 8184;
    var_20 |= ((((max(((max(57351, 22159))), var_9))) ? var_11 : -11977));
    #pragma endscop
}
