/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_9 ? var_10 : var_9))) ? (min(var_5, 32765)) : (32736 <= 32728)))) ? ((-32745 * (((var_6 >= (-9223372036854775807 - 1)))))) : var_3));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((max(2130706432, 1)));
        var_20 = ((~(((((1 - (arr_1 [i_0])))) ? ((32414 ? -32738 : 7138833008867821298)) : 5988492038440845221))));
        arr_4 [i_0] [i_0] |= ((((~5988492038440845220) ? ((var_13 ? var_2 : (arr_1 [i_0]))) : (((1 ? 244 : 0))))));
    }
    #pragma endscop
}
