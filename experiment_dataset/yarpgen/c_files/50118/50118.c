/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, (max(241, 2827550840))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_18 = var_10;
                    var_19 = ((127 ? (arr_0 [i_0]) : (~15)));
                    var_20 = (arr_7 [i_0] [i_0] [10] [i_0]);
                    arr_8 [i_0] = (((((arr_1 [i_1]) ? -169834957 : (arr_5 [1] [i_1] [i_1] [i_0]))) | 255));
                }
            }
        }
        var_21 = (max(var_21, (((97 ? (arr_0 [22]) : (arr_3 [2] [2]))))));
        arr_9 [i_0] [i_0] = (((arr_0 [i_0]) != (arr_5 [i_0] [i_0] [i_0] [i_0])));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = (arr_10 [i_3]);

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_18 [i_3] [i_4] = ((arr_4 [i_3] [i_3]) ? (arr_4 [i_3] [i_3]) : (arr_4 [i_4] [i_3]));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 16;i_6 += 1)
                {
                    {
                        arr_25 [i_3] [i_5] [i_4] [4] [i_6] = ((+((247 ? (arr_19 [i_6] [0] [i_6] [7]) : 4401715485083860678))));
                        var_22 = ((0 ? 17738 : (!14157)));
                        arr_26 [i_3] [i_4] [i_5] [i_5] [14] = (!(14 != 2198));
                    }
                }
            }
            var_23 = 1080789056;

            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                var_24 -= ((!(arr_22 [i_7])));
                var_25 = (((arr_6 [i_7] [2]) ? (arr_6 [i_4] [i_3]) : var_13));
                arr_29 [i_3] [i_7] [i_7] [i_3] = ((var_6 >> (-11894 + 130)));
                arr_30 [i_7] [i_7] = ((arr_23 [i_3] [i_3] [i_4] [i_7]) ? (arr_23 [i_3] [i_4] [i_4] [i_7]) : 0);
            }
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 16;i_10 += 1)
                    {
                        {
                            arr_39 [1] [i_10] = (arr_17 [i_9] [i_9]);
                            arr_40 [i_3] [i_3] [0] [i_10] [i_3] = ((~(~11893)));
                            arr_41 [i_10] [i_10] = (((arr_1 [i_3]) == var_1));
                        }
                    }
                }
                arr_42 [i_8] [i_3] [i_3] = (((((1467416455 ? 0 : (arr_4 [i_4] [i_3])))) ? ((var_9 & (arr_12 [11]))) : 8586123094731430550));
            }
            for (int i_11 = 2; i_11 < 14;i_11 += 1)
            {
                arr_46 [i_3] [i_11 + 2] [i_3] = (((arr_1 [i_4]) ? ((((arr_37 [i_3] [i_4] [i_11 + 2] [i_11]) * (arr_11 [i_3])))) : 77));
                arr_47 [i_11] [i_3] [i_3] [i_4] = ((-20923 ^ (arr_1 [i_11 + 1])));
            }
        }
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            var_26 -= 65535;
            var_27 = (min(var_27, 1467416455));
        }
        for (int i_13 = 0; i_13 < 16;i_13 += 1)
        {
            var_28 = (max(var_28, (arr_32 [7] [i_3] [i_13])));
            var_29 = (((((var_7 ? (arr_32 [2] [2] [i_3]) : 42298))) ^ var_16));
            var_30 = (((arr_38 [i_3]) % var_4));
        }
        arr_55 [i_3] [i_3] = (arr_21 [i_3] [i_3]);
        arr_56 [i_3] = (((((arr_11 [i_3]) ? 9 : var_4))) ? var_9 : (arr_7 [i_3] [i_3] [i_3] [i_3]));
        var_31 = (var_12 ? (arr_32 [i_3] [i_3] [i_3]) : 213);
    }
    #pragma endscop
}
