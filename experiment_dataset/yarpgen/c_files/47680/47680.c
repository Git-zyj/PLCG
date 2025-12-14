/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((-var_3 * 0) ? ((min(1, var_6))) : ((var_6 ? 251 : var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_15 [i_3] [i_1] [i_3] = (arr_2 [i_4] [i_0]);
                                arr_16 [i_0] [i_3] [i_0] [11] [8] = ((arr_6 [i_0] [i_0]) ? (arr_2 [i_4] [i_0]) : (((1 && ((min(4096, 251)))))));
                                var_13 = (max(var_13, (!1)));
                                var_14 = (max(var_14, ((max(1, ((2980969749 ? 0 : 4)))))));
                            }
                        }
                    }
                }
                arr_17 [i_0] = (arr_0 [i_0]);
                var_15 = ((((((((~(arr_10 [2] [i_1] [i_0] [i_1] [i_1])))) ? (((0 * (arr_8 [i_1])))) : (arr_7 [i_0] [i_0] [i_0] [i_1])))) || (((min((arr_8 [i_0]), 170)) < ((50671 ? (arr_11 [i_1]) : (arr_0 [i_1])))))));
            }
        }
    }
    var_16 = (max(var_16, var_5));
    #pragma endscop
}
