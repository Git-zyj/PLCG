/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((57139 >> (((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0]))) - 3892948079))));
        var_18 = arr_3 [i_0 - 1];
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [4] &= ((-(arr_7 [i_0 - 2] [i_1 - 1] [i_2 - 2])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_19 = (13004977548330127130 + 60934);
                                var_20 = (((arr_7 [i_2 - 3] [i_0 + 1] [i_0]) >> (((arr_7 [i_2 - 2] [i_0 + 1] [i_0 + 1]) - 3463102190))));
                            }
                        }
                    }
                }
            }
        }
        arr_15 [i_0] = (arr_11 [12] [i_0] [i_0 - 1] [i_0] [i_0 + 1]);
        arr_16 [i_0] = (((arr_5 [6]) ^ (arr_5 [6])));
    }
    var_21 = ((((var_10 ? ((min(var_4, var_11))) : ((43 ? var_0 : var_10)))) >> (var_2 - 63727)));
    var_22 = var_5;
    #pragma endscop
}
