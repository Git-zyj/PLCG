/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((~-1360967705) % var_15));
    var_19 = ((((((min(var_5, var_17))) ? (65532 - var_0) : (var_17 != var_16))) << (((var_8 + 5517617773161516195) - 18))));
    var_20 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_21 = ((((arr_1 [i_0 - 2]) ? (((min(var_13, var_6)))) : ((-57 ? var_0 : var_15)))));
                var_22 &= (4966 ^ 13315);
            }
        }
    }
    #pragma endscop
}
