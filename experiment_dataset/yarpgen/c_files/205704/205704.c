/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((min(((var_7 ? ((var_1 ? var_6 : var_4)) : (~var_2))), (~var_7))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, ((((!var_3) ? (min(-var_3, ((var_7 ? var_1 : var_6)))) : (min(var_5, var_2)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 &= ((((!((min(-7, 6))))) ? (arr_0 [1]) : (min(var_1, ((~(arr_3 [0] [0])))))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_14 &= (~(~var_10));
                        var_15 = ((var_10 ? var_6 : (((arr_11 [i_3] [i_1] [i_3] [i_3]) ? var_8 : var_6))));
                    }
                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        var_16 &= ((~(min((min(var_1, (arr_11 [i_0] [i_4 - 2] [i_2] [i_4]))), (arr_2 [i_0])))));

                        for (int i_5 = 1; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            var_17 = (min(var_17, (((min(var_2, (arr_0 [i_4])))))));
                            arr_18 [i_0] [i_0] [i_0] [8] = (max((((~(min(1, -7))))), (min(((var_9 ? var_6 : (arr_0 [i_0]))), (max(var_6, (arr_11 [i_2] [i_0] [i_0] [i_2])))))));
                        }
                        /* vectorizable */
                        for (int i_6 = 1; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            var_18 = (min(var_18, (!-1)));
                            arr_21 [i_0] [i_2] = (!-9);
                            var_19 += var_5;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_0] [i_1] [i_1] [i_4] [i_0] [i_7] = (arr_20 [13] [13] [i_2] [i_2] [13] [i_2] [i_2]);
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_4] [i_7] [i_0] = ((((!(arr_24 [i_0] [i_2] [i_2] [i_2] [i_2]))) ? (((arr_0 [i_0]) ? var_10 : (arr_13 [i_0] [i_0] [i_2] [i_4]))) : -var_7));
                        }
                        var_20 &= var_9;
                        arr_27 [i_0] [i_4] [i_0] [i_0] &= var_6;
                        var_21 = (min(((~(max(var_5, var_0)))), var_5));
                    }
                    var_22 *= (~(min((arr_15 [i_0] [i_0] [i_0] [0]), var_8)));
                }
            }
        }
    }
    #pragma endscop
}
