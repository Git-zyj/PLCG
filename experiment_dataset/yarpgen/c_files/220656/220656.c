/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_12 [i_1] [i_0] [i_0] [i_0] [i_0] = (((144 ? var_6 : ((min(140, 1))))));
                                var_14 |= ((~(arr_4 [24] [i_2] [24])));
                                var_15 *= (arr_2 [i_4]);
                                var_16 += ((144 | (112 - 101)));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = (((((1 ? (arr_9 [i_2] [i_4] [i_4 - 2] [i_0] [i_4 - 3] [i_4 - 2]) : ((101 | (arr_1 [i_3])))))) ? (((~(arr_10 [23] [i_0] [13] [i_2] [i_3] [24])))) : ((((!((min(116, -1105373855)))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                var_17 = var_5;
                                var_18 = ((var_1 + (max(-4169155828767815509, (arr_16 [i_5 + 2] [i_5 + 2] [i_5] [i_5 - 3])))));
                                var_19 += (((((((((arr_1 [i_0]) ? 154 : -2136660698))) < (max((arr_2 [i_0]), 5243539330959749193))))) <= -4169155828767815514));
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, (((2119652355 ? 144 : 1578600649)))));
    var_21 = (min((max(208, 127)), (var_11 >= var_4)));
    var_22 = (132 == 3);
    #pragma endscop
}
