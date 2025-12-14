/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [6] [6] &= ((min(var_2, (max(1042534713, 1)))));
                var_18 = ((-(min(((1418543814 ? var_12 : 4405872905636365731)), ((min((arr_2 [5] [i_1]), var_8)))))));
                var_19 = 4405872905636365731;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 18;i_3 += 1)
        {
            {
                arr_9 [i_2] [i_3] = (min((~var_5), (~152)));
                var_20 *= ((min(126, -234233708)));
                var_21 = (((!((max((arr_8 [15] [2] [i_3]), var_3))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                var_22 = (arr_14 [i_4] [i_5] [i_5]);

                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_17 [i_4] [i_4] [20] = (arr_11 [i_6]);
                    arr_18 [i_4] [i_4] = (arr_13 [i_6] [8]);
                }
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    arr_21 [i_4] [i_7] = ((-(((arr_16 [i_4] [i_5] [i_7] [1]) ? (arr_16 [i_4] [i_5] [i_7] [i_7]) : (arr_16 [1] [i_5] [i_5] [i_5])))));
                    arr_22 [19] [8] = ((min(-120, 14040871168073185885)));
                    var_23 = (max(8791153359666738977, 120));
                    var_24 -= (max(var_10, (((!((min((arr_11 [i_7]), var_15))))))));
                }
                var_25 = (min(var_25, 126));
            }
        }
    }
    #pragma endscop
}
