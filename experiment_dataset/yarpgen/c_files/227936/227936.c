/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_16 = ((193 ? ((((!var_0) ? (arr_0 [i_0]) : (((arr_2 [i_0]) ? var_11 : -1986317788715620405))))) : ((var_15 << (((arr_0 [i_0]) - 3057124641))))));
                var_17 = (min(var_17, (min((arr_4 [i_1 + 1] [i_1]), (((!(((21497 ? (arr_1 [i_0]) : (arr_3 [i_0])))))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_18 = (arr_6 [i_3 - 4] [i_1 - 1] [i_1]);

                            for (int i_4 = 1; i_4 < 22;i_4 += 1)
                            {
                                var_19 &= ((((max((arr_4 [i_1 + 1] [i_3 - 1]), (arr_4 [i_1 + 1] [i_3 + 2])))) ? ((min((arr_11 [i_0] [i_0] [i_0] [i_0]), (arr_11 [i_4 - 1] [i_4 + 1] [i_3 + 2] [i_1 + 1])))) : ((((min((arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4]), var_1))) ? (arr_10 [i_0] [i_0] [i_2]) : ((max(63, 53)))))));
                                var_20 = var_14;
                                var_21 += (min((arr_7 [i_0]), ((var_12 * (arr_7 [i_3 - 2])))));
                            }

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_22 += 41183;
                                arr_17 [i_0] [i_0] [2] = (var_13 / 24347);
                            }
                            for (int i_6 = 0; i_6 < 1;i_6 += 1)
                            {
                                var_23 = (((arr_16 [i_0] [i_1 - 1] [i_1] [i_1 - 1] [i_3] [i_6] [i_6]) * (4236559896 <= 41180)));
                                var_24 = (((((arr_9 [i_6] [i_2]) ? (arr_9 [i_3 + 2] [i_1 - 1]) : (arr_9 [i_3 + 1] [i_3 - 2])))) ? ((max(var_7, var_0))) : 24336);
                                var_25 = -1986317788715620405;
                                var_26 |= ((((min(15563, 1071644672))) ? (arr_6 [i_3 - 1] [i_1 - 1] [i_1]) : (min(2979711651062881263, 115))));
                            }
                        }
                    }
                }
                var_27 = (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            {
                arr_25 [i_7] [i_7] = (min((((41195 ^ var_15) / (~var_6))), (min(var_1, (arr_12 [i_8] [i_8 - 2] [i_8] [i_8 - 2] [i_8 + 1])))));
                var_28 = (arr_18 [i_8]);
            }
        }
    }
    #pragma endscop
}
