/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((((!1620838801728554531) - (((var_14 ? var_9 : var_9))))))));
                var_16 = (max(var_16, ((~(min(var_8, (arr_4 [i_0] [i_0])))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                var_17 = var_4;
                                var_18 ^= ((!(((-var_9 ? var_4 : ((18446744073709551615 - (arr_6 [i_2] [i_5]))))))));
                                var_19 = (max(var_19, ((max(((59294 ? 4294967295 : 10)), (~1620838801728554520))))));
                                arr_18 [i_6] [i_3] [0] [i_3] [12] = ((!((!(arr_11 [i_5])))));
                                arr_19 [i_2] [i_6] [i_6] = ((((((max(72, var_1))) ? 16777215 : -var_14)) >> (((arr_17 [i_2] [i_3] [i_2] [i_5] [i_6] [i_3]) - 3690739211))));
                            }
                        }
                    }
                    arr_20 [i_2] = (((((!((max(128, var_1)))))) << (((max((arr_3 [i_2] [i_3]), (arr_3 [i_2] [i_3]))) - 17628350893707055826))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            {
                var_20 = 3728082795;
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_21 = (min(var_21, var_4));
                            arr_32 [i_7] [i_8] [i_9] [i_7] = ((max((arr_27 [i_7] [i_8] [i_7]), var_14)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 14;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_39 [i_7] [i_7] = ((((var_11 ? (max(var_14, 3801348631)) : (var_6 < var_2))) >> (var_2 + 577286663746137477)));
                            arr_40 [i_7] [i_7] [i_7] = (arr_3 [i_7] [i_8]);
                            arr_41 [i_7] [i_7] [i_11] [i_7] = (!var_11);
                            arr_42 [i_7] [i_8] [i_11] [i_7] = (~var_3);
                            arr_43 [i_7] [i_7] [i_11] [i_8] [i_7] = (((((1 ? 3 : 4099313071998030752))) ? ((((((arr_33 [i_7] [i_8] [i_11]) / (arr_1 [i_7])))))) : (((((arr_13 [i_7] [4] [4] [i_12]) >= 242)) ? 18446744073709551614 : -3585101939))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
