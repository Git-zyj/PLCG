/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38527
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_3 [1] [1] = (max(var_10, ((var_8 << (arr_0 [i_0 - 3])))));
        arr_4 [4] = (((arr_2 [i_0]) ? -820047720 : ((16632812472452054344 ? 15598974804542361419 : 53))));
        var_11 = (max(var_11, ((((((var_10 ? var_8 : 29422)) << (((arr_2 [i_0 + 2]) + 1103981679)))) << (((((min((arr_1 [7] [i_0 - 1]), -883920863)) + 883920867)) - 3))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_12 = var_10;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_13 [i_0] [0] [i_1] = var_4;
                        var_13 -= (((((var_3 << (var_0 - 51)))) ? ((175 ? 9223372036854775784 : (arr_12 [i_2 - 1] [i_0 + 2] [8]))) : (((((arr_5 [0] [i_0]) != var_2))))));
                        var_14 = (((((57 ? 112 : -1941182780))) ? (((arr_7 [i_0 + 3] [i_0 + 3] [i_2 + 1]) ? (arr_7 [i_0 + 1] [5] [i_2 - 2]) : (arr_7 [i_0 + 4] [i_0 + 4] [i_2 + 1]))) : ((var_1 ? (arr_7 [i_0 - 3] [7] [i_2 - 2]) : (arr_7 [i_0 + 4] [1] [i_2 - 2])))));
                        var_15 = var_10;
                    }
                }
            }
        }
    }
    var_16 = (var_0 ? (min((var_8 % -16966), var_3)) : ((max(var_6, -7703))));
    var_17 -= (min((((((min(var_1, var_9))) ? var_4 : ((95 ? 3 : var_6))))), var_5));

    /* vectorizable */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            var_18 = (max(var_18, (arr_16 [3])));
                            var_19 = -235394815;
                            var_20 = (max(var_20, ((((arr_16 [i_5 - 1]) ? var_6 : (arr_27 [8] [i_4] [i_5 + 2] [i_5 + 2] [i_5 - 1]))))));
                            var_21 -= (arr_27 [2] [i_6] [6] [i_6] [i_6]);
                        }
                    }
                }
            }
            var_22 = (max(var_22, (((0 ? (arr_27 [i_5 + 2] [i_4] [i_5 - 1] [8] [i_5 + 1]) : var_2)))));
        }
        var_23 = (((arr_19 [i_4] [i_4] [i_4]) & 6669));
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 11;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                {
                    var_24 -= ((-883920880 != (arr_31 [i_4] [1] [1])));
                    var_25 = var_8;
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_44 [1] [1] [1] [10] [1] [6] [10] = ((883920848 ? (arr_5 [i_9 + 1] [i_10]) : (arr_5 [i_9 - 3] [i_10])));
                                var_26 = ((var_5 ? (arr_24 [i_11] [i_11]) : var_5));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_13 = 1; i_13 < 16;i_13 += 1)
    {
        var_27 = 12167487111652830757;
        arr_47 [i_13] = (((arr_8 [i_13 + 1]) ? var_2 : var_9));
    }
    for (int i_14 = 0; i_14 < 21;i_14 += 1)
    {
        var_28 = (min(var_28, (((((((((var_2 ? 820047719 : 23))) ? var_6 : var_3))) ? (min((((arr_11 [i_14]) ? 19 : var_1)), 116)) : ((((min(var_3, var_1))) ? (arr_12 [i_14] [i_14] [i_14]) : ((max(var_6, var_8))))))))));
        var_29 -= (((arr_48 [2] [i_14]) ? (min((arr_48 [18] [i_14]), (arr_8 [i_14]))) : ((7585131514099455448 ? (arr_8 [i_14]) : (arr_8 [i_14])))));
    }
    var_30 = 13993242517616740335;
    #pragma endscop
}
