/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201421
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_17 = (max((((((arr_5 [3] [10]) ? var_4 : (arr_7 [i_0] [i_0] [i_0]))) | var_6)), (((max((arr_0 [3]), (arr_7 [i_0] [i_0] [i_0])))))));
                    var_18 = (4095 >> 0);
                    var_19 = ((-(min((arr_6 [i_0] [0]), (arr_0 [i_0])))));
                }
            }
        }
        var_20 &= (arr_8 [i_0] [i_0] [5] [i_0]);
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    var_21 -= ((!(((((var_13 >> (var_6 + 28577)))) && 4080))));
                    arr_13 [i_3] [i_3] = (arr_6 [i_4] [i_3 + 3]);

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_22 = ((-((-(arr_9 [5] [i_3 + 2])))));
                        var_23 = (((((arr_1 [i_3 - 3] [i_4]) - (arr_1 [i_3 - 3] [i_5])))) ? (arr_1 [i_3 - 3] [i_3 - 3]) : -26);
                        arr_16 [i_0] [1] [1] [1] [i_0] |= var_4;
                    }
                    for (int i_6 = 1; i_6 < 9;i_6 += 1)
                    {
                        arr_20 [i_3] = (arr_1 [i_3] [5]);
                        arr_21 [i_0] [i_3] [i_4] [1] = ((arr_0 [i_0]) ^ (((max((arr_0 [i_6]), var_9)) >> (((min((arr_0 [i_0]), 2198754820096)) - 2198754820073)))));
                    }
                }
            }
        }
    }

    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        arr_25 [8] [i_7] = ((-(var_12 ^ var_15)));
        var_24 = ((-((var_0 ? ((var_10 ? (arr_24 [i_7] [i_7]) : (arr_22 [1]))) : (min(1640994522, var_12))))));
        arr_26 [i_7] = ((((var_14 ? -var_5 : (~-19))) - (((-((9 ? var_15 : (arr_24 [i_7] [i_7]))))))));
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_30 [i_8] = (arr_29 [i_8]);
        arr_31 [i_8] [i_8] = ((-(min(var_6, 3032805132))));
    }
    #pragma endscop
}
