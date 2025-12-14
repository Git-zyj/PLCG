/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(((min((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [1]) ? 30946 : 30943))))), ((max((arr_0 [i_0]), (arr_3 [1] [i_0]))))));
        var_18 = (((arr_1 [i_0] [i_0]) ? (((arr_3 [11] [i_0]) ? ((((arr_2 [i_0] [i_0]) || (arr_1 [19] [i_0])))) : (arr_2 [i_0] [i_0]))) : ((((arr_1 [4] [1]) == (((arr_2 [i_0] [i_0]) / (arr_0 [2]))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 = (max(var_19, (arr_6 [i_1])));
        var_20 = (((arr_0 [i_1]) ? (arr_4 [i_1] [i_1]) : ((30943 ? 33538048 : 23))));
        var_21 ^= 34595;
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_22 ^= (((arr_3 [i_2] [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_9 [i_2])));

        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_12 [21] [i_3] = ((255 ? 65527 : -1447522283938512452));
            arr_13 [i_2] [i_3] = (arr_1 [i_2] [i_3]);
            arr_14 [i_3] = (((arr_10 [i_2] [i_3]) ? (arr_10 [i_3] [i_2]) : (arr_10 [i_3] [i_2])));
            arr_15 [i_3] [i_2] = (((arr_9 [i_2]) < (arr_0 [11])));
        }
        arr_16 [i_2] = (arr_0 [i_2]);
        var_23 ^= (arr_8 [i_2]);
    }
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        var_24 = (max(var_24, ((((arr_3 [i_4 + 3] [i_4 + 1]) >= (max(2061198628, 20033)))))));
        arr_20 [i_4] [i_4] = (min(268435448, ((((arr_18 [i_4 - 1]) ? (arr_17 [i_4] [i_4]) : (arr_2 [i_4] [i_4]))))));
        var_25 = max(12288, 2147483647);

        /* vectorizable */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            var_26 |= (arr_10 [i_5] [i_4]);
            arr_23 [12] [12] [i_5] = (arr_0 [i_4 + 3]);
        }
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            var_27 -= (arr_18 [i_4]);
            arr_27 [6] [i_6] [6] = ((((255 != (arr_10 [16] [i_6]))) ? (((arr_3 [i_4 - 2] [i_4 + 2]) ? (arr_3 [i_4 - 1] [i_4 + 3]) : (arr_3 [i_4 + 3] [i_4 + 3]))) : (4252208474 < 1)));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 21;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        {
                            arr_35 [i_4 + 1] [i_4 + 1] [i_4] [i_4] [i_4] |= (((arr_8 [19]) ? (arr_31 [i_4 + 2] [i_9 + 1]) : (min((arr_10 [i_9 + 2] [i_6]), (arr_25 [i_9 - 2] [i_7 + 1] [i_6])))));
                            var_28 = (max(var_28, ((((arr_34 [i_4 + 1] [i_4 - 1] [i_4 + 2] [0] [i_7 + 2] [i_8 - 1]) ? 251 : (arr_9 [i_4 + 1]))))));
                            arr_36 [19] = (min((arr_7 [i_4 - 1]), (max((arr_7 [i_4 - 2]), (arr_7 [i_4 - 2])))));
                            arr_37 [i_4] [1] [i_4] [i_8] = (((arr_31 [15] [i_8]) ? (((((arr_25 [i_8] [i_7] [i_6]) ? (arr_31 [9] [i_6]) : (arr_8 [i_4]))))) : (arr_17 [i_9 - 2] [i_8 + 1])));
                            var_29 = (max(var_29, (arr_1 [i_8 + 1] [i_9 - 3])));
                        }
                    }
                }
            }
            var_30 -= (max((arr_30 [i_4 - 1]), (((arr_30 [i_4 + 3]) | (arr_30 [i_6])))));
            arr_38 [i_4] = (min((-1447522283938512436 % 8931515165070056809), (arr_21 [5] [i_4])));
        }
    }
    var_31 = ((((((((var_15 ? var_0 : var_15)) != var_2)))) >= (min(((var_13 ? var_13 : var_3)), (((var_9 ? var_15 : var_7)))))));
    var_32 = var_0;
    #pragma endscop
}
