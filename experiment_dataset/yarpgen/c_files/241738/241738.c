/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_10 ^= (((192 % 26627) > (64701 >= -26627)));
                                var_11 = (((((26627 >= (497552686 != -26645)))) < 497552686));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_12 += 497552686;
                                arr_19 [i_0] [i_5] [i_2 - 2] [i_5] = (((-26639 + 26627) == 0));
                                var_13 = ((((26639 > 0) << (26639 > 26623))));
                            }
                        }
                    }
                    var_14 ^= -26614;
                }
            }
        }
    }
    var_15 ^= (var_4 - -497552686);
    #pragma endscop
}
