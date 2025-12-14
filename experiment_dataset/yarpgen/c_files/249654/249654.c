/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = (max(var_12, (((+((var_8 * (((arr_0 [i_0]) - (arr_0 [i_0]))))))))));
        var_13 = var_3;
        var_14 = min((arr_0 [3]), (((0 || var_4) ? (min((arr_0 [i_0]), (arr_1 [15] [i_0]))) : (((!(arr_1 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 18;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [i_3] = (arr_11 [i_4] [i_3] [13]);

                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            arr_16 [i_1] [i_5] [i_5] [i_1] = ((-(arr_7 [i_3 + 2] [i_4] [i_4] [i_5 - 2])));
                            arr_17 [12] [i_5] [i_3] [i_5] [i_5 - 4] = (((arr_6 [i_3 + 2] [i_5 - 4] [i_4 - 2]) ? var_2 : (arr_6 [i_3 + 2] [i_5 + 1] [i_4 + 2])));
                        }
                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            var_15 = (min(var_15, var_7));
                            var_16 = (arr_6 [i_6] [i_3 + 1] [16]);
                        }
                        var_17 = -20761;

                        for (int i_7 = 2; i_7 < 19;i_7 += 1)
                        {
                            var_18 = (max(var_18, (((!(arr_6 [i_4 - 3] [i_3 + 1] [i_7 - 1]))))));
                            var_19 = 0;
                            var_20 = (min(var_20, (arr_18 [i_1])));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_21 = (-(0 < var_2));
                            arr_26 [i_1] [i_1] [i_8] [i_3] [i_4] [i_8] = var_4;
                        }
                    }
                }
            }
        }
        var_22 += var_9;
    }

    for (int i_9 = 0; i_9 < 21;i_9 += 1)
    {
        var_23 &= ((((arr_27 [i_9]) < (((var_5 || (arr_1 [i_9] [1])))))));
        var_24 = (var_9 != 0);
    }
    var_25 = (var_9 / var_6);
    #pragma endscop
}
