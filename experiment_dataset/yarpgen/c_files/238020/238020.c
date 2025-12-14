/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_18 += (!1759);
                    var_19 = (((-1759 & (arr_10 [i_0 + 1] [i_0 + 1] [i_2]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((min((arr_9 [i_0 + 1] [i_0]), (((~(arr_6 [i_0 + 1] [i_0 + 1] [i_4])))))))));
                                var_21 = (((arr_0 [i_0 - 1]) ? (((max(var_1, var_10)))) : 18446744073709289472));
                                arr_18 [i_1] [5] = 1736823246124529115;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                {
                    var_22 -= ((((((((1759 ? 1 : -26507))) ? (136 | 12246287120064491809) : (arr_24 [14] [i_6] [14])))) ? ((((((var_15 ? -1752 : -1805229706908372363))) ? (min((arr_21 [4] [4]), 2772821936917787826)) : (arr_24 [2] [0] [2])))) : (((arr_27 [i_5] [i_5] [i_7]) ? (arr_27 [i_5] [14] [i_7]) : (arr_21 [16] [16])))));
                    var_23 = (max(var_23, 1759));
                    var_24 -= (var_0 <= (((1752 ? -24359 : 1))));
                    var_25 = (arr_22 [11] [i_7]);
                }
            }
        }
    }
    var_26 = min(237, 1751);
    var_27 = var_7;
    #pragma endscop
}
