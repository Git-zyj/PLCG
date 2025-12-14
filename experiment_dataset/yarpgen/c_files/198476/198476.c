/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((~var_1), (var_5 == var_2)))) ? var_14 : ((((!(!53)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = var_12;
                var_16 += (((((arr_1 [5]) ? 18573 : (!56))) != ((~((min(14096, (arr_3 [i_0] [i_0 - 1] [i_1]))))))));
                var_17 = ((!((((arr_2 [i_0]) ? ((((14100 == (arr_4 [i_0]))))) : ((~(arr_0 [7] [i_0 - 1]))))))));
                arr_6 [i_0 - 1] [i_1] = (max(-2971457887099709244, 16294));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_13 [10] [4] [i_1] [i_0 - 1] = ((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 1]) : (((arr_1 [i_0 - 1]) >> (var_4 - 27331))));
                            arr_14 [i_3] [i_1] [i_2] [i_1] [7] [i_0 - 1] = var_9;
                            var_18 = ((((min(4937830543790403895, 27))) ? (arr_9 [i_0 + 1] [10] [i_2 - 1] [i_3]) : 606475970));
                            var_19 = (max(var_19, (((((((!(arr_8 [i_0 + 1]))))) + (max(16286, var_3)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 = var_12;
    #pragma endscop
}
