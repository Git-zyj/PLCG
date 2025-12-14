/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((((var_10 ? var_7 : ((var_5 ? var_0 : var_3))))))));
    var_13 *= 14357;
    var_14 = (!var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] |= (((((((arr_3 [i_0] [i_0] [i_1]) ? (arr_0 [i_0]) : var_3))) ? ((255 ? var_0 : (arr_0 [i_0]))) : (((min(var_9, (arr_4 [i_0] [i_1] [i_1]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 = (arr_9 [i_1] [i_1 + 1] [i_2]);
                                var_16 = 61234;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
