/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 -= (!151);
                    arr_7 [8] [8] [i_2] [i_2] = ((151 ? 81 : 0));
                }
            }
        }
    }
    var_11 = var_4;
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                arr_14 [i_3 - 1] [i_3 - 1] [i_3] &= (max(4294967295, var_0));
                var_12 = ((((min((arr_8 [i_3 - 1] [i_4 + 1]), (var_9 - 81)))) ? var_5 : ((((arr_9 [i_3 - 1]) + 255)))));
                arr_15 [i_3] [i_3] = (max(0, (((((var_7 ? (arr_12 [i_3]) : 0))) ? -0 : (arr_10 [i_4])))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 21;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_26 [i_5] [i_6 + 1] [i_7] = var_4;
                                var_13 = (max(var_13, 23));
                                arr_27 [i_4] = ((+(((arr_22 [i_3] [i_4] [17] [10]) ? (arr_24 [1] [i_4] [i_4] [i_6] [i_7] [15]) : 26808))));
                            }
                        }
                    }
                }
                var_14 = -49;
            }
        }
    }
    var_15 = 26818;
    var_16 = var_3;
    #pragma endscop
}
