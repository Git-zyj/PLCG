/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((max(var_5, (1 & var_4)))) ? -10656 : ((-10660 ? var_9 : var_6))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_11 *= (~var_2);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_12 *= (min(((-((-(arr_3 [i_2]))))), ((max((max((arr_5 [i_2] [i_1]), (arr_7 [i_0] [i_0] [i_2] [i_3]))), (max(-10649, 161)))))));
                            var_13 = (max((arr_3 [i_1]), (~10652)));

                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_14 = (arr_0 [i_3]);
                                var_15 = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
