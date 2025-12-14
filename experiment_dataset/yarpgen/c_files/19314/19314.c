/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = (4089917032 || 18446744073709551606);
                    var_11 += (((((-(arr_6 [i_1 + 1] [i_1 + 1])))) > 18446744073709551614));
                    var_12 = (((((((var_6 ? var_5 : var_8))) ? (max((arr_5 [i_2] [i_1 - 1]), var_10)) : var_3)) > (((-(arr_2 [i_2] [i_2] [12]))))));
                }
            }
        }
    }
    var_13 = (var_6 > -18446744073709551606);
    var_14 = var_3;
    var_15 = var_3;
    var_16 = var_6;
    #pragma endscop
}
