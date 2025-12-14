/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((-var_3 ? (((-275102962935753976 ? -61 : 0))) : var_2)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = (max((arr_4 [i_0]), (arr_2 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((min((11 / -6070391968582457650), var_9)))));
                            arr_11 [i_0] [i_1] [i_1] [i_1] = (((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_3]) ? var_1 : (min(-4632020634197437768, (arr_1 [i_0] [1]))))) ^ (((-1 == var_5) ? var_3 : ((-1 ? (arr_1 [i_0] [10]) : (arr_9 [i_0] [i_0] [i_1] [i_2] [i_3])))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = var_0;
    #pragma endscop
}
