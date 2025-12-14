/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~var_7);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0 - 3] [i_0] [i_0 - 3] [i_3] = var_4;
                                var_14 = (+(((arr_5 [i_2]) ? (((arr_11 [i_0] [i_0] [i_3] [i_3 - 1] [i_2] [i_2] [i_0 + 1]) ? (arr_5 [i_3]) : 1)) : 1)));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 -= ((min((arr_4 [i_0 - 3] [i_0 - 3] [i_5 + 3]), (arr_4 [i_0 - 3] [i_0 - 3] [i_5 + 3]))) % (arr_4 [i_0 - 3] [i_0 - 3] [i_5 + 3]));
                                arr_20 [i_0] [i_0] [i_5] [i_0] = ((((min((arr_17 [i_0 - 2] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 + 1]), (arr_17 [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0] [i_0 - 3])))) + (min((((arr_16 [16] [i_1] [i_5]) ? (arr_6 [i_0]) : 10277350562670011916)), 1))));
                                var_16 += (arr_18 [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
