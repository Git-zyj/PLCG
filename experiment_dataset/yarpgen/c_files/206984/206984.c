/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_21 = (max((arr_1 [i_4] [i_2]), (((((7972 ? var_13 : (arr_5 [i_0] [i_3] [i_4])))) ? var_17 : ((2665312116 ^ (arr_8 [i_4] [i_2] [i_2])))))));
                                var_22 = (((40234 ? 1538669447924686354 : (((arr_7 [i_0] [i_1] [i_1]) / 15302265159438346944)))));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 15;i_7 += 1)
                            {
                                var_23 = var_5;
                                var_24 = (max(var_24, (((233 ? (arr_10 [i_7] [i_1]) : (arr_10 [i_6] [i_7]))))));
                                var_25 |= (((arr_13 [i_5 + 1] [i_5] [i_5 + 1] [i_6] [i_1 - 1]) ? (!-7849647899132236994) : (((var_7 || (arr_15 [i_0] [i_1] [i_5 - 3] [i_7]))))));
                                var_26 = -7849647899132237000;
                                var_27 = ((-((-398559774526083625 ? var_4 : -398559774526083628))));
                            }
                            for (int i_8 = 1; i_8 < 13;i_8 += 1)
                            {
                                var_28 += var_11;
                                var_29 = ((var_13 ? -1407069568484914329 : 1407069568484914327));
                                var_30 = (min((((max(var_12, var_1)))), (((arr_15 [i_1 + 1] [i_1] [i_5 - 1] [i_8 - 1]) / (arr_15 [i_1 + 2] [i_8] [i_8] [i_8 - 1])))));
                            }
                            for (int i_9 = 4; i_9 < 13;i_9 += 1)
                            {
                                var_31 |= (arr_9 [i_9 - 4]);
                                var_32 = 429040676;
                            }
                            /* vectorizable */
                            for (int i_10 = 2; i_10 < 14;i_10 += 1)
                            {
                                var_33 = var_9;
                                var_34 += -3163;
                                var_35 = var_3;
                                var_36 = arr_8 [i_5 - 2] [i_1 + 2] [i_1 - 1];
                            }
                            var_37 = (max(var_37, (arr_9 [i_1])));
                        }
                    }
                }
                var_38 += 2147475456;
            }
        }
    }
    var_39 -= ((~(~var_7)));
    var_40 = -var_10;
    #pragma endscop
}
