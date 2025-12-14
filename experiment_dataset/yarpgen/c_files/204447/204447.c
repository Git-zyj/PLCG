/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = 24;

                    for (int i_3 = 4; i_3 < 21;i_3 += 1)
                    {
                        var_18 = -9223372036854775797;
                        arr_9 [i_2] [i_2] = (arr_0 [i_2]);
                    }
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        arr_12 [i_2] = -9223372036854775797;
                        arr_13 [i_2] [i_1] [i_2] [i_2] [i_4 - 2] = ((arr_6 [i_0] [i_1]) ? ((((!(arr_11 [i_0] [i_0] [i_0] [i_0]))))) : (((((var_8 ? (arr_3 [12] [i_2] [i_2]) : var_13))) ? (((9223372036854775797 ? var_14 : var_4))) : (arr_3 [i_4 - 2] [i_2] [i_1 - 2]))));
                        arr_14 [i_2] [i_0] [i_1] [i_1 + 2] [i_2] [13] = ((-((var_11 ? -var_3 : ((9223372036854775797 ? -9223372036854775798 : 150))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] [i_0] = var_3;
                        var_19 = (max(var_19, -9223372036854775797));
                    }
                    var_20 ^= ((-9223372036854775798 ? 0 : 9223372036854775791));
                    arr_16 [i_2] [i_2] [i_2] [i_2] = (~65535);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_21 = (max(var_21, (((var_12 && (arr_20 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 3] [i_1]))))));
                            var_22 = (min(var_22, (((arr_2 [i_1] [i_1 + 3] [i_1 - 1]) ? (arr_2 [i_0] [1] [i_1 - 4]) : (arr_10 [i_6] [i_6] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_0])))));
                            var_23 = (arr_8 [i_1] [i_2] [i_0] [i_2] [i_6] [i_1 + 2]);
                            var_24 = var_2;
                        }
                        var_25 = (max(var_25, 0));
                        arr_21 [10] [i_2] [1] [1] [10] = (((arr_5 [i_2] [i_1 + 3]) ^ (arr_5 [i_2] [i_1 + 3])));
                    }
                }
            }
        }
        arr_22 [i_0] [i_0] = ((((+(((arr_18 [i_0] [i_0] [i_0] [7] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 154)))) % (arr_17 [11] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_26 = ((0 % (((arr_4 [21] [21] [i_7] [i_7]) ? (((arr_4 [i_7] [i_7] [i_7] [i_7]) ? (arr_23 [i_7]) : (arr_3 [i_7] [2] [i_7]))) : var_15))));
        arr_26 [i_7] = (!102);
        var_27 &= (arr_24 [i_7]);

        /* vectorizable */
        for (int i_8 = 4; i_8 < 22;i_8 += 1)
        {
            var_28 = (((!var_5) ? ((var_15 % (arr_20 [8] [i_8 + 1] [8] [i_8] [i_8]))) : (var_1 >= 10460)));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 4; i_10 < 23;i_10 += 1)
                {
                    {
                        var_29 = (((arr_19 [i_10]) ? (arr_32 [i_10 - 3] [1] [i_10 + 1] [i_10 + 1]) : (arr_25 [i_10 + 1])));
                        var_30 = (((!var_14) ? var_11 : ((var_3 ? (arr_3 [i_7] [i_8] [i_10]) : var_9))));
                        var_31 = (!244);
                    }
                }
            }
        }
    }
    var_32 = -1;
    var_33 = ((!((max(var_15, -var_0)))));
    #pragma endscop
}
