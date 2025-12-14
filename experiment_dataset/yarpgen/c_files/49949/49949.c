/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((((!var_6) >= 0))), var_13));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] &= var_13;
        var_21 = ((~((var_18 ? (!12837) : ((((arr_0 [i_0] [i_0]) < var_12)))))));
        arr_3 [8] = var_4;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    arr_10 [1] [i_2] = 12837;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_22 &= (((arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_19 : 0));
                                var_23 = var_16;
                                var_24 |= 12866;
                                var_25 = ((((~(arr_1 [i_3] [10]))) <= 3));
                            }
                        }
                    }
                }
            }
        }
        var_26 ^= (((~201973057) ? ((32763 ? ((52680 ? 52698 : var_17)) : (((arr_4 [i_0] [8] [0]) ? -122 : var_7)))) : 142));
    }
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        arr_19 [i_5] [i_5] = var_11;
        var_27 = (max(var_27, ((((min(0, 46959))) ? (max(17494588417124270850, (arr_17 [10] [i_5]))) : var_19))));
    }
    for (int i_6 = 2; i_6 < 14;i_6 += 1)
    {
        var_28 = (min(52698, (((arr_20 [i_6 - 2]) * 1312442763))));
        var_29 *= (arr_21 [i_6 + 1]);
    }
    var_30 ^= (~var_14);
    #pragma endscop
}
