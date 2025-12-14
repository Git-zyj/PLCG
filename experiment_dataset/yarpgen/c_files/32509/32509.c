/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32509
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
                arr_4 [i_0] [i_0] [i_1] = var_11;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_13 = (((-(max(1457044563, -7046)))));
                            var_14 = (max(((min((arr_0 [i_2 + 1]), 84))), (arr_8 [i_0] [i_1] [i_2 - 1])));
                            arr_10 [1] [i_0] [i_3 - 1] [i_3] = (arr_3 [i_0]);
                            var_15 = 118;
                        }
                    }
                }
                arr_11 [i_0] = ((((((arr_8 [i_1] [i_1] [i_0]) / 64))) ? (arr_8 [i_0] [i_1] [i_0]) : (arr_8 [i_1] [5] [i_0])));
                var_16 = ((((((max((arr_2 [i_0]), var_5))) ? (1452535946 / var_10) : var_1)) != -20));
            }
        }
    }
    var_17 = var_5;
    var_18 = var_4;
    var_19 = -20;
    var_20 = var_6;
    #pragma endscop
}
