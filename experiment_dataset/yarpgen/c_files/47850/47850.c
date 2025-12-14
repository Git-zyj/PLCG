/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((min(var_4, (max(-13, 168))))) + ((((max(119, 183))) * ((0 ? 119 : var_18))))));
    var_21 = var_15;
    var_22 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_11 [i_0] [2] [2] = (min((((((max(164, var_2)))) / (8116556774493762181 - 168))), (max((arr_2 [i_2]), var_5))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_0] [i_3] [i_3] = (((((arr_6 [22] [i_2]) + 2147483647)) >> ((((((15050 ? 8116556774493762181 : 1322869221))) || var_3)))));
                        arr_15 [i_3] = (!((min((arr_5 [i_0 - 1]), (arr_5 [i_0 + 2])))));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0] [2] [i_1] [i_2] [i_4] [2] [i_5] = (((arr_18 [i_2] [4] [i_0 + 1] [14]) ? var_0 : (arr_18 [i_0] [i_0] [i_0 + 3] [i_0])));
                            arr_21 [i_0 + 2] [i_0 + 2] [i_4] [15] [15] [14] [i_0 - 1] = ((139 - (7582 < var_8)));
                            var_23 = 6431035581717299910;
                            var_24 += 28;
                        }
                        arr_22 [i_0] [i_4] [i_1] [12] [i_4] [i_4] = -302450053;
                    }
                }
            }
        }
    }
    #pragma endscop
}
