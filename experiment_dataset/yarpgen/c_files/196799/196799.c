/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 18;i_4 += 1)
                        {
                            arr_15 [i_4] [i_1] [i_1] [i_1] = ((-(((arr_13 [i_2] [i_4 - 2]) | var_5))));
                            arr_16 [i_1] [i_1] = (((!1) << (((arr_9 [i_1 - 1] [i_4 - 3] [i_4 + 2] [i_1]) - 113))));
                        }
                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_19 [i_2] &= ((((arr_11 [i_5] [i_2] [i_3] [4] [i_2] [i_0]) <= 7306025916258181613)));
                            var_15 = (((!-73) + (((!(arr_14 [i_0] [i_0] [i_0] [i_3] [i_0]))))));
                            var_16 += (((arr_12 [i_1] [i_1] [i_1] [i_1 + 2] [i_1]) ? ((var_12 ? 0 : var_7)) : var_6));
                            arr_20 [i_0] [i_0] [i_2] [18] [i_0] |= 1;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1 - 1] [19] [i_1] [10] [i_6] = (arr_1 [i_1 - 1] [16]);
                            var_17 = (min(var_17, (((var_10 && (arr_21 [i_1] [i_1 + 2] [i_1] [i_2] [0]))))));
                            var_18 |= (((arr_12 [i_0] [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 1]) || var_2));
                        }
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_19 = (arr_10 [i_7] [i_3] [i_2] [i_1]);
                            var_20 *= var_14;
                            var_21 = (((arr_14 [i_0] [i_1 + 1] [i_2] [i_3] [i_7]) ? (((1 ? 12878 : 32704))) : (arr_3 [i_1] [i_1 - 1])));
                        }
                        var_22 = 1;
                        var_23 = 0;
                        var_24 *= var_5;
                        var_25 *= ((arr_27 [i_2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_0] [i_2]) == var_1);
                    }
                }
            }
        }
        var_26 = var_10;
    }
    var_27 = ((((((32754 << 0) ? ((var_5 ? var_5 : var_6)) : var_13))) ? (((((var_1 ? var_0 : 69))) ? (!0) : 985800049522149916)) : ((((~var_10) ? (var_14 >> var_0) : 3994537041)))));
    #pragma endscop
}
