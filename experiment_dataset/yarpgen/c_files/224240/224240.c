/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = (min(var_17, (min(((min(1289239204, -2584112745156063021))), (((1677827747 / ((255 ? (-2147483647 - 1) : (-32767 - 1))))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_11 [6] [i_1] [6] [i_0] [i_1] = (min(127, (((min((arr_7 [i_0] [12] [i_4] [i_3 - 1]), 233)) / (1 * 1)))));
                                var_18 = (((min(((min(126, 0))), ((59801 ? (arr_1 [i_3] [i_2]) : var_9))))) ? (((0 ? (((1 ? (-127 - 1) : 21))) : 3101606591))) : (min((arr_7 [i_4] [i_3 + 1] [i_2] [i_1]), (((63 / (arr_8 [i_0] [i_1] [i_2] [i_1] [i_4])))))));
                                var_19 = (min(var_19, ((min((((arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 1] [i_3 - 3]) ? (arr_7 [i_3 + 1] [i_3 - 3] [i_3] [i_0]) : (arr_4 [i_3] [i_2] [i_1] [i_0]))), ((min((min((arr_2 [i_4]), (arr_10 [i_4] [i_1] [i_2] [i_3 - 1] [i_4] [i_0] [i_3 + 1]))), (!59783)))))))));
                            }
                        }
                    }
                }
                arr_12 [i_0] [i_0] = 3;
            }
        }
    }
    var_20 = var_11;
    var_21 = (min(-128, var_13));
    #pragma endscop
}
