/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_15 = (max(var_15, var_9));
        var_16 = (max(var_16, (((var_10 | (arr_1 [6]))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_4 [i_0] = (((arr_2 [i_0] [i_0] [i_1]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_2 [i_1] [i_1] [5])));
            arr_5 [i_0] [i_0] [i_1] = var_0;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [17] [i_0] [i_1] [i_2] [i_3] [i_3] = -1;
                        var_17 = (min(var_17, var_2));
                        arr_11 [i_0] [i_0] = ((arr_3 [i_3]) | 65533);

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_3] [i_4] = (arr_0 [i_0]);
                            var_18 = (max(var_18, (((-6 ? 14 : var_1)))));
                            var_19 = (min(var_19, (-24 > 12303549046628173133)));
                        }
                    }
                }
            }
        }
        var_20 = (min(var_20, (arr_8 [14] [i_0])));
    }
    var_21 = (((65534 ? (44 ^ 4398046511088) : -0)));
    #pragma endscop
}
