/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 -= (32767 | -113);
                var_16 = (((((~(arr_5 [i_0])))) ? (((((max(var_10, (arr_3 [i_0] [i_1]))) <= 2793219106)))) : (((var_3 | var_5) ? 13990217426685773924 : ((9223372036854775807 ? var_5 : var_0))))));
            }
        }
    }

    for (int i_2 = 3; i_2 < 21;i_2 += 1)
    {
        var_17 &= ((-((118 ? 4875 : (((arr_8 [i_2]) ? (arr_8 [20]) : var_14))))));
        var_18 = var_0;
        var_19 = 1501748184;
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        var_20 += max(((((arr_11 [i_2 - 1] [i_2 - 3] [i_2 - 3]) ? var_10 : (arr_15 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2])))), (arr_13 [i_2 - 1]));
                        var_21 = (min(var_21, 1501748180));
                        var_22 = ((~(((!(((var_4 ? -1392050912 : var_0))))))));

                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            var_23 = ((((((max(-3147490047983163894, 2793219096)) * (var_14 % var_1)))) ? (((!2793219138) ? (var_11 || 0) : (arr_18 [i_2] [i_2 - 3] [i_3 - 1] [i_6] [i_2] [i_6] [i_3 - 1]))) : (((~((var_5 ? var_11 : var_3)))))));
                            var_24 = (!0);
                            arr_19 [i_2] [10] [i_5] = (max(2793219109, 1423434370));
                            arr_20 [i_2 - 2] [i_2 - 2] [i_6] = ((~(!var_6)));
                        }
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_25 += 2162311011;
                            arr_23 [i_2] [i_2] [14] = ((((((((var_4 ? -1510985197 : 88))) & (var_12 ^ var_1)))) ? (((min(var_9, (arr_17 [3] [3] [1] [9] [i_7] [i_7] [19]))) | 126)) : (((~-32747) ^ (~var_1)))));
                            arr_24 [i_2 + 1] [i_3] = ((!((((arr_15 [i_2 - 3] [i_2 - 1] [i_2 - 3] [i_7]) - 2793219088)))));
                            arr_25 [i_2 - 2] [i_3] [i_4] [i_7] = ((+(((arr_12 [i_3 + 1] [i_5]) | 1392050905))));
                            var_26 = (max(var_26, (((~(((arr_16 [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_3 - 2]) ? var_12 : var_14)))))));
                        }
                        var_27 = ((-(((!(var_12 - 1392050891))))));
                    }
                }
            }
        }
    }
    var_28 &= var_12;
    var_29 = ((((0 && var_7) ? var_4 : var_13)));
    var_30 = (((769139967892629884 / var_6) / var_5));
    #pragma endscop
}
