/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_11 = arr_1 [i_0];
                                var_12 = (((((-121 ? -9223372036854775788 : (((max((arr_6 [i_1] [i_2 + 1] [i_3]), (arr_7 [i_3])))))))) ? ((var_10 ? var_9 : ((-(arr_5 [i_0] [i_0] [i_3] [i_4]))))) : ((((max(259880667, (arr_12 [i_0])))) ? 259880667 : 259880667))));
                                arr_14 [i_0] [i_0] [i_0] = (max(1, 54));
                                var_13 = (min(var_13, ((((arr_6 [i_4] [i_2] [i_0 - 3]) | (((!(arr_1 [i_2 + 2])))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_14 = (!259880663);
                                var_15 = (min(var_15, (((-((-(arr_20 [i_7] [i_6] [i_1] [i_0]))))))));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 10;i_10 += 1)
                        {
                            {
                                arr_31 [i_0] [i_1] [i_8 + 1] [i_0] = ((!((((((65533 ? -113 : 201))) ? var_5 : 197)))));
                                arr_32 [i_0] [i_0] = (((((((-435560792 ^ (arr_7 [i_9]))) + 2147483647)) >> (-259880654 + 259880654))));
                                arr_33 [i_0 + 1] [i_1] [i_8] [i_9] [i_0] [i_9] = (((-(arr_22 [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8]))));
                                var_16 = ((190528641 << (1099511627775 - 1099511627747)));
                                arr_34 [i_0 - 3] [i_0] [i_8] [i_9] = (((-9 || 259880667) ? -259880681 : ((var_6 ? (arr_26 [i_0] [i_1] [i_8]) : ((((arr_18 [i_0] [i_10]) - 1023)))))));
                            }
                        }
                    }
                }
                arr_35 [i_0] [0] [i_0] &= (+(max(((var_1 ? (arr_13 [i_0] [i_1] [i_1] [i_0] [i_1]) : var_8)), ((173 ? 187 : 9223372036854775807)))));
                var_17 = (max(var_17, (arr_11 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])));
            }
        }
    }
    var_18 = var_6;
    #pragma endscop
}
