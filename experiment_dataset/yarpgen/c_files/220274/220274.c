/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (min(var_17, var_4));
                arr_5 [i_0] [i_1] = (((arr_3 [i_0 - 1] [i_0 - 2]) ? (((!(arr_2 [i_0 + 1] [i_0 + 1])))) : (((!(arr_4 [i_0 + 1] [i_0 - 1]))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_4] = ((-(arr_9 [i_4] [i_3] [i_1])));
                                var_18 += (((-(arr_7 [i_0] [i_1] [i_2] [i_0]))));
                                var_19 += ((3705994509 ? 1801755561563075755 : 0));
                                var_20 += (((var_3 * 1801755561563075755) ? ((var_5 >> (var_0 + 26390))) : var_4));
                                var_21 = ((((arr_1 [i_0] [5]) ? var_0 : (arr_4 [i_0] [i_1]))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_0] [i_1] [i_2] = (!4294967295);
                    var_22 += -520375718;
                    arr_16 [i_0 - 2] [i_0 - 2] [i_1] [i_2] = var_15;
                    var_23 = (!8190);
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 7;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 8;i_6 += 1)
                    {
                        {
                            var_24 = (min(var_24, var_4));
                            var_25 &= ((min(488332493, 252)));
                        }
                    }
                }
            }
        }
    }
    var_26 += (min(((min(var_10, var_5))), (var_0 | var_14)));
    var_27 = (~var_15);
    #pragma endscop
}
