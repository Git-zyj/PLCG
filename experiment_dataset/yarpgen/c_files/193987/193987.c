/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_18 -= (((((arr_3 [21] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) & (((((var_8 & var_0) < ((var_5 ? var_12 : 130048))))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [i_2] [i_3 + 2] = (((((((1 ? -64 : 1))) ^ var_2)) & (((((arr_6 [8] [i_1] [i_0]) ? var_16 : var_14)) & ((~(arr_4 [i_2])))))));
                        var_19 = (max(var_19, var_4));
                    }
                }
            }
        }
        arr_11 [i_0] = (((((var_3 ? ((min(1, -119))) : 1))) ? 4414171220239271760 : (((min(0, 1))))));
        var_20 *= (min(var_13, (min(var_16, var_5))));
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        arr_14 [i_4] [i_4] = (min(((((var_13 * (arr_5 [i_4]))) / (arr_7 [i_4] [i_4] [i_4]))), ((((((arr_7 [i_4] [i_4] [i_4]) * var_8))) ? (arr_0 [i_4]) : (min(var_9, (arr_4 [i_4])))))));
        arr_15 [i_4] [i_4] = min(((min((arr_2 [i_4]), var_3))), (min((((~(arr_6 [i_4] [i_4] [i_4])))), (min(var_1, var_16)))));
        arr_16 [i_4] = 3255932090;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_21 = ((var_0 ? -127 : ((~(arr_18 [i_5] [i_5])))));
        var_22 -= (!((min(((min(var_1, var_7))), (min(1, var_0))))));
    }
    var_23 = (((((!(-4 < var_12))))) % (~6654553017199293304));
    var_24 = var_3;
    #pragma endscop
}
