/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_0] = (((!1) > (((var_1 / var_9) * (2298133619248860480 / 21168)))));
                    var_18 = (~1245630689153424413);
                }
            }
        }
        var_19 = ((((((arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0]) ? (arr_6 [i_0 - 1]) : var_11))) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0]) : ((-(6421828638836481880 + var_14)))));
    }
    var_20 = ((var_0 ? (min((var_1 ^ 1), ((var_6 ? var_17 : var_5)))) : var_9));
    #pragma endscop
}
