/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (max(65515, 0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((~((6 << (((arr_5 [i_0] [i_1] [i_2 + 1]) - 43842))))));
                    arr_9 [i_0] [i_1] [i_2 + 1] = (((arr_2 [i_0]) / (arr_2 [i_2 + 1])));
                    var_18 = min(((((arr_4 [8]) || (~65529)))), 10);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((23 ? ((max(1361403968, -1133703906))) : 6480629001897558947));
                                var_20 = (max((max(1133703905, 9223372036854775807)), (20 - 2437270276)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_21 = (!1);
                                var_22 |= (min(4294967265, 4294967279));
                                var_23 = (max((arr_15 [12] [12] [15] [15]), (31 && 1)));
                                var_24 = ((!((max((arr_16 [i_0] [i_1 + 1] [15] [i_5 + 3]), (arr_16 [i_0] [i_6] [i_2] [i_5]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_25 = var_15;
    var_26 += -1;
    #pragma endscop
}
