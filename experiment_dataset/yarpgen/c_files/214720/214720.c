/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((var_17 ? var_15 : var_11))));
    var_20 = (1 <= 1);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (max(var_21, var_3));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_22 = (((arr_1 [i_1 - 1]) ? var_5 : (arr_9 [1] [i_0] [i_1] [i_0 + 1] [i_0])));
                            var_23 = (arr_3 [i_3]);
                            var_24 = (min(var_24, ((((((~(238 >= 0)))) ? (arr_9 [i_0] [i_0] [i_2] [i_3] [1]) : (max((max(var_17, var_2)), (arr_2 [i_0]))))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_25 = var_17;
                    arr_18 [i_4] [i_5] [i_4] [i_4] = var_13;
                    var_26 = (min(var_26, var_16));
                }
            }
        }
    }
    #pragma endscop
}
