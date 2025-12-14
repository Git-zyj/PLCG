/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 13091149114596260212;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_17 ^= (((((var_12 ? 6988090687610431948 : var_4)) - (!var_0))));
                    var_18 = (((((91 ^ 1) ? -1470465265123048074 : (arr_1 [i_0 - 1]))) >> ((var_2 * (!154)))));
                    var_19 = var_14;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] [i_4] = ((((max(var_13, (arr_9 [i_1] [i_1] [i_1] [i_2 + 3])))) ^ (!14890681920939914187)));
                                var_20 = (((((var_1 | (arr_1 [i_4])))) != (max(-2179101241916623908, var_2))));
                                var_21 = (max(var_21, ((max(0, ((min(var_12, (((arr_3 [i_0 - 1]) ? (arr_13 [i_0 - 3] [20] [i_1] [i_2 + 1] [i_3] [i_4]) : 191))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
