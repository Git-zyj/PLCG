/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((116 != -103) ? (min(((-5605220254538679722 ? (arr_0 [5] [6]) : var_1)), (-117 - 46))) : (((((((arr_2 [i_0] [i_1] [i_1]) ? 52429 : 116))) ? (arr_3 [i_1] [i_0 + 3] [i_0 + 3]) : (arr_2 [i_0 + 2] [i_0 + 3] [i_0]))))));
                var_17 = (min(var_17, (((((~(min(2798977777, var_14)))) + (arr_0 [i_0] [i_1]))))));
                arr_5 [i_0] = ((!(((~(arr_3 [i_0 + 2] [i_1] [i_1]))))));
                arr_6 [1] [i_1] [i_1] = (arr_1 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = ((-(((arr_12 [i_0 + 2] [i_1]) % (((var_3 * (arr_7 [i_0 + 2] [8] [i_2]))))))));
                            var_19 += var_11;
                            arr_13 [i_3] [4] [i_1] [4] = (max(8371, 95));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
