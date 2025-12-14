/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((((((0 ? 2300828696 : 26187))) ? 511 : ((var_15 ? 1 : var_5)))), var_12));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_21 = (max(((((arr_1 [i_0]) ? var_18 : (arr_1 [i_0])))), var_9));
        var_22 *= (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_23 = (arr_10 [i_0]);
                        arr_11 [i_0] [i_1] [i_1] [10] |= max((max((-956229896 / 65532), ((var_0 ? 8375732076063930041 : 380675740754765951)))), ((((min((arr_1 [i_0]), 18066068332954785641))) ? var_10 : (min(var_15, 35184363700224)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
