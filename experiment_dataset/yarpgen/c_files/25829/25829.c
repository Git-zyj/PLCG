/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25829
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_1] [i_2] [i_3] = (((max(18243838686156982487, -3317497892778535229)) >= ((max(((max((arr_1 [i_0]), (arr_10 [i_0])))), -7491517200254202240)))));
                            var_17 = (min(((((arr_2 [i_1]) >= 7491517200254202257))), (arr_4 [i_1])));
                        }
                    }
                }
                arr_12 [i_1] [i_1] [i_1] = (((arr_7 [i_1]) / ((7491517200254202243 + (arr_7 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 13;i_6 += 1)
            {
                {
                    var_18 = ((!(arr_19 [i_4] [i_4 + 2] [i_4])));
                    arr_20 [i_4] = ((-7491517200254202229 ? -7491517200254202252 : (max(-7491517200254202244, -7491517200254202263))));
                }
            }
        }
    }
    #pragma endscop
}
