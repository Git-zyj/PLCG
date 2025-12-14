/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= ((var_8 ? var_0 : (((!8191) ? var_2 : 40938))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 -= var_12;
        var_15 = 3710145321;

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (arr_0 [i_0]);
            arr_7 [i_0] [i_0] [i_1] |= ((((((min(8191, 1322367911))) ? var_5 : ((((var_9 && (arr_4 [i_0] [i_0] [i_1]))))))) <= ((((288230376151187456 ? 13 : var_5)) << (var_6 - 2677958357)))));
            var_16 |= (max(var_7, 29));
            var_17 = (arr_5 [i_0] [i_1]);
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_18 ^= var_3;
                        arr_14 [i_0] [i_0] [i_0] [i_0] |= (((arr_8 [8] [i_1] [8]) ? var_11 : (min(13, -4184868713660384582))));
                        var_19 = ((((12475256757807955092 ? (min(2147483648, (arr_9 [i_0] [i_0]))) : (1 < 2972599385))) << ((((max(var_1, (1 <= var_6)))) - 26218))));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_20 = (~var_6);
            var_21 = (max(((var_12 ? (arr_11 [i_0] [i_0] [i_0] [i_0]) : ((max(var_7, var_12))))), (arr_16 [i_0] [i_0])));
            var_22 = (max((max(var_1, var_3)), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4])));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_23 = (min(var_23, var_12));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_7] [i_0] = (~9);
                        arr_24 [i_5] |= (arr_22 [i_5]);
                        arr_25 [i_5] |= var_11;
                        arr_26 [i_0] [i_5] [i_6] [i_7] = var_4;
                        var_24 -= var_8;
                    }
                }
            }
        }
        var_25 = (min(var_25, (arr_9 [i_0] [i_0])));
    }
    for (int i_8 = 2; i_8 < 14;i_8 += 1) /* same iter space */
    {
        var_26 = (arr_12 [i_8] [i_8 - 1] [i_8] [i_8]);
        var_27 = ((min((((0 >> (124 - 121))), (arr_22 [6])))));
        var_28 ^= ((!(((((((arr_13 [i_8] [i_8 - 2] [i_8] [i_8] [i_8] [6]) ? var_9 : var_9))) ? ((((arr_10 [i_8]) < var_5))) : (arr_9 [i_8 + 2] [i_8 - 1]))))));

        for (int i_9 = 2; i_9 < 16;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_29 = (max(var_29, ((((((2972599385 ? (arr_30 [i_8 + 1]) : 2972599409))) ? (!2147483647) : (1008 | -24451))))));
                        var_30 = ((-((((max(var_10, 17))) ? (arr_11 [1] [1] [i_10] [i_10 - 1]) : (var_10 > 9)))));
                        var_31 |= ((((max((1 * 0), var_1))) ? ((min((arr_10 [i_10 + 1]), (arr_10 [i_10 - 1])))) : -18446462598732840960));

                        for (int i_12 = 2; i_12 < 15;i_12 += 1)
                        {
                            var_32 = 2972599365;
                            arr_38 [i_12 - 1] [1] [1] [2] |= (max(var_3, ((var_6 ? (((arr_29 [i_8]) ? var_0 : var_12)) : (((min((arr_29 [i_8]), var_8))))))));
                            var_33 = (max(var_33, ((min((((arr_1 [i_12 + 2] [i_12 + 2]) ? var_8 : (var_7 < var_11))), (arr_19 [i_8]))))));
                            var_34 = (min(var_34, (((((255 - 0) ? (arr_34 [6] [6]) : -10438))))));
                        }
                    }
                }
            }
            var_35 = min((min(0, 1542197165537403339)), 19);
        }
        for (int i_13 = 4; i_13 < 13;i_13 += 1)
        {
            var_36 |= (min(((((max(var_4, (arr_21 [i_8 + 3] [12] [i_13] [i_8 + 3])))) ? var_11 : (169 * var_10))), var_2));
            var_37 -= ((-(max(var_0, var_11))));
            var_38 = (2235117860 ? 1 : ((3219792823 ? (((1 ? 38163 : (arr_21 [14] [0] [i_8] [i_13])))) : 3785380335)));
            arr_41 [i_8] [i_13] = var_8;
        }
    }
    /* vectorizable */
    for (int i_14 = 2; i_14 < 14;i_14 += 1) /* same iter space */
    {
        var_39 -= 1;
        var_40 -= (((2153000168 + 32767) ? 1 : -55739));
    }
    #pragma endscop
}
