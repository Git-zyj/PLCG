/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [0] [0] = (((((var_3 < (arr_1 [i_0] [i_0])))) == (arr_0 [i_0])));
        var_17 = (~1);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_18 = (606723480 + 606723480);
            var_19 = (1 - -1);
        }
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_0] [i_0] = var_9;
            arr_9 [9] [9] [15] = ((((((arr_1 [2] [i_0]) || 13))) != (arr_7 [2] [i_2 - 2])));
            arr_10 [i_0] = ((!(((-21768 ? var_7 : var_2)))));
            arr_11 [i_2 - 2] = -1;
        }
        var_20 = (max(var_20, (((~(arr_3 [i_0] [i_0]))))));
    }
    var_21 = (max((max(var_1, (max(-1076, var_11)))), 21751));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 20;i_5 += 1)
            {
                {
                    var_22 *= ((!(((arr_16 [i_5 + 4] [i_5 + 1]) || 1))));
                    var_23 += (arr_18 [9] [i_5 + 3] [8] [1]);

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_24 = (-9223372036854775807 - 1);
                        arr_23 [i_3] [1] [i_4] [i_3] [i_3] [i_4] = ((!(((1001297429 ? 65535 : 221)))));
                    }
                    for (int i_7 = 2; i_7 < 23;i_7 += 1)
                    {
                        var_25 |= (arr_24 [i_3] [i_4] [i_4]);
                        arr_28 [i_3] [i_3] [i_3] [i_7 - 2] [i_3] [i_3] = arr_27 [i_3] [i_4] [i_5 + 1] [i_7 - 2] [i_3] [i_4];
                        var_26 -= var_2;
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_27 = 1;
                        var_28 ^= ((-((+(min((arr_20 [17] [i_4] [15] [i_8]), 18446744073709551615))))));
                        var_29 = (min(var_29, 21771));
                        var_30 = (((arr_18 [i_5 + 4] [i_5 + 1] [10] [10]) & (((min((arr_21 [i_5 + 3] [i_5 + 3] [i_5 + 4] [i_5 + 1] [23]), (arr_21 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5])))))));
                        var_31 = var_3;
                    }
                }
            }
        }
    }
    #pragma endscop
}
