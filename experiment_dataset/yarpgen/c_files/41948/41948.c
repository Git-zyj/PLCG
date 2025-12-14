/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41948
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_17 -= var_10;
                                var_18 = (max(var_18, (((max(var_1, 30144))))));
                                var_19 += (((((!(arr_13 [i_0 - 1] [i_4 - 2] [9] [i_4] [i_4] [i_4 - 1])))) == (arr_13 [i_0 - 1] [i_0 - 1] [i_0] [i_3] [i_0 - 1] [i_4 - 1])));
                            }
                        }
                    }
                }
                arr_17 [0] [i_0] [1] = (~-8878341448183847165);
            }
        }
    }
    var_20 = var_11;
    var_21 = ((((max((min(var_1, 85)), ((var_10 ? var_0 : var_2))))) ? (((var_8 != 23985) ? ((36777 ? var_2 : 856631786)) : (var_5 && var_9))) : (max((((var_2 + 2147483647) << var_13)), 35405))));
    var_22 = (max(var_22, 12041542218745882162));
    #pragma endscop
}
