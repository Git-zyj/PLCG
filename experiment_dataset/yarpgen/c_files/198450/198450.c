/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(189, var_11));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = var_0;

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 = (((((((((-3643 ? var_7 : var_14)) + 9223372036854775807)) >> (var_4 - 2237032421)))) ? var_2 : var_5));
                        arr_10 [i_0] [i_0] = (max(-788318684, ((~((63 << (3871199435 - 3871199434)))))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_13 [i_4] [i_0] [i_0] [i_0] = var_11;
                        var_20 = var_7;
                        var_21 = (min(var_21, var_14));
                    }
                    var_22 = (max(var_22, var_2));
                }
            }
        }
    }
    var_23 = (max(((4294967295 ? var_7 : -var_11)), ((max(var_3, var_8)))));
    #pragma endscop
}
