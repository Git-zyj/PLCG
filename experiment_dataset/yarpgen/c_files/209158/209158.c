/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max((arr_2 [i_1]), (((~((~(arr_4 [i_0])))))))))));
                arr_5 [i_0] = var_11;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_19 = ((3 ? (arr_8 [i_0] [i_1 - 3] [i_3 - 1] [i_4]) : ((((!(arr_0 [i_1] [i_4])))))));
                                arr_14 [9] [i_1] [i_2] [i_1] [i_4] = (arr_11 [i_1 - 3] [i_3 - 2] [i_3 - 3] [i_3]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((((max(var_2, var_13))) ? var_7 : (var_5 < var_7))));
    var_21 = (max(var_21, (((((((var_11 ? var_9 : (-2147483647 - 1)))) ? (~0) : var_7))))));
    #pragma endscop
}
