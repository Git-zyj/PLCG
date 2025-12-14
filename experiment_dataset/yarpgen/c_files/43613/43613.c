/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -17654;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_10 [i_1] = ((var_4 - (arr_6 [i_1])));
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_3] = (((arr_2 [i_0 - 3]) ? (arr_2 [i_0 + 1]) : var_1));
                    }
                }
            }
        }
        arr_12 [i_0] = (-(arr_7 [i_0 - 2]));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            {
                var_10 = ((-(((arr_9 [i_4] [i_4 + 2] [i_4] [i_4] [i_5]) ? (arr_9 [i_4] [i_4 + 1] [i_4] [i_4] [i_5]) : (arr_17 [i_4 + 1] [i_4 - 2])))));
                var_11 = (max(var_11, ((((((6383786300665822816 ? (arr_17 [i_4 - 2] [i_5]) : var_3))) ? (min((arr_17 [i_4 + 1] [i_4]), (arr_17 [i_4 - 1] [i_5]))) : (max(var_7, (arr_17 [i_4 - 1] [i_5]))))))));
                var_12 = var_5;
                arr_19 [i_5] = (((1493026980731704387 ? 24342 : -19264)));
                var_13 -= (min(((min((arr_18 [14] [i_5]), (arr_18 [8] [i_4])))), ((4646 ? 12062957773043728785 : 1))));
            }
        }
    }
    var_14 ^= (((min(-2631, 1))));
    #pragma endscop
}
