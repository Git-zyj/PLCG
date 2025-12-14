/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, -1021795929));
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_17 |= (max((((!(var_8 | var_14)))), (min((min(776837838, -1021795914)), -12586))));
                                arr_12 [i_0] [11] [21] [11] [i_2] [i_0] [12] = (3779131605 * 0);
                            }
                        }
                    }
                    arr_13 [i_0] [i_2] [2] [i_1] = ((4 ? 6 : 252));
                }
            }
        }
    }
    var_18 ^= ((((4398046509056 * 65529) / (var_0 / var_13))));
    var_19 = (min(var_19, 27061));
    #pragma endscop
}
