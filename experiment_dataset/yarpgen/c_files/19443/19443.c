/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19443
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_17 = ((((var_5 >> (((arr_1 [i_0 + 2]) - 1501492987))))) ? (min(4088, (arr_1 [i_0 + 1]))) : (min((arr_1 [i_0 + 1]), var_12)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_18 = 1;
                            var_19 = (min(var_19, 35260));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = ((0 ? 3129073572 : 16376));
                                var_20 = -var_11;
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = ((3484084793 ? -72 : (arr_8 [21] [i_3 + 1])));
                            }
                            arr_16 [i_1] [i_1] = var_10;
                        }
                    }
                }
                var_21 = (arr_9 [i_0] [10] [i_1] [1]);
            }
        }
    }
    var_22 = (min(var_22, (((~36028795945222144) ? var_7 : var_1))));
    #pragma endscop
}
