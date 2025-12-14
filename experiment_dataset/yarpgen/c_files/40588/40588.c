/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((~(((2706 | 763) ? (~58601) : 39159))));
        var_12 = (((!var_3) == ((42769 | ((max((arr_0 [19]), 34108)))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            var_13 = (((arr_1 [i_0]) ? 27568 : ((~(arr_3 [i_0] [i_1])))));
            var_14 = (((arr_3 [i_0] [i_0]) || 12));
            var_15 = ((52056 ? 2 : (arr_0 [i_0])));
            var_16 = (arr_3 [i_0] [i_0]);
            var_17 = ((var_7 ? 60629 : (((arr_3 [i_0] [i_1]) * 37967))));
        }
        var_18 = -33207;
    }
    var_19 = max(var_3, var_9);
    var_20 = (var_3 | var_5);
    #pragma endscop
}
