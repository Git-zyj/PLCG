/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27570
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27570 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27570
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = 1323;
        arr_2 [i_0] = var_7;
        var_20 = (min((!187), var_11));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_21 = (var_1 << 0);
        arr_6 [i_1] = (max(((22 ? 37 : var_0)), 112));
        var_22 = (max(((-23 ? 22 : 22)), ((9223372036854775794 ? var_4 : 19076))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] [i_2] = 0;
        arr_10 [i_2] = 20;
        arr_11 [i_2] = (((2147483647 - 19) ? 26 : (((26 ? 1386275424 : -36)))));
    }
    var_23 -= (((var_10 * (64070 / 536870911))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_24 = (min(768, -1965604768));
                                var_25 = ((1 ? -22 : (65535 || 32506)));
                                arr_26 [i_3] [i_3] [i_4 - 2] [i_3] [i_5] [i_6] [i_7] = 1097968663;
                            }
                        }
                    }
                }
                var_26 += var_13;
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_27 = var_8;
                            arr_34 [i_3] [i_4] [8] [i_4] = (((((8743693708902257416 ? 15 : ((34513 ? 8743693708902257416 : 7790212568102590859))))) ? var_11 : 200));
                            arr_35 [9] [i_3] [i_4 - 2] [i_3] [i_3] = 2883230565;
                            var_28 = -255;
                            var_29 = 725633296;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
