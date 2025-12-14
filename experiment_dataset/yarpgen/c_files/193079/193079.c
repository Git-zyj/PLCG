/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193079
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? -127 : var_3));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 *= var_9;
            var_14 ^= ((!((max(var_8, 1)))));
            var_15 = (max(var_15, var_0));
            var_16 += (max((~var_11), (arr_1 [i_0])));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = var_5;
            var_18 *= ((!(((1 ? (arr_2 [i_0] [i_0]) : (arr_1 [i_2]))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_19 ^= (((arr_1 [i_0]) ? (~1) : var_9));
            arr_10 [i_0] [14] = var_1;
            var_20 *= (arr_3 [5] [5] [i_0]);
        }
        var_21 = (((min((arr_8 [i_0]), var_0)) << (((max((arr_8 [i_0]), var_2)) - 12614338021666229897))));
    }
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_23 = (max(var_23, ((((13 ? 1 : 1))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((max(((~(!-497971657))), var_9)))));

                            for (int i_8 = 1; i_8 < 18;i_8 += 1) /* same iter space */
                            {
                                var_25 = (((arr_18 [i_4] [i_5] [i_4] [i_4]) ? (((arr_8 [i_4 - 2]) ? ((~(arr_12 [i_4]))) : ((-(arr_4 [13] [11]))))) : (((!(!var_6))))));
                                var_26 = ((var_7 ? (min(var_2, (arr_17 [i_4 + 1]))) : (((~((min(var_0, var_0))))))));
                            }
                            for (int i_9 = 1; i_9 < 18;i_9 += 1) /* same iter space */
                            {
                                var_27 = 2117;
                                var_28 = ((!((((arr_1 [i_6]) / (arr_1 [i_4 - 2]))))));
                            }
                            var_29 = (max(var_29, (((((((arr_4 [i_4 - 2] [i_5]) | (arr_4 [i_4] [i_4 - 2])))) || (((0 ? (min(var_2, (arr_14 [i_4] [i_7]))) : (arr_18 [i_4] [i_5] [i_7] [i_7])))))))));
                        }
                    }
                }
                var_30 += 18;
            }
        }
    }
    var_31 = (~var_9);
    #pragma endscop
}
