/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_3 ? 28816 : 15959670285760473135));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [1] = (~254);
        var_21 = (max((((!var_1) / var_4)), -28826));
    }
    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        arr_5 [i_1] [i_1] |= (218 ? var_15 : (((((103 ? 15959670285760473152 : 218))) ? -75 : 252)));
        var_22 *= (!27);
        var_23 = (~-16);
    }
    var_24 &= var_2;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_25 = arr_13 [i_2 - 1];
                            var_26 = (max((((0 ? 54 : 0))), (~0)));
                            var_27 = (arr_6 [i_2 + 1]);
                            var_28 = (min((min(4294967295, 3281996884)), (!1729651529016754432)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_29 = (min(var_29, ((max(3281996901, 16)))));
                            var_30 += (arr_4 [i_6]);
                            arr_19 [i_2] [i_3] [i_6] [i_3] [i_2] [i_2 - 1] = max(((((max((-32767 - 1), (arr_0 [7])))) ? (min(var_4, var_1)) : var_2)), 1012970387);
                        }
                    }
                }
                arr_20 [i_2] [i_2] [i_3] = (var_6 < (max(28816, 0)));
            }
        }
    }
    var_31 |= var_16;
    #pragma endscop
}
