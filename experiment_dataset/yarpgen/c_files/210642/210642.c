/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_20 = var_0;
                                var_21 ^= ((((!(arr_10 [i_3] [i_1 + 3] [i_3] [i_1 + 3] [4] [i_1]))) ? (min((((1724939315955103441 + (arr_8 [i_0] [12] [i_3])))), (min(var_4, -2907507807523478462)))) : 4849));
                                var_22 ^= (!-8473);
                                arr_15 [14] |= ((!((((176 ? 3645224047 : 4849)) <= var_16))));
                            }
                        }
                    }
                    arr_16 [i_0] [i_2] [i_0] = var_15;
                    var_23 ^= (max(var_17, 53));
                }
            }
        }
    }
    var_24 = var_9;
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_25 = (min(var_25, (((25410 ? -2 : ((((arr_22 [4] [i_5] [i_7] [i_6]) <= var_7))))))));
                    var_26 = 32765;
                }
            }
        }
    }
    #pragma endscop
}
