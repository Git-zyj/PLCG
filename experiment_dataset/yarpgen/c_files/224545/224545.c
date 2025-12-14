/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1856784504;
    var_15 = (min(var_15, (((~(max(-3817004654272978570, var_1)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, (((~(((arr_3 [i_2 - 1] [i_1 - 1]) / (arr_2 [i_2 - 1] [i_1 - 1]))))))));
                    var_17 = (max(var_17, 16777208));
                    arr_8 [i_0] [i_1] [i_2] = (max(((((2455 - (arr_1 [i_0]))))), (arr_2 [i_0] [14])));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_15 [3] [i_1] [i_2] [i_0] [i_4] [i_0] [i_0] = (3817004654272978562 && 1672826025);
                                var_18 = (min(var_18, (((var_0 ? (((((!-3817004654272978572) > (arr_6 [i_0] [i_1] [i_3 - 3] [i_0]))))) : (min((arr_7 [i_1 - 1]), ((((arr_13 [17] [i_3] [12] [7] [i_0]) & 3176510365))))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min(var_19, -var_3));
    #pragma endscop
}
