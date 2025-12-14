/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_0] [12] [16] [i_0] = (((arr_7 [i_0] [i_4]) - (min((arr_8 [i_0 - 1] [i_0] [i_1 - 1] [i_1] [i_1 - 2]), var_1))));
                                var_20 = (min(var_20, 19));
                                arr_11 [1] [i_0] [i_2] = (min(110, (arr_7 [i_0] [i_4])));
                            }
                        }
                    }
                    var_21 *= arr_3 [i_0];
                    var_22 = (((65535 / -20) ? (((!((min((arr_5 [i_2] [i_0] [i_0] [i_0]), var_11)))))) : ((var_10 >> (((arr_2 [i_0 - 1]) + 576878863))))));
                    var_23 += min(((((((arr_9 [i_0] [i_1] [9] [i_0] [i_0 + 2] [i_0]) ? 19 : (arr_5 [i_0] [i_0] [i_2] [i_2]))) / (var_3 / -5925)))), -16505228776680857642);
                    var_24 = ((-((var_11 ? ((0 + (arr_2 [i_2]))) : (min(var_3, var_10))))));
                }
            }
        }
    }
    var_25 = var_0;
    var_26 += var_14;
    #pragma endscop
}
