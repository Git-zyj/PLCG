/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_7 ? (((2576613514 && var_10) ? (867822640 % 24312) : (min(var_11, var_1)))) : ((-((var_15 ? 2384422317253456662 : var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    var_18 = ((((((((var_8 + 9223372036854775807) >> (var_2 + 14961)))) ? (var_13 | 2384422317253456662) : (var_16 ^ var_3))) >> (((~var_13) - 4084125557))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_1] [i_1 - 2] [i_2] [1] = (max((((((arr_7 [5] [i_1] [i_2] [i_1]) ? (arr_5 [i_3]) : var_0)) / (min(var_15, var_4)))), ((-var_5 ? 2384422317253456656 : ((((arr_6 [3] [i_1] [i_1]) / var_14)))))));
                        var_19 = (((!2384422317253456645) >= -32740));
                    }
                    var_20 = (max((arr_0 [i_1 - 2]), (arr_9 [i_0] [i_0] [i_0] [i_1 - 2] [i_1 - 2])));

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 9;i_4 += 1)
                    {
                        var_21 = -2032457562;
                        var_22 |= (((arr_2 [i_4 + 1]) / (arr_6 [i_0] [i_1 + 2] [i_0])));
                    }
                }
            }
        }
    }
    var_23 = var_3;
    var_24 = 23;
    #pragma endscop
}
