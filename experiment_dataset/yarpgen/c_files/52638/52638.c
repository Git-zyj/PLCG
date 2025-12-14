/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] = 1057296976182223524;
        var_16 = min(var_10, -7771578381110379692);
        var_17 = ((-((~((~(arr_0 [i_0 - 1] [i_0 - 1])))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((((((arr_3 [i_1 + 1]) | (min(2059450763, 17872112039752458671))))) ? (~-2024928411448857370) : (((((arr_3 [i_1 - 1]) || (arr_1 [i_1 + 1])))))));
        arr_6 [i_1] [i_1] = ((((((arr_0 [i_1] [i_1]) && (((-(arr_3 [i_1]))))))) | (var_14 != 25524)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_18 &= ((((((arr_12 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_3] [i_3]) ? var_1 : var_8))) ? var_8 : (((arr_12 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1]) ? (arr_12 [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_2]) : (arr_12 [i_1] [i_1 + 1] [i_1 - 1] [i_3] [i_3])))));
                        var_19 = (max(var_19, (var_14 + var_2)));
                        arr_14 [i_4] [i_4] &= (arr_10 [i_1 + 1] [i_4] [i_1 + 1]);
                        var_20 = 7177585457104565369;
                        arr_15 [i_1] [i_3] [i_2] [i_1] = ((((!(arr_9 [i_1] [i_2] [i_1]))) && (arr_9 [i_1] [i_1 + 1] [i_1])));
                    }
                }
            }
        }
    }
    var_21 = (((((~(~var_3)))) || var_13));
    var_22 = (max(var_3, ((~(-7771578381110379718 >= 139)))));
    #pragma endscop
}
