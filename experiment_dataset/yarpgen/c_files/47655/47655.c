/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (~(0 ^ var_7));
        var_18 = (min(var_18, -var_11));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1) /* same iter space */
    {
        arr_7 [1] [1] = (!((max(47816, (arr_6 [i_1])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_19 = (min(0, (var_0 | 47809)));
                        var_20 = (min(((~(arr_13 [i_2] [i_4 - 2] [i_4 - 2] [i_2]))), var_3));
                        var_21 = arr_4 [i_1] [i_2];
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_22 [16] [i_6] [i_3] [i_5] [i_6] |= ((~((~(!2141503491)))));
                                var_22 -= ((!((min((arr_18 [i_2] [i_5 + 1] [i_2] [i_6 + 2] [15] [1]), var_7)))));
                                var_23 = var_5;
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((-(!7587600307894964526)));
        var_25 |= (~18048);
        var_26 = max((arr_4 [i_1] [i_1]), -47806);
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
    {
        var_27 = ((+((((arr_11 [i_7]) == var_7)))));

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {

            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                var_28 = (max(var_28, var_7));
                var_29 = -var_5;
            }
            var_30 = (max(var_30, (((0 ? 0 : var_4)))));
        }
    }
    #pragma endscop
}
