/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_6 ? var_0 : var_4)))));
    var_15 = (max(var_15, ((max(((1 ? 1 : 1)), -2147483643)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (((((((2114939917 << (var_13 - 47258)))))) % 353766023));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] = (((arr_10 [i_3 - 2]) ? (arr_10 [i_3 - 1]) : 1));
                        var_17 = (var_7 % 45561);
                        var_18 = -549557538;
                        arr_12 [i_0] [i_0] [i_1] = ((var_9 | (3423513476 <= 1)));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] = var_5;
                            var_19 = (arr_0 [6]);
                            arr_16 [i_0] [i_1] [i_2] [i_3] = (((24535 | 485625266) ? 0 : var_11));
                        }
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_20 = (((arr_3 [i_0]) == 1));
                        var_21 = var_10;
                        var_22 &= (arr_6 [i_0] [i_1] [i_2] [i_5]);
                        arr_19 [i_5] [i_2] [i_1] [i_0] = (-var_9 ? var_11 : 0);
                    }
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        arr_23 [i_0] [i_0] [i_0] [3] [i_0] = 1;
                        arr_24 [11] [i_6] [i_2] [i_1] [2] [i_0] &= ((-31619 ? 1 : 1319109835));
                    }
                    var_23 = (18418166184134890526 && -485625269);
                    var_24 = (max(var_24, ((((var_3 + 485625277) + (arr_2 [i_0] [i_1] [i_0]))))));
                    arr_25 [i_0] [i_0] [i_0] [i_0] = 152;
                }
                var_25 &= ((((max(((1923435562 ? var_3 : 327049647)), -1))) + (((arr_9 [i_0] [i_1] [i_0]) - -549557537))));
            }
        }
    }
    #pragma endscop
}
