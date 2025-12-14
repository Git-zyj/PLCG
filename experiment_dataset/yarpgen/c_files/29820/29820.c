/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_18 = (max(var_18, (arr_0 [i_0])));
        var_19 = (max(-17472, -982182277));
    }
    var_20 = ((min(var_10, var_11)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            {
                arr_9 [i_1] [i_2] = (((((4056424986 / var_14) || ((((arr_3 [i_1]) ^ (arr_7 [i_1])))))) ? 54603 : ((max((arr_2 [i_1] [i_2 + 3]), 0)))));
                var_21 = (max((max(var_10, (arr_4 [i_2 + 1]))), (((arr_2 [i_2 + 3] [i_2 - 2]) ? (arr_2 [i_2 - 2] [i_2 + 3]) : (arr_2 [i_2 - 1] [i_2 - 2])))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        {
                            var_22 ^= ((((max((arr_5 [i_1] [i_2 + 1]), 29))) >> (-64711 + 64722)));
                            arr_15 [1] [i_2] [i_3] = (arr_4 [i_2]);
                            var_23 += (!var_8);
                        }
                    }
                }
                arr_16 [17] [i_2] [i_2] = (((((-(min((arr_3 [i_1]), var_12))))) / (arr_10 [i_1] [13] [i_2] [i_1])));
            }
        }
    }
    #pragma endscop
}
