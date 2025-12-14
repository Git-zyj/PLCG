/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236076
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(var_1, (max(var_2, var_13))))) ? var_6 : -5758619997780145341));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] = (((((arr_5 [i_1] [9]) && (arr_5 [i_1] [i_1]))) || ((max(124, 36)))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] = (max(((83 ? (arr_1 [i_1 + 2] [i_1]) : (arr_5 [i_1] [i_1]))), ((((arr_5 [i_1] [i_3]) < (arr_5 [i_1] [i_1]))))));
                            arr_14 [i_1 + 3] [i_1] = ((~((var_10 ? (((var_4 ? (arr_3 [i_0]) : (arr_2 [i_0])))) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
                var_20 = (arr_2 [i_0]);
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_22 [i_1] [i_4] [i_4] = arr_20 [i_0] [11] [i_4] [i_5 - 1] [i_6];
                                var_21 = var_4;
                                arr_23 [i_1] = 1856328562708790306;
                            }
                        }
                    }
                }
                var_22 = (((((-(((arr_4 [i_0]) ? 63 : 42))))) > var_16));
            }
        }
    }
    var_23 = var_15;
    #pragma endscop
}
