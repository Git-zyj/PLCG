/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4015
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_10 [i_2] = var_0;
                    arr_11 [i_0] [i_1] [i_2] [i_2] = (arr_7 [i_0] [i_2] [i_2] [i_1]);
                    var_18 = ((-(arr_6 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = var_17;
                                var_20 = min((((~((((arr_7 [i_0] [i_2] [i_2] [i_0]) < var_16)))))), (min(6986480061566180305, (arr_9 [i_1] [3]))));
                            }
                        }
                    }
                }
                for (int i_5 = 3; i_5 < 11;i_5 += 1)
                {
                    var_21 = arr_13 [i_1] [i_5 + 2] [i_0] [i_1] [4] [i_0];
                    var_22 = var_5;
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    var_23 = (min((((arr_14 [i_6 - 1] [2] [i_0]) * (arr_14 [i_6 - 3] [0] [i_0 - 1]))), var_14));
                    var_24 = (arr_12 [i_6]);
                }
                var_25 = ((-(arr_15 [i_0])));
                var_26 -= (((((max((arr_19 [i_0] [i_0 + 2] [9] [i_0]), var_15)))) == (~-7)));
                arr_22 [i_0] [i_0] = 40;
                arr_23 [3] = (arr_9 [i_0 + 2] [i_0]);
            }
        }
    }
    var_27 = (var_0 || ((min((((1 ? 65535 : -297070386))), ((6986480061566180305 << (906057589 - 906057551)))))));
    var_28 = (max((var_5 * 15771069024864014159), (var_4 - var_13)));
    var_29 = (max(var_29, var_10));
    #pragma endscop
}
