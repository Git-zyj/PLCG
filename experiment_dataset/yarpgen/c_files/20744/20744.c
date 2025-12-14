/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = ((-(max(18446744073709551613, 33554431))));
                            var_14 = (min(var_14, (var_2 == var_6)));
                            var_15 += var_9;
                        }
                    }
                }

                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_16 *= (arr_10 [i_0] [i_1] [i_0] [i_5]);
                        arr_17 [i_0] [i_4] [10] = (65535 && 3);
                        var_17 = var_4;
                        var_18 = (max(((min(65535, 6))), (~16)));
                    }
                    arr_18 [i_4] = (min((min(var_6, var_4), var_1)));
                    arr_19 [i_4] [1] [i_1] [i_4] = (min(((2 ? 0 : 4398042316800)), ((max((arr_2 [i_0 + 2] [i_0]), var_8)))));
                }
                var_19 = (((((((((arr_4 [i_1]) <= var_3))) | var_12))) ? var_6 : (((((((arr_2 [i_0] [i_1]) ? var_5 : var_2)) >= (((arr_14 [i_1]) ? (arr_3 [i_0] [0]) : var_3))))))));
            }
        }
    }
    var_20 = ((((var_10 ? var_5 : var_4))));
    var_21 = var_12;
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            {
                                arr_31 [i_6] [i_6] [i_8] [i_6] [i_10] = -65535;
                                var_22 = (arr_29 [i_6] [i_7] [i_8 + 1] [i_6]);
                            }
                        }
                    }

                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        var_23 += 0;
                        var_24 = (min(var_9, var_0));
                        var_25 = (arr_26 [10] [12] [i_11]);
                        var_26 += ((min(var_8, (arr_30 [i_7] [i_8 - 2] [8] [i_8] [i_11]))));
                        var_27 = ((min((arr_25 [i_6] [i_6]), (arr_24 [i_6] [1] [i_11]))));
                    }
                    var_28 = (max((arr_26 [i_8] [i_8 - 3] [i_8]), (!var_2)));
                }
            }
        }
    }
    #pragma endscop
}
