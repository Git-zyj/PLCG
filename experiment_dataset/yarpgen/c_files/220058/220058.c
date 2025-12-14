/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (((((!var_1) && (((var_18 ? 8 : 1))))) ? ((-(arr_3 [i_1] [i_2]))) : (((!(((~(arr_3 [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3 - 2] [i_4] = (((((-(!238)))) ? 7514 : -836));
                                arr_17 [i_0] [i_2] [i_2] [i_3] [i_3] [i_4] = ((!((!(((var_6 >> (((arr_5 [i_0] [i_0]) - 1540831239)))))))));
                            }
                        }
                    }
                    var_21 &= 58033;
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_22 -= (+(((46200 > 19331) ? (arr_19 [i_5] [i_5]) : (arr_18 [i_5]))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_24 [i_5] [i_5] [24] = (arr_18 [i_5]);
            arr_25 [i_5] = 1;
        }
        arr_26 [i_5] = (max(((((((-1030908962732263747 ? var_1 : var_10))) & 8))), ((((((arr_22 [i_5]) / 4))) ? 1 : var_4))));
    }
    var_23 = var_10;
    #pragma endscop
}
