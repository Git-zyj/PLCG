/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20596
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [5] [i_1] [i_2] [i_1] [i_0] [i_1] [i_4] = ((var_11 || (var_8 || 4408336994300777210)));
                                var_15 = (min(var_15, (((321546004 & (((arr_11 [i_0] [i_0] [i_3] [i_3] [i_4]) & var_5)))))));
                                arr_13 [i_0] [i_3] [i_0] [i_0] [i_1] [i_0] = (((102 >> 1) != -2216));
                                arr_14 [i_0] [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] = (((arr_5 [i_4] [i_0]) >= (arr_3 [i_3] [i_0])));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] [i_0] = (1 | var_0);
                }
            }
        }
        arr_16 [i_0] [i_0] = (((arr_5 [i_0] [i_0]) <= (!67107840)));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_16 = var_0;
        arr_19 [i_5] = (-812490836 >= (var_12 + 32767));
    }
    var_17 = (!(var_3 > var_4));
    var_18 = var_14;
    #pragma endscop
}
