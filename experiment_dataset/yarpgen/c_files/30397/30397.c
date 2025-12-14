/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [6] [i_1] [10] [i_3] [i_3] = ((((arr_4 [i_1 + 3] [i_2 + 1]) & (arr_4 [i_1 + 3] [i_2 + 1]))));
                                var_10 = (max(var_10, (((var_7 / ((max(var_6, (arr_13 [i_3] [4] [i_4 + 1] [i_4] [i_3])))))))));
                                arr_16 [6] [i_4] [6] [i_1] [i_1] [1] [1] = ((((((((arr_4 [i_0] [5]) ? (arr_0 [i_2 + 1]) : 12964888258152605533))) && -129059236369345489)) ? ((min((arr_13 [2] [i_2 - 1] [i_2] [7] [i_1]), (min(var_6, var_0))))) : (arr_0 [i_0])));
                            }
                        }
                    }
                    var_11 |= ((((((((min(45397, var_6)))) < (min(var_8, var_1))))) & (!var_4)));
                }
            }
        }
    }
    var_12 = var_7;
    #pragma endscop
}
