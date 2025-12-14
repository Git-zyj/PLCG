/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += -3593225435;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((701741861 ^ ((((771438836 < ((~(arr_5 [i_0] [i_0] [i_0])))))))));
                    var_13 = (max(((max((arr_4 [i_1 - 1] [i_1 + 1]), 6))), (max(0, 178))));

                    for (int i_3 = 3; i_3 < 21;i_3 += 1) /* same iter space */
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_14 = var_7;
                            arr_12 [i_0] [i_0] [i_2] [i_2] [i_0] [i_4] = (!-517450336);
                            arr_13 [i_0] = (var_4 && var_3);
                        }
                        for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                        {
                            var_15 = (min(var_15, ((max(var_2, var_0)))));
                            arr_17 [i_2] &= (((((((((arr_2 [i_1] [i_1] [i_5]) ? 77 : 29))) ? (arr_5 [i_1] [i_1] [i_0]) : 41))) ? (((min((arr_10 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1]), (arr_10 [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 - 1]))))) : (max((arr_16 [i_0] [i_0]), -var_8))));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_6] = ((!(arr_19 [i_3 - 2] [i_6] [i_3 - 2] [i_6] [i_6] [i_6])));
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 50963;
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                        }

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            var_16 = (min((((arr_4 [i_0] [i_0]) < (var_7 & 10494948598611675184))), ((var_9 > (1 / -95)))));
                            var_17 = (min(var_17, 2147483647));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_3] = (arr_8 [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        var_18 = ((max((arr_29 [i_8] [i_8 - 2] [i_1 + 1] [i_1 + 1]), 407971828)) * ((min((arr_29 [i_8 + 1] [i_8 - 3] [i_1 + 1] [i_1 - 1]), var_6))));
                        var_19 *= (arr_27 [i_0] [i_0] [i_2] [i_8]);
                        var_20 = (min(var_20, ((max((min(1751301131, (~2430445033))), 536870848)))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 17;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 17;i_10 += 1)
        {
            {
                var_21 *= 3389802543;
                arr_37 [i_9] [i_9] [i_9] &= (max(var_6, (arr_0 [i_10])));
                arr_38 [i_9] [i_10] [i_9] = (max((arr_20 [i_10] [i_10] [i_10] [i_10] [i_10]), (max((arr_11 [i_10] [i_10] [i_9] [i_10] [i_9]), var_0))));
            }
        }
    }
    var_22 *= -2233785415175766016;
    #pragma endscop
}
