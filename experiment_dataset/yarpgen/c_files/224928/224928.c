/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 2661077407;
    var_12 = 0;
    var_13 = max(603867774, (~-1860480913));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_14 = (((((-(arr_2 [i_0 + 1])))) ? (((-(arr_2 [i_0 + 1])))) : ((2900143198 ? 1 : 2271561059))));

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = var_8;
            var_15 = (~41036061);
            var_16 = var_1;
            var_17 |= -255;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_0] [i_0] [i_0] = 1935742427;
            arr_12 [i_0] = 3165321425;
            arr_13 [i_0] = 199;
        }
        arr_14 [i_0] = ((max(1214163086, 2271561052)));
        arr_15 [i_0] = ((2023406253 != (((max(82, (arr_0 [1])))))));

        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_18 = (min(var_0, var_5));
            arr_18 [i_0] [i_0] [i_0] = ((-((324633593 ? 2434486394 : 1508782111))));
        }
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_19 -= (arr_0 [5]);
            arr_23 [i_0] [5] [i_0] = (min((min((arr_3 [i_0] [i_0 + 1] [i_0 + 1]), var_6)), (min((var_6 / var_9), (min(1, 1515858519))))));
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_28 [i_0] [i_5] [i_5] = (1420319946 ^ 177545363);
            var_20 = 253;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_31 [0] [i_0] = ((0 ? 80559148 : var_5));

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_21 = ((2208377001 ? var_10 : 255));
                arr_36 [i_0] [i_0 + 1] [i_6] = var_2;
                var_22 = 233;
            }
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    var_23 = (~172);
                    var_24 = ((-var_3 ? ((2023406237 ? var_3 : 2023406257)) : var_8));
                    arr_41 [i_0] [i_8] [5] [i_0] = (var_1 / 1303277777);
                }
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    var_25 = 2584682712;
                    var_26 = (var_9 > 2933199131);
                    var_27 -= ((var_2 == (((((arr_29 [i_0] [i_8] [i_8]) != 1))))));
                }
                var_28 ^= arr_16 [i_8];
                var_29 = (max(var_29, (arr_9 [i_0 + 1] [i_6] [i_6])));
            }
        }
    }
    for (int i_11 = 0; i_11 < 18;i_11 += 1)
    {
        var_30 -= (max(4121813036, 174));
        var_31 = (max(((((((max(185, var_6)))) == var_4))), (((3014780047 ? var_6 : var_1)))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 18;i_13 += 1)
            {
                {
                    var_32 = (min(var_32, ((min((((~1011190691) ? (((var_7 ? 167 : (arr_45 [i_13] [2])))) : 209)), (((min(var_1, 4253931255)) << 0)))))));
                    var_33 = (min(var_33, (max((arr_50 [6]), 209))));
                    arr_52 [i_11] [i_12] [i_13] [i_12] = var_4;
                }
            }
        }
    }
    #pragma endscop
}
