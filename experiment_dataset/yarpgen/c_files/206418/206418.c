/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-13719 ? ((min(var_0, var_1))) : (((-571553184 + 2147483647) << (1 - 1)))));
    var_14 ^= (!var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1] = (arr_0 [6]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [19] [i_3] [i_0] [9] = 571553184;
                                arr_12 [i_0] [i_1] [8] [i_1] &= (max(1423370468, ((!((min(var_4, (arr_3 [i_0] [i_1]))))))));
                            }
                        }
                    }
                }
                arr_13 [i_0] = (arr_0 [i_1]);
            }
        }
    }
    var_15 = ((((((!-1792489383) - ((min(var_6, var_2)))))) <= (max(207, ((var_12 ? var_4 : -71))))));
    #pragma endscop
}
