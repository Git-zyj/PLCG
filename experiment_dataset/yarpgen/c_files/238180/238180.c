/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238180
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = (max((!1), (max(((max((-127 - 1), 40))), var_17))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            arr_5 [i_1] = (!-0);
            arr_6 [i_1] = (((((0 ? (arr_4 [i_1 + 1] [i_1 + 1]) : var_6))) ? (min((arr_4 [i_1 + 1] [i_1 + 1]), var_15)) : var_0));
            var_19 = max(-36637, 117);
            var_20 += var_6;
        }
    }
    var_21 = (min(var_10, 252));
    #pragma endscop
}
