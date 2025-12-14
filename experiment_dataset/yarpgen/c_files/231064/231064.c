/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_10 = (min(var_10, 1));
        var_11 ^= (arr_1 [i_0 + 1]);
        var_12 = (((arr_1 [i_0 - 1]) | (arr_0 [i_0 - 1])));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            {
                var_13 = (min(var_13, ((((arr_5 [i_1] [i_2 - 1] [i_1]) >> (2785893936446178049 >= 10370313215715225337))))));
                var_14 -= (((((min(32245, (arr_5 [i_1] [i_2 - 1] [i_1]))))) >= 8076430857994326279));
                /* LoopNest 3 */
                for (int i_3 = 2; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [i_4] [i_3] [i_4] [i_2] [i_4] [i_5] = var_0;
                                var_15 -= (0 || -460281694);
                            }
                        }
                    }
                }
                var_16 = 72437997;
            }
        }
    }
    #pragma endscop
}
