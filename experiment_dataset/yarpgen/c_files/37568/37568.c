/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = ((-(max((max(var_16, 776983059)), (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = (((!776983050) ? (max((((arr_10 [i_3] [i_3]) + 921600664)), (arr_10 [i_0 - 1] [i_3]))) : (arr_5 [i_0] [i_0])));
                            var_19 = (max((min((arr_7 [i_2 - 1] [i_2 + 2] [i_2]), (arr_7 [i_2 + 1] [i_2 + 2] [i_2 - 1]))), ((((((arr_9 [i_0] [i_0] [i_1] [i_2] [10]) ? var_16 : var_12)) != (arr_12 [i_0] [i_0] [i_0] [2]))))));
                            arr_13 [i_0 - 3] [13] [i_2 - 1] [i_3] = ((((max((((arr_4 [i_2 + 1]) - var_16)), (arr_11 [6] [i_2] [15] [i_0])))) ? (arr_5 [i_2] [i_2]) : var_7));
                            var_20 += (((arr_11 [i_0 - 1] [i_2 + 1] [i_2] [i_3]) ? (((arr_11 [i_0 - 1] [i_2 + 1] [i_1] [i_3]) << (((arr_11 [i_0 - 1] [i_2 + 1] [1] [i_3]) - 37674)))) : (((arr_11 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_3]) ^ (arr_11 [i_0 - 1] [i_2 + 1] [i_2] [i_3])))));
                            var_21 = min((max(6292249014132119610, (arr_12 [11] [i_2] [i_2] [i_2 + 1]))), (!22328));
                        }
                    }
                }
                var_22 = (-776983057 ? ((((min(-754694682786767100, 229))) ? (arr_2 [i_0]) : 7766183495111974445)) : (arr_9 [i_0 - 3] [i_0 - 3] [i_0] [16] [i_1]));
                var_23 = max(((max(-921600679, -4299))), (max(36191, (arr_7 [i_0] [12] [6]))));
            }
        }
    }
    var_24 = (max(((var_15 ? ((max(776983059, var_12))) : ((var_9 ? var_10 : var_9)))), (4294453790 & -1008852488)));
    #pragma endscop
}
