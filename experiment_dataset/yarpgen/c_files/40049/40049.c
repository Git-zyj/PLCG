/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_15 *= var_9;
                                var_16 = (((-(arr_11 [i_1]))));
                                arr_13 [i_0] [i_0] [i_1] [5] [i_1] = (!32756);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_21 [i_1] [14] [14] [14] [i_1] = (arr_14 [i_0] [i_5 + 2] [i_5 + 1] [i_5]);
                                var_17 = (arr_2 [i_2] [i_2]);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] |= (arr_5 [i_0] [i_1 + 1]);
                                arr_29 [i_0] [i_1] [i_7] [4] [i_8] |= 32741;
                                var_18 = var_4;
                            }
                        }
                    }
                    var_19 |= (((~603431650395032364) + (((min(32753, (((!(arr_18 [19] [19]))))))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_20 *= var_0;
                                arr_35 [i_1] [i_1] [i_1] [0] [i_1] [i_1] [i_2] = (!var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = ((-32762 ? var_12 : var_14));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 23;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 23;i_12 += 1)
        {
            {
                arr_40 [i_11] [i_11] [i_12] = ((((((arr_38 [i_11] [i_11] [i_12]) ? (arr_36 [i_11] [i_11]) : (arr_38 [i_11] [i_12] [i_12])))) ? ((((min((arr_38 [i_11] [i_12] [i_12]), var_10)) != var_6))) : var_6));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 23;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 23;i_14 += 1)
                    {
                        {
                            var_23 = var_0;
                            var_24 = (min(var_24, (((-((~(!32753))))))));
                            arr_45 [i_13] [i_13] [i_13] [i_13] [i_13] = (max((max((arr_39 [i_11]), (arr_36 [i_14] [i_11]))), ((((max(var_10, (arr_38 [i_11] [20] [i_12])))) ? (arr_38 [i_11] [i_12] [i_13]) : (((min(-127, 1))))))));
                            var_25 *= ((~((-29544 ? -32761 : (arr_38 [5] [i_13] [i_14])))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
