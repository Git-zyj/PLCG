/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    var_17 = (min(var_4, var_0));

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_18 = (min(var_18, var_0));
        var_19 = var_4;
        var_20 = (max(var_20, (~-35)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_21 = (min((max((arr_2 [i_1]), (arr_4 [i_0] [i_1]))), ((~(arr_0 [i_0 + 2] [i_1])))));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_22 = var_15;
                            arr_16 [i_0 + 2] [i_3] [i_3] [i_4] [i_3] [i_3] [i_3] &= var_15;
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            arr_20 [i_5] = (min((min((arr_15 [i_0]), (max((arr_1 [i_0] [i_0]), var_6)))), ((max(var_3, var_6)))));
            var_23 = (min(var_23, ((max((((!((max(var_7, var_2)))))), var_13)))));
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_24 = arr_22 [i_6] [i_6];
        var_25 = (max(((max((arr_14 [i_6] [i_6] [i_6]), var_7))), (max(-27, 1409485468))));
        arr_24 [i_6] [i_6] = (min((min(var_5, var_13)), ((min((arr_11 [i_6] [i_6]), (arr_11 [i_6] [i_6]))))));
    }
    var_26 = var_8;
    #pragma endscop
}
