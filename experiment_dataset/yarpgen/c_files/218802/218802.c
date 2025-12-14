/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218802
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = (max(((18446744073709551615 ? 18446744073709551615 : 18446744073709551615)), (((!((max((arr_0 [i_0]), 20))))))));
                var_21 = ((((max((1643456286 > 2), (var_3 | var_0)))) ? ((min(45466, 20046))) : (~-2)));
                var_22 = max(((-18446744073709551615 ? (arr_2 [i_1 + 2] [i_0]) : (((min(1, (arr_0 [i_1 + 2]))))))), 20044);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] [i_2] [i_0] = (~1);
                            var_23 &= 15938008484430746546;

                            for (int i_4 = 0; i_4 < 17;i_4 += 1)
                            {
                                var_24 &= (2 * 28);
                                var_25 += ((((!(((18446744073709551603 ? 17295 : 11)))))));
                                var_26 = (((((((arr_16 [i_0] [i_1 - 1] [i_2] [i_0] [i_4]) == 42540)))) ? (((min(var_4, (arr_5 [i_0] [i_1]))))) : (arr_10 [i_3] [i_3] [i_3] [i_3] [i_3])));
                                var_27 |= -77;
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_28 -= ((min(var_15, (arr_18 [i_5] [6] [i_2] [6] [i_0]))) < (((max(((min(1, -68))), (arr_4 [i_0] [i_1 + 2] [0]))))));
                                var_29 = (((377397038 || (var_14 ^ 1))));
                                var_30 = (min(((((arr_16 [i_0] [i_1] [i_2 - 2] [i_0] [i_5]) == 22997))), 22562));
                            }
                            var_31 = ((min(var_12, (((!(-2147483647 - 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
