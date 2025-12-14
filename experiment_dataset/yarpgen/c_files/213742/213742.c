/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_3;
    var_12 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_13 = (max((max((((arr_1 [i_0]) ? (arr_1 [i_0]) : var_2)), ((-(arr_3 [i_0]))))), ((min(var_0, (arr_2 [i_1 + 1] [i_1 + 1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (min(var_14, (max(var_2, (arr_4 [i_2] [i_1 - 1] [i_0])))));

                            for (int i_4 = 0; i_4 < 24;i_4 += 1)
                            {
                                var_15 = (arr_2 [i_2] [i_3]);
                                var_16 = (arr_4 [i_1] [i_1] [i_1]);
                            }
                            for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                            {
                                var_17 = (((min(var_10, (arr_7 [i_3] [i_0])))) / (((-(arr_9 [i_0])))));
                                var_18 |= var_4;
                                var_19 = (max(var_19, (((var_10 && (((((-(arr_9 [i_0]))) * (!var_2)))))))));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                            {
                                var_20 = (-(arr_10 [i_1 + 1] [i_1 + 1] [i_1] [i_1 - 1] [0] [i_1]));
                                var_21 = ((!(arr_0 [i_6])));
                            }

                            for (int i_7 = 0; i_7 < 1;i_7 += 1)
                            {
                                var_22 = var_10;
                                var_23 = (min(101, 117));
                            }

                            for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                            {
                                var_24 = ((max(((-7943932093736028117 ? 1081535258 : -7943932093736028109)), -114)));
                                var_25 -= ((!(arr_3 [i_1 + 1])));
                                var_26 *= var_0;
                                var_27 = ((((((~var_2) ? var_4 : ((var_5 ? var_4 : var_9))))) ? (arr_4 [3] [i_3] [i_2]) : var_8));
                            }
                            /* vectorizable */
                            for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                            {
                                var_28 = arr_21 [i_1 + 1] [i_1 - 1];
                                var_29 = ((var_7 ? (arr_19 [i_9] [i_1] [i_2] [i_1] [13] [i_1]) : (arr_19 [i_9] [i_9] [i_3] [i_2] [8] [i_0])));
                            }
                            var_30 = var_2;
                        }
                    }
                }
                var_31 = var_3;
                var_32 = arr_3 [i_0];
            }
        }
    }
    #pragma endscop
}
