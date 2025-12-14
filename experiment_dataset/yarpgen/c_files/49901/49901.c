/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49901
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = max((((-61833797 / var_10) ? (((1799770543 ? var_5 : var_10))) : ((var_3 ? var_9 : 127)))), ((-15697 ? var_9 : var_0)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_14 = (arr_1 [3]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_15 = 1799770543;
            arr_4 [i_0] [i_0] [i_0] = 0;
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 23;i_4 += 1)
                    {
                        {
                            var_16 = (min(var_16, (((3290607295824611459 ? -1 : 1556056371)))));
                            var_17 = ((((-1556056359 ? (arr_8 [i_4 + 2] [i_2 + 2]) : var_2)) + (min((min(-870074098, var_9)), -var_1))));
                            var_18 = ((var_2 ? ((min(0, 0))) : ((((((var_12 ? 511 : 0))) == 11105627231415917864)))));
                            arr_15 [i_4 + 1] [i_3] [i_3] [i_3] [i_0] [i_0] = (var_2 <= 238507313);
                        }
                    }
                }
            }
        }
        var_19 = (((((var_12 & (arr_8 [i_0] [19])))) ? var_6 : (min((((arr_3 [i_0] [i_0]) % (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), var_0))));
        var_20 = ((((max((arr_3 [i_0] [i_0]), 24))) ? (min(12, (16280311536269255499 != 2147483647))) : (508 > var_10)));
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] &= var_2;
        var_21 = (1799770543 | var_0);
    }
    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
    {
        var_22 = (max(var_22, ((min(((max(var_4, (min(127, 2495196752))))), (((min(var_11, 16280311536269255508)) / var_7)))))));
        var_23 &= (~var_9);
    }
    #pragma endscop
}
