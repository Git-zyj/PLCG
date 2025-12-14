/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (min((arr_0 [i_0] [11]), -59));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_18 = 27757;
                                var_19 = (min(((17179868672 & (arr_14 [i_4] [i_4] [i_3 - 1] [i_3 + 2] [i_3 + 2]))), (~24)));
                            }
                        }
                    }
                    var_20 = (max((~var_5), (((!(arr_0 [16] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = (((arr_2 [11] [1]) < 19007));
                                var_22 = ((!(arr_11 [i_1] [i_1] [i_5] [15])));
                                var_23 = max(((((arr_0 [1] [i_0]) ? (!var_9) : (arr_17 [i_0])))), ((-944745555 ? ((27750 ? -17 : 4678554286469095925)) : 24)));
                            }
                        }
                    }
                }
            }
        }
        var_24 = (!6759895909292988013);
    }
    var_25 = var_6;
    var_26 = var_16;
    #pragma endscop
}
