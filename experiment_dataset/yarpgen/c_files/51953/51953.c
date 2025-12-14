/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_18 *= 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = (52 ? (arr_7 [i_0] [i_0] [i_0 + 1]) : var_13);

                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        var_19 *= (((arr_5 [i_0 + 1]) ? (((95 ? 4 : 1631))) : var_11));
                        var_20 = (min(var_20, ((((arr_5 [i_1]) < ((((arr_0 [7] [i_1]) / 8))))))));
                        var_21 = (max(var_21, ((72053195991416832 ? var_14 : (arr_12 [i_1] [5] [i_2])))));
                        var_22 = (arr_6 [i_0] [i_1] [i_3 - 1]);
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_23 = 8633655123252634913;
                        arr_16 [i_0] [2] [i_2] [i_4] = (((arr_7 [i_0] [i_0 - 1] [i_2]) && (arr_0 [i_0 + 1] [i_0 - 1])));
                        var_24 = (max(var_24, (arr_15 [i_0 - 1] [i_0] [i_0] [i_0])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_25 = ((-567152962619448831 / var_10) * var_7);
                        arr_19 [i_0] = -111;
                        var_26 = (arr_15 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_5 - 1]);
                        var_27 = ((!2082266371267893590) ? (((arr_18 [i_0] [i_1] [i_0] [i_2] [4] [1]) / (arr_15 [9] [i_1] [i_1] [i_1]))) : (arr_7 [i_0] [i_1] [4]));
                    }
                    var_28 -= 15824;
                }
            }
        }
        var_29 = var_5;

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_30 = ((64512 ? -1 : (arr_20 [i_6] [i_0] [i_0])));
            arr_23 [i_0] = ((!(~-6943)));
            var_31 = (1 - var_9);
            var_32 = (3686714579361311173 != (((arr_20 [i_0 + 1] [i_0] [i_0 - 1]) & 0)));
        }
        var_33 = -64;
    }
    #pragma endscop
}
