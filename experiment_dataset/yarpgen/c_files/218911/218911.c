/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, var_10));
    var_20 *= (((max((var_5 + var_7), var_15)) >= (1132629584 > var_12)));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_21 = max(var_14, -1190564356);
                    arr_6 [i_0] [i_1] [i_1] [i_2] |= (~var_9);
                    arr_7 [i_2] [i_1] = (~536870912);
                }
            }
        }
        var_22 = (max(var_22, (((1190564356 ? 15 : 9223372036854775807)))));
        arr_8 [i_0] = 37308;
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_23 = ((!(~1)));
                                var_24 *= var_15;
                                var_25 = (!-536870912);
                                var_26 = (arr_21 [i_0] [i_3] [i_4] [i_6]);
                            }
                        }
                    }
                    arr_24 [i_4] [i_4] = 766362682;
                    var_27 += -8933;

                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_28 = (min(var_28, (((!(0 == 766362682))))));
                        var_29 = (arr_20 [i_7] [i_4] [i_3] [i_0] [i_0]);
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        arr_30 [i_8] [i_4] [i_3] [i_4] [i_0] = var_2;
                        var_30 = (max(var_30, ((max((~-var_15), var_15)))));
                    }
                    var_31 = (arr_17 [i_4] [i_4] [i_4] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
