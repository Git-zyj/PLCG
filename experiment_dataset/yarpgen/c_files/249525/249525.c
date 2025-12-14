/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = (arr_6 [i_0] [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_18 |= (arr_4 [i_0]);
                        var_19 = var_13;
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_20 = (max(var_20, ((((arr_10 [i_2] [i_4 - 1]) ? (((max(118, -18191)))) : 2147483647)))));
                        var_21 = arr_3 [i_0];
                    }
                    for (int i_5 = 1; i_5 < 16;i_5 += 1)
                    {
                        var_22 *= (((109 << (65535 - 65522))));
                        var_23 = 55;
                    }
                }
            }
        }
    }

    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        arr_24 [i_9] [i_9] [i_6] [i_6] [1] = ((((~(min(29904, (arr_12 [10] [i_7] [i_6] [i_9])))))) ? (arr_17 [9] [i_8 + 1]) : (arr_8 [i_6] [i_6 + 1] [i_6 + 2] [i_6 + 1] [i_6]));
                        arr_25 [i_6] [i_7] [12] [i_6] = var_4;
                        var_24 = ((35631 >= (arr_5 [i_6])));
                    }
                }
            }
        }
        var_25 = ((var_5 ? ((min((min((arr_0 [i_6]), (arr_23 [i_6 - 1] [9] [i_6]))), (arr_3 [i_6])))) : (~var_0)));
    }
    var_26 = ((((max(var_1, (var_14 & var_9)))) ? (((~var_8) ? var_8 : var_0)) : var_5));
    var_27 = (max((((var_14 || var_14) || 29905)), (!-var_12)));
    var_28 += (min(-81, 29890));
    #pragma endscop
}
