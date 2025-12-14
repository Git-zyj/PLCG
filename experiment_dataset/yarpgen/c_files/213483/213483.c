/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] = (min(-97, (((!(arr_9 [i_1] [i_4] [i_0] [i_2] [i_1] [i_0] [i_0]))))));
                                var_12 = (min((((((arr_4 [i_3] [i_3] [i_3]) ? 16383 : var_8)))), var_1));
                                var_13 = -1916788383;
                                var_14 = 132;
                                var_15 |= (!(((arr_3 [i_4]) && (arr_3 [i_4]))));
                            }
                        }
                    }
                    var_16 = (!62299);
                    arr_13 [i_2] [i_1] [i_0] = 132;
                }
            }
        }
    }
    var_17 = (min(var_17, 1));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 -= (var_1 | var_6);
                    var_19 = (max(var_19, (arr_16 [i_7])));
                    var_20 = (max(var_20, ((max(((max((arr_20 [i_5 + 1]), 143))), -var_2)))));
                }
            }
        }
    }
    #pragma endscop
}
