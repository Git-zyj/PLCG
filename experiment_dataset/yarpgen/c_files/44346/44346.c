/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((max(65535, 8179903635998779030))) ? 16383 : (!2280899530)));
        arr_3 [9] [i_0] = var_11;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (((max((max(-4726219598626092120, 1981516385)), 171)) + (((max(var_9, var_13))))));
                    var_21 = (min(var_21, (((var_10 ? ((24034 ? ((18446744073709551615 ? 0 : -1)) : (max(-1627534535, -24027)))) : -var_3)))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1 + 1] [i_4] [i_3] [i_4 - 1] [i_4] = (max(var_18, (var_16 < var_15)));
                                arr_17 [22] [i_4] = (max(-1981516389, ((((~var_7) > var_12)))));
                            }
                        }
                    }
                    arr_18 [i_2 + 1] [i_1] [i_0] = (max(-43, 16));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {
                        var_22 = (min(var_22, var_11));
                        arr_29 [i_5] [2] [i_7] [i_8] = 3176493575;
                    }
                    arr_30 [4] [i_5] [1] [i_5] = ((-(var_1 % 75)));
                    arr_31 [i_5] [i_5] [9] = (var_0 && 0);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                {
                    arr_39 [i_5] [i_10] [i_9] [i_5] = var_14;
                    var_23 = var_10;
                    var_24 = ((-6332274823053848237 ? 25348 : 1));
                    var_25 = 1162785919;
                    var_26 = var_15;
                }
            }
        }
        var_27 = var_18;
    }
    var_28 = ((((max(var_13, ((2147483630 ? var_5 : 56))))) ? ((var_18 ? (max(var_9, var_18)) : var_0)) : var_7));
    #pragma endscop
}
