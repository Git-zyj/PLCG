/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (max(-var_8, var_8));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((-(min(((((arr_0 [i_0] [i_0]) <= var_15))), (((arr_0 [i_0] [i_0]) % (arr_0 [7] [7])))))));
        arr_4 [i_0] = ((1 ? (((var_2 <= 1) ? (arr_2 [i_0]) : (((arr_0 [i_0] [17]) ? var_11 : var_5)))) : -101));
    }
    var_17 *= -var_6;
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        for (int i_2 = 3; i_2 < 11;i_2 += 1)
        {
            {
                var_18 = (min(var_18, (((-17122 ? (arr_1 [i_2 - 1]) : (((!((min((arr_7 [i_1]), 0)))))))))));
                var_19 += (((arr_5 [i_1]) ? -17131 : var_9));
                var_20 = (10 && (0 && -4304));
            }
        }
    }
    #pragma endscop
}
