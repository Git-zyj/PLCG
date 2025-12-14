/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_0, ((((var_13 ? 1 : 13325)) - -23))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] = -22;
                    var_16 &= (arr_0 [i_1]);
                    var_17 = 244;
                }
            }
        }
        var_18 *= (min(var_14, ((((min(1, var_10))) ? var_2 : ((-30713 ? 18446744073709551610 : var_3))))));
        var_19 = (((arr_5 [i_0] [i_0 + 1] [i_0]) ^ (((arr_5 [7] [i_0 - 1] [i_0]) ? (arr_5 [i_0] [i_0 + 1] [i_0]) : var_4))));
    }
    var_20 = 159;
    var_21 = ((((((max(var_12, var_9))) <= var_3)) ? ((16252928 ? (((min(var_11, var_11)))) : var_5)) : var_2));
    #pragma endscop
}
