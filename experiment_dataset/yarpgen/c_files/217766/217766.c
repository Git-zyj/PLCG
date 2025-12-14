/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = ((((6658454284005657704 - (max(var_12, (arr_2 [i_2]))))) != 12200045819908003364));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_2] [i_2] |= ((-(((var_6 != (arr_1 [i_0 + 1]))))));
                        var_14 = ((((max((arr_2 [i_0 - 2]), 1116892707587883008))) || ((-232687774 && (arr_7 [i_2] [i_1])))));
                        var_15 = (max(var_15, ((-(max((arr_5 [i_0]), (arr_0 [i_3])))))));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 += ((((((arr_7 [i_0 + 2] [5]) && (~var_8))))));
                        var_17 = (~-232687774);
                        var_18 = (min(var_18, (((+((((min((arr_9 [i_0] [7] [i_2] [i_2]), (arr_6 [i_0] [1] [1])))) ? (((arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]) ? var_1 : 0)) : (arr_5 [7]))))))));

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_19 = (max((((arr_8 [i_0 - 2] [i_0] [i_0 + 2] [i_0 - 1]) ? (arr_8 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 1]) : -1065339743580219407)), (((arr_0 [i_0 - 2]) ? (arr_0 [i_0]) : (arr_0 [i_5])))));
                            var_20 = (min(var_20, (((10205971295735600769 ? 229 : ((((arr_5 [i_0 + 2]) || (arr_5 [i_0 + 1])))))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_6] = ((-((-(arr_15 [i_6] [i_0] [3] [i_2] [1] [i_0])))));
                        arr_19 [i_0 + 1] [0] [0] [i_6] [3] [i_0] = -0;
                        arr_20 [i_2] = arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_6];
                    }
                }
            }
        }
    }
    var_21 = var_10;
    var_22 = (1919982210568378717 / var_2);
    #pragma endscop
}
