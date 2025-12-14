/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_0;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = -6536;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = var_2;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (-17425 - 6536);
                                var_21 = max(206, (max((max(9285231405241255714, (arr_9 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]))), (min(var_11, 14388847253207215137)))));
                            }
                        }
                    }
                    var_22 = 65535;
                    arr_13 [i_0] [i_0] [i_0] = (arr_3 [1] [6] [i_0]);
                }
            }
        }
        var_23 += (min(9161512668468295902, (max((((var_10 ? 20303 : (arr_1 [4])))), 9285231405241255714))));
        arr_14 [i_0] = (((arr_11 [i_0 - 1]) - (arr_5 [i_0 + 2] [i_0] [i_0])));
        var_24 = var_8;
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_25 = ((((max(169936538, 2594519774))) <= ((-6536 ? (arr_17 [i_5] [i_5] [i_5]) : var_7))));
            var_26 *= (min(((var_1 ? 2594519762 : 65535)), (arr_18 [i_6])));
        }
        arr_20 [14] = ((var_11 ? ((-6536 ? var_5 : -28987)) : ((min(534773760, 65535)))));
    }
    var_27 = 1572864;

    /* vectorizable */
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 25;i_11 += 1)
                        {
                            {
                                var_28 = (var_5 + var_14);
                                arr_36 [i_7] [18] [1] [4] [i_10] [18] = ((1 ? (308075643194624453 + 19) : var_16));
                                var_29 = (arr_30 [i_7] [i_7] [i_7] [i_7]);
                            }
                        }
                    }
                    arr_37 [i_7] [i_8] = ((-1928964326 ? -6553 : ((18138668430514927161 ? 6 : 18138668430514927162))));
                    arr_38 [i_7] [i_8] [i_8] = 9050;
                    arr_39 [i_7] [i_8] = (1928964299 / 27);
                }
            }
        }
        var_30 = (max(var_30, (~var_6)));
        var_31 = (((arr_24 [i_7] [i_7]) - (arr_22 [i_7] [i_7])));
    }
    #pragma endscop
}
