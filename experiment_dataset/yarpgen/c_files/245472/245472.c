/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= ((var_6 ? ((((((var_2 ? var_4 : var_17))) ? ((var_6 ? (-32767 - 1) : var_0)) : var_8))) : 23));
    var_19 = (min(var_19, var_16));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = ((((max(var_5, (((arr_2 [i_0]) ? var_7 : var_4))))) && (((((((arr_0 [i_0] [i_0]) ? var_15 : 19))) ? (arr_1 [i_0]) : (arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = ((((((7063507618859850642 ? -7063507618859850656 : 1433))) < (arr_6 [i_1]))));
                    var_22 = ((((!(arr_6 [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_1] [i_3] [i_3] = ((!(((-(arr_9 [8] [i_1] [12] [i_1] [i_2]))))));
                                arr_14 [i_0] [i_0] [i_1] = ((0 ? 7 : 8122158994031079065));
                            }
                        }
                    }
                    var_23 ^= -1342;
                }
            }
        }
        var_24 *= (((!(arr_6 [i_0]))));
    }
    #pragma endscop
}
