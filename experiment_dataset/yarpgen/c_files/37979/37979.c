/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 ? var_16 : 1984));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_15;
        arr_3 [i_0] = (-1985 || var_7);
        var_18 += (((arr_1 [i_0 - 1] [i_0]) % var_13));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        var_19 = (((var_1 ? ((max(var_12, 22))) : ((min(103, 251))))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1) /* same iter space */
        {
            var_20 = (min(var_20, ((((17686419872541894629 | 4064) & 233)))));
            arr_9 [i_2] = (min(var_16, (min(46952, -40))));
            arr_10 [i_1] [i_2] = 233;
        }
        for (int i_3 = 1; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_15 [i_3] [i_3] = var_15;
            var_21 -= var_5;
            var_22 = (max(var_22, 32752));
            var_23 = (max(var_23, 70368744177663));
            var_24 = (max(var_24, ((max((min(358882602, (arr_13 [i_1]))), (arr_13 [i_1]))))));
        }
        arr_16 [i_1] = (max(var_0, (min(((min(29784, var_12))), (max(11, var_14))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_25 ^= (min(var_7, (min((arr_19 [i_1 - 1]), 65535))));
                    arr_23 [i_4] [i_4] = max(-21043, 29);
                }
            }
        }
    }
    var_26 = (((~31169) && var_12));
    var_27 = var_14;
    var_28 &= ((123 ? 18446744073709551605 : -6582935039992331710));
    #pragma endscop
}
