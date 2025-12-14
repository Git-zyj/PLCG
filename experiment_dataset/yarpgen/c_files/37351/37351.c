/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_2 * (max((1 * 4294967292), -var_2))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = (min((((!12) + (8746669529282688572 > 244))), (((max(4, 713))))));
        arr_3 [i_0] [i_0] = (min((((var_8 * 5) ? (((75 | (arr_0 [i_0] [i_0])))) : 1387163182160805002)), (arr_1 [0] [i_0])));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_15 -= ((-((((max((arr_4 [i_0] [i_1]), (arr_6 [2]))) != -1)))));
            var_16 = var_7;
            var_17 = (min(1, (arr_4 [i_1] [i_0])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (max(var_18, (arr_6 [i_2])));
            arr_11 [i_0] [i_0] [i_0] = 223;

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                var_19 = (((arr_0 [i_0] [i_3]) % (arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_3] = var_8;
                            var_20 |= (max((((arr_16 [i_2] [i_5 + 1] [i_5] [i_5 + 1] [i_5]) - var_3)), ((1 ? -533814670 : (arr_16 [12] [i_4] [i_4] [i_5 + 1] [i_5])))));
                        }
                    }
                }
            }
            arr_19 [i_0] [i_0] [i_0] = (((max((arr_12 [i_0]), 1)) / (((arr_12 [i_2]) / -724))));
            var_21 = (max(var_21, 14281528840780187521));
        }
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            arr_22 [i_0] [i_6] [i_0] = (((((~((1 ? 13770671859190807853 : (arr_4 [i_0] [1])))))) ? ((-((((arr_8 [i_0] [i_6] [i_0]) || (arr_5 [i_6] [i_0])))))) : -20277));
            var_22 = (((!4676072214518743777) ? 1 : ((-(1 + 13770671859190807839)))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_25 [i_0] [i_0] = ((-((-6239867779175953905 - (arr_16 [i_0] [i_0] [i_0] [i_7] [4])))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_23 = 122;
                        var_24 = ((~((min((arr_21 [i_9] [i_7] [i_9]), 255)))));
                        arr_32 [i_0] [i_9] [i_8] [i_8] [i_7] [i_0] = -255;
                        var_25 = (min((arr_20 [i_8] [i_0] [i_0]), (arr_4 [1] [i_7])));
                        var_26 ^= (arr_16 [i_0] [i_0] [0] [i_8] [3]);
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_27 = -8992194032170698759;
                            arr_40 [i_12 + 1] [i_11] [i_0] [i_0] [i_7] [i_0] = (min(((min(((154 ? var_3 : 17590)), ((max(1, 0)))))), ((~(arr_14 [i_11 - 1])))));
                        }
                    }
                }
            }
            arr_41 [i_0] = (((791167256 + (max(var_7, var_5)))));
        }
        arr_42 [i_0] [i_0] = (arr_24 [i_0] [4] [i_0]);
    }
    var_28 = ((((1 + (1 - 13770671859190807839))) - ((max(-var_12, (max(2939526723, 19746)))))));
    var_29 = var_3;
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            {
                arr_48 [i_13] = (min(6521268372772466744, ((max(-20441, 1966080)))));
                arr_49 [i_13] [8] = ((-(((((63 ? 6 : -1))) ? (arr_47 [i_14]) : -724))));
            }
        }
    }
    #pragma endscop
}
