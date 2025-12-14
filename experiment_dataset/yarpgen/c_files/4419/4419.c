/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_15;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] = (!-1367258415);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_17 = (((((!(((91 ? var_2 : (arr_0 [i_0]))))))) > -1367258415));
                                arr_18 [i_0] [i_2] [i_2] [i_1 - 2] [i_0] [i_0] = (arr_14 [i_0 - 1] [i_1 - 2] [i_0 - 1] [i_3 - 1] [i_3 + 1]);
                                var_18 = (max(var_18, ((min((arr_12 [i_2] [i_2] [i_2] [i_1 + 1]), (((-1367258414 ? 215 : 4294967295))))))));
                            }
                        }
                    }
                }
                var_19 = (var_7 / var_11);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            {
                                var_20 = ((-32 ? -64 : 3166832228));
                                arr_27 [i_0] [i_1 - 1] [i_0] [15] [i_7] = (arr_25 [9] [i_0 + 1] [i_1 + 2] [i_7 + 1] [i_7]);
                                arr_28 [i_0] [i_0] [i_0 + 1] [i_0] = var_10;
                                var_21 = (((var_15 & 1367258391) ? var_12 : var_4));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 9;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 7;i_9 += 1)
        {
            {
                arr_33 [i_8 + 1] [i_8] = ((15914 ? 3798 : 6363309132847891321));
                var_22 += ((((((~1) ? 103 : (arr_7 [7] [i_8])))) ? ((min(((max(64, 64))), ((0 ? -1 : 5997))))) : 9223372036854775807));

                for (int i_10 = 0; i_10 < 10;i_10 += 1)
                {
                    var_23 += arr_3 [6];
                    arr_38 [i_8] [i_8] [i_9] [4] = var_14;
                    var_24 = var_9;
                    var_25 &= (max((((var_7 ? ((var_12 ? 0 : 42404)) : var_5))), 3166832228));
                }
                var_26 = 38;
            }
        }
    }
    var_27 = -41;
    #pragma endscop
}
