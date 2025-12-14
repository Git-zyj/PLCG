/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = ((83 ? 137 : 1271955558));
                arr_5 [i_0] = ((((+(max((arr_1 [i_0]), (arr_2 [i_0]))))) / 1629461223464740618));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    {
                        arr_15 [0] [i_2] [i_4] [i_5] [i_2] [6] = ((0 * 20) * ((-(arr_14 [i_2] [i_3 - 1] [i_4] [i_4]))));
                        var_12 *= (((1915527211 <= (arr_6 [i_2]))));
                        var_13 = (((arr_9 [i_3 - 2] [i_3 - 2] [i_4 - 1]) ? ((31 ? (arr_13 [i_4] [i_4] [i_4] [i_2] [i_3 + 1] [i_2]) : var_0)) : (arr_7 [i_3 + 1] [i_3 - 2])));
                        arr_16 [i_2] [i_3] [i_4] = (((arr_7 [i_2] [7]) >> (112 - 89)));
                    }
                }
            }
        }
        var_14 = (((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) - (((arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) >> (11098 - 11091)))));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_15 = (arr_12 [i_6] [4]);
            var_16 = ((arr_13 [i_2] [9] [i_6] [i_2] [i_2] [i_2]) ? (arr_11 [12]) : ((133 ? var_5 : (arr_6 [i_2]))));
        }
    }
    var_17 = (max(((min(0, 11098))), (~2206)));
    var_18 = var_2;
    #pragma endscop
}
