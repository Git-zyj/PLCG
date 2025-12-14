/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_3 || var_10);
    var_19 += 2238471591;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (arr_0 [i_0] [i_0]);
        var_20 = (max(var_20, (((var_1 & (~var_9))))));
    }
    var_21 = (var_14 * 14594);
    var_22 &= (max(((min(38182, (max(var_10, var_6))))), (((((27348 ? 38196 : -1940680235967498933))) ? var_2 : var_10))));
    #pragma endscop
}
