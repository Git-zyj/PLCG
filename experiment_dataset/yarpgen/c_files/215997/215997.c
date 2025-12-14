/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((+(max((arr_0 [i_1]), (min((arr_1 [i_0]), (arr_0 [i_0]))))))))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((min((arr_5 [2] [i_2 - 1]), (arr_5 [2] [i_2 - 2]))))));
                            var_17 = (arr_6 [i_0] [14] [i_1] [i_3] [i_0] [i_0]);
                        }
                    }
                }
                arr_8 [i_1] [i_1] = (max(var_10, (95 || 1)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_18 *= ((min(((min(var_12, (arr_10 [i_4])))), ((-(arr_14 [i_4 - 1] [16] [i_4 + 1]))))));
                var_19 = (min(var_19, var_0));
                var_20 += max(((-1160796752 ? -1160796752 : 2305561534236983296)), ((max((arr_9 [i_4] [i_5]), (arr_9 [1] [i_5])))));
            }
        }
    }
    #pragma endscop
}
