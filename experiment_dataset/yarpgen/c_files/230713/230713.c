/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((max(var_2, -1)))) ? ((((2586365323616407900 / -2586365323616407922) ? ((var_16 ? 59 : var_0)) : var_2))) : (var_11 + var_2)));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        var_18 = (((2586365323616407900 && ((max(-2278264559220207082, var_6))))) ? (max(var_7, 3252471775115127843)) : (((((var_15 < var_13) > (((arr_2 [i_0 - 1]) / var_9)))))));
        arr_4 [i_0 + 2] [i_0] = (((max(-1931190421111709290, var_16)) >= (~-89184116)));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = ((((((((var_12 >> (var_4 - 8521847045367743893)))) ? 99402624 : ((89184138 ? (arr_6 [i_1]) : -1131380757))))) ? 70368744177663 : ((max(var_15, 0)))));
        arr_7 [i_1] [i_1] = (((((arr_5 [i_1]) ? (min(99402601, 89184111)) : var_15))) > (4294967293 * -89184116));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (((((-2278264559220207082 ? var_13 : 134216704))) ? var_16 : (-1972710558 || -5)));
        var_20 ^= var_11;
        arr_11 [i_2] = (((arr_8 [i_2]) ? 1040384 : (var_14 / 3)));
        var_21 = ((var_9 ? (arr_8 [i_2]) : (arr_8 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 12;i_4 += 1)
            {
                {
                    var_22 = (arr_12 [i_4 + 2]);
                    var_23 = ((59002 % (var_3 * -1972710558)));
                    arr_16 [i_3] [i_3] = -1;
                }
            }
        }
    }
    var_24 &= var_13;
    #pragma endscop
}
