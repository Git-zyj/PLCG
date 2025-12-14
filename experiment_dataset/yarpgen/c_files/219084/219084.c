/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
                {
                    var_19 = (~var_14);
                    var_20 = -1;
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 11;i_5 += 1)
                        {
                            {
                                var_21 = (~var_2);
                                arr_19 [i_5] [i_4] [i_0] [1] [i_0] = max((arr_10 [1] [i_1 + 1] [i_0]), ((((((11288473607457873778 ? 3792480681314708671 : -809044353))) > (max(-3792480681314708672, 1606195182476523604))))));
                                arr_20 [i_0] [i_3] [14] [i_0] = (!-2147483640);
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_7 [i_0] [i_5 - 1] [i_1 + 1];
                            }
                        }
                    }
                    arr_22 [i_1] [1] [i_0] = 3792480681314708653;
                    arr_23 [14] [12] |= (max(58332, (var_11 % 1)));
                }
                for (int i_6 = 1; i_6 < 12;i_6 += 1) /* same iter space */
                {
                    arr_26 [i_0] [i_1] [i_0] = (max((min((((-3795333160764588228 ? -32094 : var_6))), 3792480681314708682)), (arr_18 [i_0] [i_0] [i_0] [1] [i_0] [1])));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = ((((((127 ? -98 : 1)))) ? (arr_5 [i_0] [i_1 - 1] [i_6]) : var_10));
                    var_22 *= -var_2;
                    arr_28 [i_0] [i_6] [13] [i_0] = ((max(1, 2374359822)));
                }
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_23 = (max(3026, 3300876829816116883));
                    arr_33 [i_0] [i_0] [i_0] = (((((3034 << (65205 - 65192)))) ? ((44145 ? 39550 : ((max(40829, 61189))))) : (~3017)));
                    var_24 |= ((((max((arr_25 [6] [6]), (arr_31 [i_1 - 1] [i_1 - 1])))) * var_3));
                    var_25 = (~1);
                }
                arr_34 [i_0] = (((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) / (((-576460752303423488 ? 15145867243893434712 : 581059247)))));
                arr_35 [i_0] [i_0] = -884127596;
            }
        }
    }
    var_26 = ((-(min(var_4, (max(7286666494243422661, var_14))))));
    var_27 = (max(84, ((var_0 ? 7204 : 1744793598))));
    #pragma endscop
}
