/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((0 - 55) ? (arr_5 [i_3 + 2] [i_2 - 3] [i_2] [i_3]) : ((1 ? var_10 : (arr_5 [i_3 + 2] [i_2 - 3] [i_2] [i_3 + 2])))));
                                var_13 = (!18446744073709551615);
                                var_14 = ((~(~var_9)));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_5] [i_5] = ((var_4 ? -2709357455 : 1));
                        arr_16 [i_0] [i_2] [i_2 - 3] [i_5] = var_6;
                        var_15 = ((-((var_4 ? (!var_3) : 2147483647))));
                    }
                }
            }
        }
    }
    var_16 = -var_4;
    var_17 = var_0;
    var_18 = var_4;
    #pragma endscop
}
