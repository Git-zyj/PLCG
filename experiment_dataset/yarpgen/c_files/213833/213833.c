/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = (min((min((((236 ? 5 : 112))), ((56 ? 5 : var_1)))), ((((!65479) ? var_9 : (((!(arr_4 [i_0] [i_1] [i_1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] [i_1] [i_2 - 1] [i_1] [i_4] = var_13;
                                arr_14 [i_0] [i_0] [8] [i_0] [i_0] [12] [i_0] &= var_13;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            {
                                arr_19 [i_1] [i_6] = (arr_15 [i_0] [i_2 - 1]);
                                var_16 = ((~((70 ? 1059974852 : 1))));
                                arr_20 [i_1] = ((-((min(0, (arr_17 [2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 &= var_6;
    var_18 = 112;
    #pragma endscop
}
