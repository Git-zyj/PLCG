/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237337
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [10] = (~-26866);
        var_16 = (((arr_0 [i_0]) || (arr_1 [i_0] [i_0])));
        var_17 |= (arr_1 [i_0] [i_0]);
        var_18 = (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_19 = (-26867 - -1085671966);
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 18;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_20 = (min(var_20, (((!((max((arr_3 [19]), (max((arr_9 [i_1] [i_2]), -107))))))))));
                                arr_18 [2] [i_4] [i_2] [i_2] [i_1] = (arr_14 [i_4 - 1] [i_4 - 1] [i_4] [i_4]);
                                var_21 = min((arr_3 [i_3 - 1]), (max((arr_9 [i_5] [i_2]), 223)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
