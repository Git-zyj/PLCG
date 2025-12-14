/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((6 ? ((var_13 * ((var_9 ? var_16 : var_2)))) : ((((~2142668375) || 8388607)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (max((arr_0 [20]), var_10));
                                arr_12 [20] [i_4] [i_4] [i_0] = ((~((-6 ^ ((~(arr_4 [i_1] [i_1] [i_4])))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_1 + 1] [i_2] [i_2] = var_18;
                    arr_14 [15] [i_1] [i_2] [i_2] = ((((max(((var_0 ? (arr_1 [i_2]) : -8388606)), (min((arr_1 [i_2]), 15005))))) ? (arr_10 [2]) : (arr_11 [i_0] [i_0] [i_0] [14] [i_0])));
                }
            }
        }
    }
    var_21 = -9735;
    var_22 = var_8;
    #pragma endscop
}
