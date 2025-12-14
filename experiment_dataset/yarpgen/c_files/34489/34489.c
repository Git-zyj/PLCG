/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34489
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((-(max((min(13183329315252887739, 255)), ((max(var_2, var_7))))))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1 - 2] [i_2] [i_0] = (i_0 % 2 == zero) ? (((~(((arr_7 [i_0] [i_0 + 1]) >> (((arr_1 [i_0]) - 11554))))))) : (((~(((arr_7 [i_0] [i_0 + 1]) >> (((((arr_1 [i_0]) - 11554)) - 1353)))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((13658 / (((arr_5 [i_0 + 1]) * (arr_7 [i_0] [12])))));
                        arr_13 [8] [i_0] = (255 ^ 123);

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_12 = 6219;
                            arr_17 [i_0] = (((arr_8 [i_0 + 1] [i_0] [4]) <= var_8));
                            arr_18 [i_0] [1] [i_2] [i_2] [i_4] = (((arr_9 [i_1 + 3] [i_0] [i_0] [i_0 - 1]) % -19));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_4] = var_3;
                            var_13 = (arr_2 [i_0 - 1]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [21] [21] [i_0] [21] [i_0] = (arr_7 [i_0] [i_0]);
                        var_14 = (((arr_4 [i_0]) || (0 <= 1)));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                arr_28 [i_0] [i_6] [i_2 - 1] [i_0] [i_0] = ((8856775697878908378 ? var_4 : (14693139024172622345 % 209913232438492910)));
                                var_15 = (((arr_10 [i_1] [i_1 - 1] [i_7]) || 255));
                            }
                        }
                    }
                }
            }
        }
        var_16 = var_1;
        arr_29 [i_0] = (((arr_16 [i_0 + 1] [i_0] [i_0 + 1]) != (arr_16 [i_0 + 1] [8] [i_0 + 1])));
    }
    for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
    {
        var_17 = (((arr_0 [i_8]) + (arr_0 [i_8])));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 20;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 22;i_11 += 1)
                {
                    {
                        var_18 = var_0;
                        var_19 = var_6;
                        var_20 = ((-((~(((arr_6 [i_8] [5]) ? 13183329315252887739 : (arr_10 [i_8] [i_8] [i_8 - 1])))))));
                    }
                }
            }
        }
    }
    for (int i_12 = 1; i_12 < 21;i_12 += 1) /* same iter space */
    {
        var_21 = (min(var_21, (((((((arr_37 [14]) ? (arr_27 [i_12 - 1] [i_12] [i_12 + 1] [i_12 - 1] [6]) : (arr_37 [20])))) & (arr_5 [i_12 + 1]))))));
        arr_44 [i_12] = max((max((arr_34 [i_12] [4] [20]), 236)), (arr_41 [16] [16] [1] [16]));
    }
    var_22 = var_10;
    #pragma endscop
}
