/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200634
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_2] = (min((min(((max(var_0, -22423))), (max(932383303148943212, 536543005)))), var_4));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = (!-22416);
                                var_14 = 2246707274;
                            }
                        }
                    }
                    var_15 = (max(var_15, ((1137259992 - (arr_3 [i_0] [i_0])))));

                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_18 [i_0] [i_2] = (arr_16 [i_0] [i_1] [i_1 - 1]);
                            arr_19 [i_6] [i_2] [i_2] [i_2] [i_0] = var_2;
                            arr_20 [i_1] [i_2] = (146 || 2048260035);
                        }
                        var_16 = var_3;
                        var_17 &= min(((min(var_9, (arr_14 [i_1 + 3] [i_1] [i_1] [i_1])))), 19194);
                    }
                    for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                    {
                        arr_24 [i_2] = ((-(!2246707280)));
                        var_18 |= (min((((var_3 ? (min(-4211155791466456601, var_3)) : ((((arr_14 [i_0] [i_0] [i_0] [7]) ? 1 : 12)))))), ((((max(3612380518, (arr_16 [2] [i_7] [i_2])))) ? ((((arr_22 [i_0] [1] [i_2] [i_7 + 1]) << (175 - 157)))) : ((682586786 ? 17500 : var_7))))));

                        for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
                        {
                            var_19 = -12;
                            arr_27 [i_2] [i_2] = (9223372036854775807 % 169);
                            var_20 = (max(749712402, 19206));
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 11;i_9 += 1) /* same iter space */
                        {
                            var_21 = ((~(var_9 % 3470573868)));
                            var_22 *= ((146 - (arr_11 [i_7] [i_7] [i_0] [i_9 + 2] [i_9 - 2])));
                        }
                    }
                    for (int i_10 = 0; i_10 < 0;i_10 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_23 = (-10 <= 140);
                            arr_36 [i_0] [i_2] [i_0] [i_10] [i_11] [i_2] = ((((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2]) ? 1 : -1662410714)));
                        }
                        arr_37 [i_0] [i_2] [i_1 + 2] [i_10] = (!(((0 ? (max(2, var_6)) : var_3))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
