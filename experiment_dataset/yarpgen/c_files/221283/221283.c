/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_12 *= ((!((((((7387 ? 1152921504606846848 : 101))) ? (arr_0 [i_0]) : ((-64 ? 478131839 : var_6)))))));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_2] = -var_0;
                    var_13 = (max(var_13, ((((arr_7 [i_1] [i_1] [i_1] [i_0]) ? (arr_7 [i_1 + 1] [i_1 - 1] [i_2] [i_0 - 1]) : (arr_6 [i_0 + 2] [i_1 - 1] [i_0 + 2]))))));
                }
            }
        }
    }
    var_14 = (max((((!102) ? 1366667244 : var_7)), ((var_3 ? ((var_10 ? 1152921504606846848 : 1366667267)) : (~var_1)))));
    var_15 = var_9;
    #pragma endscop
}
