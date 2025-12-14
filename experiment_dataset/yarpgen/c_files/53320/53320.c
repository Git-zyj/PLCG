/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53320
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(((~(max(var_1, var_5)))), (!var_18))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_20 = (max(var_20, ((max((max(var_11, var_2)), (min(var_18, var_2)))))));
        arr_2 [14] [14] = (min(-var_0, (~var_13)));
        var_21 = (min((!var_10), (max(var_7, var_3))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_5 [7] = (~(max((min(var_18, var_1)), -var_2)));
        var_22 = (max(var_16, var_15));
        var_23 += ((!((max(var_16, var_11)))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_3] = min(var_18, (max((~var_3), (!var_4))));
                arr_13 [i_3] = ((~(((!((max(var_11, var_17))))))));

                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    var_24 *= (min(var_14, -var_6));
                    var_25 += (min(var_13, ((max(12020, -12028)))));
                }
                for (int i_5 = 4; i_5 < 14;i_5 += 1)
                {
                    arr_19 [i_3] [i_3] [i_5] [i_5] = ((min(-var_11, (max(var_1, var_0)))));
                    arr_20 [i_2] [i_3] = -var_12;
                    var_26 *= var_7;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_26 [i_2] [i_3] [12] [i_3] [i_7 - 1] [i_6] = (!var_17);
                                var_27 = (min(((~(max(var_7, var_0)))), (!var_3)));
                            }
                        }
                    }
                    arr_27 [i_2] [i_2] [i_3] [i_3] = (max(15, 18052));
                }
            }
        }
    }
    var_28 ^= (min(var_4, (min((min(var_7, var_6)), var_10))));
    var_29 = (!var_1);
    #pragma endscop
}
