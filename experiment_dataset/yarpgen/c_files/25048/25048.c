/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25048
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [7] [i_1] = (max(-44, -1));

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_12 = (((arr_7 [i_2 - 1] [i_1] [i_1] [i_1]) ? (((-4084754376590269573 ? (arr_7 [i_2 - 1] [i_1] [i_1] [i_1]) : (arr_7 [i_2 + 2] [i_1] [i_1] [i_2])))) : ((4084754376590269570 ^ (arr_7 [i_2 - 1] [i_1] [i_1] [i_2])))));
                    var_13 = (max(var_13, ((min(120, 84)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [0] [i_4] [0] [i_4] &= (((max(var_8, var_4)) + var_1));
                                arr_17 [i_0] [i_0] [i_1] [i_1] [6] [i_3] [i_4] = (((((!((min(-4084754376590269591, (arr_0 [i_1]))))))) >= -116));
                            }
                        }
                    }
                    arr_18 [i_1] = var_4;
                }
            }
        }
    }
    var_14 |= (!var_5);
    #pragma endscop
}
