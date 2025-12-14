/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197464
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= 4095;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = (max(-4563145920500829229, -1113132926));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_3] [i_1] [i_3] [i_3] [i_3] = var_12;
                                var_21 = (-4096 ? 55928 : 1);
                                var_22 = (min(var_22, 119));
                                var_23 = ((((arr_11 [i_4] [i_3] [0] [i_1 - 2] [i_0]) ? (((arr_5 [0] [i_4] [i_4]) * (arr_4 [i_0] [i_0] [i_0]))) : 4085)));
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_24 = var_5;
                                var_25 = (((max((arr_15 [i_3] [i_2 + 1] [i_2 - 1] [i_2 + 2]), ((max(var_5, 0))))) + ((((max((arr_4 [i_0] [i_0] [17]), var_15))) ? ((((!(arr_8 [13] [i_3] [13] [1]))))) : (~var_10)))));
                                var_26 *= (max(208, 4095));
                            }
                            arr_19 [i_3] [5] [20] = ((max(-4105, 472862403)));
                            arr_20 [i_3] = (max((arr_2 [i_1 - 1]), -var_14));
                        }
                    }
                }
                arr_21 [i_0] [13] = ((-4118 ? 145 : 433854963737690417));
                var_27 &= (~4116);
            }
        }
    }
    var_28 = var_16;
    var_29 = var_3;
    var_30 = (max(262143, 65515));
    #pragma endscop
}
