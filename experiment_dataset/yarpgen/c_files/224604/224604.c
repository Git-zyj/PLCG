/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_18 ^= ((!(arr_1 [i_0])));
        var_19 = (max(var_19, (((!(arr_1 [i_0]))))));
        var_20 += 65535;
    }
    var_21 -= var_14;
    var_22 *= ((max(((var_16 ? var_14 : var_5)), (8151522039318751673 <= var_13))));
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                {
                    var_23 -= (64 % (max(var_15, (arr_5 [i_3 + 1]))));
                    var_24 = (max(var_24, -102));
                }
            }
        }
    }
    #pragma endscop
}
