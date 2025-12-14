/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27197
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_6 [8] [10] [23] = ((var_0 && ((((arr_5 [8]) % (arr_5 [i_0]))))));
                    arr_7 [16] [0] [1] [23] = 65535;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [0] [4] [1] [2] [8] [11] = ((-(0 % 65529)));
                                var_20 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((var_17 >> ((min(var_0, 1)))));

    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_16 [7] = 141;
        var_22 = (min((arr_11 [23] [11] [22] [i_5] [11]), ((min((arr_11 [12] [i_5] [19] [0] [9]), (arr_11 [5] [0] [i_5] [i_5] [16]))))));
        var_23 |= ((~((((23 ? 1879048192 : 6))))));
        var_24 = 0;
    }
    var_25 = var_2;
    #pragma endscop
}
