/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40479
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = ((((((arr_4 [i_0] [i_0]) ? (arr_4 [i_4 + 2] [i_3]) : var_11))) || ((min((((var_1 >> (10145375809496102256 - 10145375809496102231)))), ((var_10 ? var_11 : (arr_0 [i_0] [1]))))))));
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_3] [i_0] = (4009460756795472243 >> ((((var_8 ? 13722016878416213243 : (arr_12 [i_3] [i_1] [i_2] [i_3] [i_4 - 1] [i_0] [1]))) - 13722016878416213223)));
                            }
                        }
                    }
                    var_14 = (max(-var_12, (((arr_9 [i_0] [9] [i_2] [i_0]) ? (arr_9 [i_2] [i_2] [11] [i_0]) : (arr_9 [i_1] [i_1] [i_2] [i_2])))));
                    arr_14 [i_0] [i_1] [i_2] = ((!(((~(arr_4 [i_0] [i_1]))))));
                }
            }
        }
    }
    var_15 = var_8;
    #pragma endscop
}
