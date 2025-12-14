/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(var_17 <= var_14)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_21 = ((!((max((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_3)), var_9)))));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_22 += ((-1861868449 ? 4794 : 4808));
            var_23 |= (~12);
            arr_4 [i_1] [i_0] = ((((var_14 ? 60741 : -10283))));
        }
        var_24 = ((((min((arr_3 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0 - 1] [i_0 - 1]) : ((+(((arr_3 [i_0] [i_0]) ? 2839940646 : var_4))))));
    }
    #pragma endscop
}
