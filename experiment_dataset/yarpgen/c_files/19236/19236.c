/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        var_21 = ((var_1 ? (min((max(8211407571664687095, 5234594980835569657)), (arr_0 [i_0 - 2]))) : (arr_0 [i_0])));
        arr_2 [i_0] [i_0 - 2] = var_14;
        var_22 = -122;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_23 -= 0;
                                arr_15 [i_0] [i_2] [i_2] [i_3] [i_4] |= -319346213;
                                var_24 = (((arr_6 [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_2 + 3]) ? (arr_4 [i_0 + 1]) : (arr_6 [i_0 + 1] [12] [i_1] [i_2 + 3])));
                                var_25 = var_9;
                            }
                        }
                    }
                    var_26 = (min(var_26, -var_15));

                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        var_27 = (!var_15);
                        var_28 = arr_10 [i_0] [i_0] [14] [i_0] [8] [i_5];
                    }
                }
            }
        }
        var_29 = (((((((min(2418, 795596863))) ? 24 : 46283))) && ((min(-7887018753690298347, 10)))));
    }
    var_30 = (min(var_30, var_14));
    #pragma endscop
}
