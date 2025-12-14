/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = max(96, ((((max(-97, (-127 - 1)))) ? (96 <= 102) : (((arr_4 [i_0] [i_1]) ? var_19 : (arr_2 [i_0]))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_21 = ((min(var_13, (arr_2 [i_0]))));
                                arr_14 [i_1] [6] = (((arr_10 [i_4] [i_3] [i_0] [i_0]) ? ((((5675469637378671808 < 6562) <= (~var_4)))) : (!-1)));
                                var_22 = ((+((((arr_7 [1] [i_0 - 3] [4]) < 39)))));
                            }
                        }
                    }
                }
                var_23 = (min((arr_0 [i_1]), (arr_3 [i_0 + 1] [i_0 + 1])));

                for (int i_5 = 2; i_5 < 12;i_5 += 1)
                {
                    var_24 = ((+(max((arr_6 [i_5 + 1] [i_5 - 1] [i_5 - 1]), (arr_11 [i_0] [i_0] [i_5] [i_0])))));
                    var_25 -= 16795808011198992780;
                    arr_18 [i_0] [i_0] [i_0] [i_5] = ((!(((-102 ? 102 : 102)))));
                    arr_19 [i_0 - 3] [i_0 - 3] [i_5] [i_5] = (min((min((arr_7 [i_0] [i_0 - 1] [i_5 + 2]), (arr_7 [i_0] [i_0 - 2] [i_0 - 2]))), (max(14, 1))));
                    var_26 = max((max((arr_13 [i_0] [i_0 - 3] [i_0] [i_5 - 2] [i_5 - 2]), var_9)), (((arr_4 [i_0] [i_0 - 3]) * (arr_4 [i_0] [i_0 - 2]))));
                }
            }
        }
    }
    #pragma endscop
}
