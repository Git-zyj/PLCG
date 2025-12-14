/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_6 [i_0] [1] [0] &= (~-1653506783);
            var_15 = ((0 + (arr_0 [i_1 + 1])));
            var_16 = (~17);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_17 = (((0 ? (arr_7 [i_2]) : 0)));
                    var_18 = -61;
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_19 &= 0;
        arr_15 [i_4] = (!var_14);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_20 &= arr_16 [i_5];
        var_21 ^= ((!(arr_18 [i_5])));
    }
    var_22 = (max((((var_0 + (~0)))), var_9));
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 20;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            {
                                arr_32 [i_6] [i_6] [i_8] [i_8] = (max(2, -4684499467632477817));
                                var_23 &= -2018733585;
                                var_24 = 27;
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_25 -= ((!((((((var_11 % (arr_20 [i_6] [i_6])))) ? ((((arr_13 [i_6]) ? -1653506783 : (arr_18 [i_11])))) : (max((arr_11 [i_7]), (arr_25 [i_7] [i_8] [i_11] [1]))))))));
                        var_26 -= (min((-2147483647 - 1), (!-6642887157561247061)));
                    }
                    for (int i_12 = 0; i_12 < 20;i_12 += 1)
                    {
                        var_27 &= (max((max(((min((arr_30 [i_6] [i_6] [i_7 + 2] [2] [i_8] [16]), var_4))), (arr_23 [i_7 + 2]))), (((!(arr_24 [i_8] [6] [i_8] [19]))))));
                        arr_40 [i_6] [i_7] [i_7 - 1] [1] [i_12] = (max((max((arr_20 [i_6] [i_6]), (arr_20 [i_7] [i_7 - 2]))), (max(255, (arr_20 [i_7 + 3] [i_6])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
