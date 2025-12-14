/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 22413;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (min(var_11, (-22403 / 31457280)));
        var_12 = ((((((var_5 / 22438) ? (max(-2877027782038021278, 22438)) : var_0))) ? var_3 : (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_13 = var_9;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_6 [i_1] [i_1] = (max(((((max(var_4, var_9))) ? (((-22414 ? var_0 : 22454))) : var_5)), (var_6 - 1)));
            var_14 = (max(22425, 5939665569568376706));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_15 = (~8);
            var_16 = 262144;
            var_17 = (max(var_17, (((((16572542538991395406 >> (((-127 - 1) + 174)))) == var_1)))));
            arr_9 [i_1] [i_1] [i_3] = 9606;
            /* LoopNest 3 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 += ((var_7 == (arr_5 [i_4])));
                            arr_17 [i_3] [i_3] [i_4] [i_5] [i_6] = (-22415 ? (((arr_10 [i_1] [i_3] [i_4]) & (arr_2 [i_1] [i_3]))) : var_0);
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            var_19 = var_5;
            var_20 = (min((min((((!(arr_1 [i_1] [i_7])))), (arr_10 [i_1] [i_7] [i_7]))), (((!((min(var_0, (-2147483647 - 1)))))))));
            arr_22 [i_7] [i_7] = (((((arr_21 [i_7] [14]) && (4380908099900582353 < 1874201534718156216))) ? (((((arr_4 [i_1] [i_7]) > (785485013875334957 * var_0))))) : ((1930320717 ? (((arr_1 [i_7] [i_1]) * var_8)) : 1930320736))));
        }
        arr_23 [i_1] [0] = -697356836;
    }
    var_21 = var_3;
    var_22 = ((-var_3 ? var_8 : var_6));
    var_23 ^= ((var_2 * ((((var_8 <= var_1) >= ((var_5 ? var_9 : var_4)))))));
    #pragma endscop
}
