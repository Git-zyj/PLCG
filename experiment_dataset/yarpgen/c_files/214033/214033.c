/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = (max(7140, 23));
                var_12 |= -121;
                arr_6 [i_1] |= (((((!(-1 ^ var_9)))) != var_10));
                var_13 |= (((max(-58395, (var_11 % 7140)))) <= (((7 / 48333829) ^ var_6)));
            }
        }
    }

    for (int i_2 = 3; i_2 < 20;i_2 += 1)
    {
        arr_11 [i_2] = 248;
        arr_12 [i_2] [7] = (((min((-48333841 > 2312821413), (~var_11))) >> (((((-2147483647 - 1) - -2147483589)) + 106))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_14 = (min(var_14, var_9));
        var_15 = -6;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_6] [i_5] [i_6] |= (((~var_8) > var_6));
                        arr_24 [i_3] [i_5] [i_4] [i_3] = var_5;

                        for (int i_7 = 1; i_7 < 18;i_7 += 1)
                        {
                            arr_28 [i_3] [i_7] [i_6] [i_5] [i_4] [i_4] [i_3] = (((var_0 | var_4) ? (1 >= var_3) : (!13)));
                            arr_29 [i_3] [i_6] [i_3] = ((var_11 ^ (~var_9)));
                            var_16 -= ((-1497622074 ? 16383 : (~var_7)));
                            var_17 = ((var_11 ? var_9 : var_1));
                        }
                        for (int i_8 = 1; i_8 < 17;i_8 += 1)
                        {
                            var_18 = (min(var_18, var_6));
                            arr_33 [i_3] [2] [i_4] [i_6] [i_8] |= 665732970958567792;
                        }
                        for (int i_9 = 0; i_9 < 19;i_9 += 1)
                        {
                            arr_36 [i_3] [i_3] [i_5] [i_6] [10] = var_9;
                            arr_37 [i_3] [11] [11] [i_3] = (var_8 | -41);
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        arr_40 [i_10] = ((-(max(422183062, (var_3 | -48333814)))));
        arr_41 [i_10] [i_10] |= ((((max(var_5, (-1347742616 % var_8)))) ? (((-(!48333841)))) : (min(-58377, 5952694731640530094))));
        var_19 -= ((+((250 ? (27632 > -1064090560) : (!48333828)))));
        var_20 = var_7;
    }
    var_21 = -48333834;
    #pragma endscop
}
