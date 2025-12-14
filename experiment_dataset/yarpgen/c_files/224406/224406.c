/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224406
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_16 ^= (min((((((arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]) ? (arr_12 [i_0] [0] [i_1]) : (arr_8 [17] [i_2] [i_3] [17]))) / 1005618034)), 63));
                                var_17 = ((((((min(1, 3))))) ^ (max((((1797959492 ? 0 : (arr_5 [18] [i_3] [18])))), 26730099356448975))));
                                var_18 = (min(15741, -32));
                            }
                        }
                    }
                    arr_13 [i_1] [i_0] = (((((~((min((arr_9 [9] [i_1] [i_2]), 102)))))) & (arr_4 [i_0])));
                    var_19 = (((((!((min(-17, (arr_0 [i_0]))))))) & ((2112682374 ? -357206700 : -1))));
                }
            }
        }
    }
    var_20 = -var_12;
    #pragma endscop
}
