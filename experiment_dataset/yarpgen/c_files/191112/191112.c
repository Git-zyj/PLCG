/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191112
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((((var_6 ? var_14 : (!var_7))) + 2147483647)) >> (((~var_0) + 25)));
    var_20 = (max(var_20, var_2));
    var_21 -= (((((var_18 ? ((min(var_18, var_0))) : var_9))) ? (!var_11) : (((~5746) ? 60947 : ((-36 ? var_1 : var_14))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_22 = (min(var_22, (((arr_0 [i_3] [i_2 - 1]) & var_3))));
                        arr_9 [6] [i_0] [i_0] [i_0] = (min(-var_7, (((((var_17 + 2147483647) << (4294967291 - 4294967291)))))));

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_2] [i_2] [i_0] = ((((min((~var_9), (!1)))) && (((var_0 ? 1 : 4)))));
                            arr_15 [i_0] [i_1] [i_0] [i_3] [i_3] &= (((((max(var_4, var_0)) & (((1 & (arr_0 [i_3] [i_3]))))))) ? (~var_0) : ((((min(11003309400860444584, var_7))) ? (arr_0 [i_3] [i_4]) : (32113 ^ var_15))));
                        }
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            var_23 = (min(var_23, (((((((var_12 ? var_7 : var_6)) ? (~1838293440934615243) : var_10)))))));
                            var_24 += -5949276093637874580;
                        }
                        for (int i_6 = 1; i_6 < 13;i_6 += 1)
                        {
                            var_25 = (min(var_25, (~var_6)));
                            var_26 = 39;
                        }
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_22 [i_0] [i_0] = max(var_17, var_8);
                            var_27 ^= ((~(((!(arr_8 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 - 1]))))));
                            arr_23 [i_2 - 1] [i_2 - 1] [i_0] [i_2 - 1] [i_2] [i_2 - 1] [i_2] = 28184;
                        }
                    }
                }
            }
        }
        arr_24 [i_0] = arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        var_28 *= -1;
    }
    var_29 += -var_15;
    #pragma endscop
}
