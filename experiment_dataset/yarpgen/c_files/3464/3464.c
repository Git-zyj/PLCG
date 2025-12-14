/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (1761647067 + 49)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_13 = (max(var_13, (((-(max((arr_0 [i_0]), 52624)))))));
        arr_3 [i_0] = (((((~((-90 ? 18446744073709551615 : 237120121))))) ? (((~(arr_2 [i_0])))) : -52610));
        var_14 = (arr_2 [i_0]);
    }
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 24;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_2] = ((~(arr_5 [i_2 + 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_15 = min(((((~-7887) ? (46 << var_10) : (arr_14 [i_1] [i_5])))), (((arr_12 [8] [i_3 + 2] [i_3 + 1] [i_3]) ? var_2 : (arr_8 [i_3] [i_3 + 2] [i_3] [i_3 + 1]))));
                                arr_16 [i_2] = 52622;
                                var_16 = var_10;
                                var_17 = (((((max(229, var_1)))) ? ((-(min(-2454874444732588042, 1039914859)))) : ((((((max(-1728260707, var_1))) || 1728260702))))));
                            }
                        }
                    }
                }
            }
        }
        arr_17 [i_1] [i_1] = ((-(max(var_1, ((~(arr_12 [i_1] [i_1] [i_1] [i_1])))))));
        var_18 = 17616791613894422259;
    }
    for (int i_6 = 3; i_6 < 24;i_6 += 1)
    {
        var_19 = -7641856124341354466;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                {
                    var_20 = ((!(((~(arr_19 [i_7]))))));
                    var_21 = ((((max((arr_7 [i_6] [19] [i_8]), (arr_18 [i_6 - 3])))) ? (max(((2454874444732588033 ? (arr_9 [5] [5] [i_7] [i_7]) : var_0)), ((-(arr_25 [i_6] [i_8] [i_8 - 1] [i_6]))))) : (max((((var_0 + 2147483647) << (((var_5 + 67) - 8)))), (arr_4 [i_6 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
