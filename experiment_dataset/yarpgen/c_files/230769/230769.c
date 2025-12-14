/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_16;
    var_19 = ((max(var_6, var_9)));
    var_20 = 53100;
    var_21 = (min((!var_12), (min(var_2, (12418 > var_5)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] = ((((arr_0 [i_0]) <= (arr_0 [i_0]))));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            arr_9 [i_0] [i_0] = var_5;
            var_22 = (arr_5 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_0] [i_0] = (((arr_5 [i_0] [i_1] [i_0]) & var_2));

            for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
            {
                var_23 = 50590;
                var_24 = (((arr_8 [i_0]) + (arr_8 [i_0])));
            }
            for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] [i_3] [i_3] = ((var_8 & (arr_8 [i_0])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_20 [i_0] [i_0] [i_1] [i_3] [i_4] [i_5] = arr_19 [i_0] [i_1] [i_0] [i_0];
                            var_25 = (arr_6 [i_5 + 4] [i_5 - 3]);
                            arr_21 [i_0] [i_1] [i_3] [i_4] [i_4] = (arr_19 [i_5 - 2] [i_5] [i_5] [i_0]);
                            arr_22 [1] [i_0] [i_3] [14] [i_3] [i_3] [i_3] = var_9;
                            arr_23 [i_0] = var_7;
                        }
                    }
                }
                var_26 = (~var_4);
                var_27 = (min(var_27, (arr_11 [i_0] [i_1] [i_3])));
            }
            for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
            {
                var_28 = (((arr_14 [i_0] [i_1] [i_0] [i_6]) ? (arr_14 [i_0] [1] [i_0] [i_1]) : (arr_14 [i_0] [i_1] [i_0] [i_0])));
                arr_26 [i_0] [i_0] = (arr_6 [i_0] [i_6]);
            }
        }
        var_29 += var_17;
        arr_27 [6] [i_0] = (arr_3 [i_0]);
        arr_28 [i_0] = (((arr_25 [i_0] [i_0] [i_0]) * (arr_25 [i_0] [i_0] [16])));
    }
    #pragma endscop
}
