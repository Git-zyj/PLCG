/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = (min(((min((23 <= var_12), (max(-1205070404, -76))))), ((9028405316685915828 ? (max(var_2, var_17)) : ((max(var_14, -1205070426)))))));
        arr_3 [i_0] = -1205070404;
        var_18 -= (var_5 / 1205070408);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_2] [i_1] = ((((!((max(1205070393, (arr_7 [i_1])))))) ? ((4095 * ((max((arr_6 [i_2]), var_4))))) : (!57915)));
                var_19 = (min(var_19, (!var_3)));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            {
                                var_20 = var_16;
                                var_21 = 4115;
                                arr_17 [i_2] [i_1] [i_5] = (var_16 && var_6);
                            }
                        }
                    }
                    arr_18 [i_1] [i_1] [i_1] = var_3;
                    arr_19 [i_1] [0] [i_3] = var_7;
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_22 = var_6;
                                var_23 = (min(var_23, ((((((min(8151541174124034606, 237) > (~var_15)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                arr_35 [i_1] [i_2] [i_6] = 57931;
                                var_24 += ((min(0, 7209117948471983923)));
                                arr_36 [i_1] [i_1] [i_2] [i_6] [i_9] [i_10] [12] &= (max(7592, 11237626125237567693));
                                arr_37 [i_1] [i_9] [i_6] [i_1] = ((!(((-2122221198462634277 ? -7536977600240086693 : 2048)))));
                            }
                        }
                    }
                }
                arr_38 [i_1] [11] [i_2] = (((arr_10 [i_1]) ? (((min(((((arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [4]) != 100))), var_12)))) : var_7));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 1; i_11 < 12;i_11 += 1)
    {
        for (int i_12 = 3; i_12 < 12;i_12 += 1)
        {
            {
                var_25 = (((((~(arr_42 [i_11 + 1] [i_12 - 3])))) < ((((min(-1205070411, 57924))) ? (~970316012082985973) : -4090))));
                var_26 = (!var_7);
            }
        }
    }
    var_27 = (~((var_16 ? ((max(var_0, var_1))) : -5080286614468281382)));
    #pragma endscop
}
