/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_18 ? var_13 : -11863));
    var_20 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [i_1] = ((~(arr_10 [i_0])));
                    arr_12 [i_0] = (arr_6 [i_0] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_21 = var_1;
                                var_22 = (min(var_22, (((var_15 ? (arr_5 [i_3 - 2] [i_1]) : (arr_5 [i_3 + 1] [i_3 + 1]))))));
                                var_23 = ((!(arr_2 [i_3 + 1])));
                                var_24 = (min((min(-1, 140737488355327)), (((!(arr_7 [i_3 - 3] [i_3 - 3] [i_3 - 1]))))));
                            }
                        }
                    }
                    var_25 *= ((-((((min(7408740462659060371, var_5))) ? ((((arr_9 [17] [4] [17] [5]) ? var_11 : 65526))) : var_5))));
                }
            }
        }
    }
    #pragma endscop
}
