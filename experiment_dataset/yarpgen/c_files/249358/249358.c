/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (min((var_11 + var_3), (min(0, (((-1 ? -14875 : 1412953064)))))));
    var_15 += var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_1] [5] [i_2] [i_4] = 18446744073709551615;
                                var_16 = (max(((0 - (((1412953064 + (arr_5 [i_1] [4] [i_4])))))), (((arr_9 [i_1] [i_2 - 2] [i_2 - 1] [i_2 - 1] [i_2 + 1]) ? (max(var_0, (arr_7 [i_4] [i_4] [i_4] [i_4] [i_4]))) : ((var_9 ? 157 : 10963683056025391509))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_17 += ((((max(2992597530605140162, -28636)) != 251)) ? 29676 : ((-(var_6 | 65527))));
                                var_18 = (-95 - var_3);
                            }
                        }
                    }
                    var_19 = (min(var_19, 49729));
                }
            }
        }
    }
    #pragma endscop
}
