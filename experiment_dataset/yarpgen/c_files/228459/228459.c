/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -1075266642;
    var_12 *= (((0 ? 18446744073709551590 : 129)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = (((var_5 & 1) ? var_6 : 0));
        var_14 -= (min(((((0 ^ (arr_0 [i_0 - 1]))))), ((max(var_0, 131)))));
    }
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_15 = (((25 == -var_9) && var_8));
                    var_16 = (-14427 && 124);
                }
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
