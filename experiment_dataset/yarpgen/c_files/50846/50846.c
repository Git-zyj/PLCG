/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50846
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50846 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50846
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [3] = (min((((arr_3 [i_0] [i_1 + 1] [i_1 + 2]) ? 70 : var_4)), var_8));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 += ((((arr_4 [i_3]) ? (arr_4 [i_3]) : var_4)));
                            arr_12 [1] [i_2] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : 198)) << (((arr_1 [i_0]) - 48813))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_20 = min(((~((var_6 ? 2673391247 : var_13)))), ((((arr_9 [i_4] [i_4] [i_4] [i_4 - 1]) ? (arr_14 [i_4 + 1]) : (arr_7 [i_4 - 1])))));
        arr_15 [i_4] = (arr_9 [i_4] [i_4] [i_4] [1]);
        arr_16 [1] = (arr_14 [i_4 + 1]);
        var_21 = -2673391256;
    }
    var_22 = 2673391247;
    #pragma endscop
}
