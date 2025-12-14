/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219317
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [3] = (max(33955, -27892));
        arr_4 [19] = ((min(var_0, (arr_1 [i_0] [i_0]))));
        var_12 = (min(var_12, (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1) /* same iter space */
    {
        var_13 = (((var_0 > var_4) != (arr_5 [1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    var_14 = (((min((~var_4), var_9)) >= ((max((15579685352223625174 >= -19631), ((var_8 ? (arr_8 [i_1]) : (arr_13 [i_1] [7] [i_3] [i_3 - 1]))))))));
                    var_15 = (1 || 24429);
                }
            }
        }
        var_16 = ((((max((arr_7 [i_1]), (arr_6 [i_1])))) ? (arr_9 [i_1] [i_1]) : (((var_3 > (-7833829237952704157 || var_4))))));
        var_17 = (max(-27906, 23518));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        var_18 = (((var_8 != (arr_9 [i_4] [16]))));
        var_19 *= ((max(7833829237952704160, 58675)));
    }
    var_20 = (max((((var_9 / var_8) ? (max(var_5, var_11)) : (-7833829237952704157 / -240914535435895397))), (((var_9 ? (var_3 != var_6) : 115)))));
    #pragma endscop
}
