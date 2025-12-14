/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_11 = ((var_7 ? var_10 : ((-10315 / (min((arr_2 [i_1] [i_0]), var_3))))));

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_12 -= (max((-204 - -807010700), (var_7 || var_4)));
                    arr_7 [1] [5] [i_2] = (arr_0 [i_2]);
                    arr_8 [i_2] [4] [i_0] = ((+((var_3 | ((((arr_5 [i_0]) ? 10315 : var_9)))))));
                    var_13 = (min(var_13, (((((max(((2047 & (arr_0 [i_1]))), (arr_6 [4] [i_0])))) ? (((~var_9) ? var_2 : (arr_5 [i_2]))) : ((min(var_6, (arr_0 [i_2])))))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_14 += var_7;
                            var_15 = ((-((((arr_11 [i_3] [i_3 - 2] [i_3] [i_0]) <= var_5)))));
                            arr_14 [i_0] [i_1] [i_3] [i_4] [5] = ((max((arr_9 [i_3] [i_0] [i_3 - 1] [i_0]), (arr_5 [i_0]))));
                            arr_15 [i_0] [i_1 - 1] [i_3 - 1] [i_4] = (~-27306);
                        }
                    }
                }
                arr_16 [i_0] [i_0] [i_0] = var_4;
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
