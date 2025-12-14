/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235116
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (((((var_9 ? ((50676 ? 0 : 1215248169)) : ((var_12 ? var_8 : var_10))))) ? (!var_6) : 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            var_17 = (min(var_17, (((4 ? -1 : 17360479514281271205)))));
                            arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_1] = (var_6 < var_2);
                            arr_15 [1] |= 8;
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_18 = (min(var_18, (((var_7 ? ((var_1 ? var_13 : (arr_12 [6] [6] [i_3] [i_2 - 3] [6] [6] [6]))) : (arr_10 [i_0 + 1] [i_0] [i_1 - 3] [i_2 + 1]))))));
                            var_19 += (((((var_3 ? (arr_4 [i_0] [i_2 + 3] [i_3]) : var_10))) * var_12));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_20 = 47288;
                            arr_22 [i_1] = var_11;
                        }
                        var_21 = (min(var_7, (arr_10 [i_0] [i_0] [i_2] [i_3])));
                    }
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        var_22 = (min(var_22, (arr_1 [i_0 - 1])));
                        var_23 ^= ((((((41957 ? 316068820 : 5211078176465409495))) ? var_1 : var_8)));
                    }

                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {

                        for (int i_9 = 3; i_9 < 15;i_9 += 1)
                        {
                            arr_32 [i_9] [i_1] [i_1] [i_0] = (~var_12);
                            var_24 += var_9;
                        }
                        var_25 = var_15;
                    }
                }
                for (int i_10 = 3; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, ((min(((max(var_3, var_13))), (~var_1))))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 1;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 0;i_12 += 1)
                        {
                            {
                                arr_40 [i_12] [i_11] [i_1] [i_1] [i_0] = (min((min(((((arr_38 [i_1] [5]) ? (arr_33 [14] [i_1] [i_12]) : (arr_29 [12] [i_1] [12] [i_1] [i_0])))), (min(var_15, var_11)))), (~var_8)));
                                var_27 = (min(var_27, (((~(min((arr_12 [16] [i_10] [i_0 + 1] [i_0] [i_0] [i_0] [16]), (arr_13 [i_12 + 1] [i_11] [i_0 + 1] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_28 = (min(var_28, ((min((min(var_7, (((arr_23 [i_12] [i_12] [i_12]) ? var_12 : var_7)))), (arr_1 [i_0]))))));
                            }
                        }
                    }
                }
                for (int i_13 = 3; i_13 < 16;i_13 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 17;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 1;i_15 += 1)
                        {
                            {
                                var_29 += (((((!(arr_51 [i_0 - 1] [4] [4] [i_14] [i_15]))) ? ((~(arr_46 [i_0] [12] [i_13] [6]))) : (arr_16 [1] [1] [i_15]))));
                                var_30 = (min(var_30, (((!((min(1086264559428280410, 1))))))));
                            }
                        }
                    }
                    arr_53 [i_0 + 1] [i_1] [i_13 - 2] [i_1] = -1086264559428280411;
                }
                var_31 |= (min(((((min(var_1, var_6))) ? ((var_15 ? var_13 : var_14)) : (arr_11 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [2]))), (arr_46 [1] [1] [1] [i_0])));
                var_32 *= (min(395728819, 127));
                var_33 = (max(var_33, (((var_9 * (arr_13 [i_1] [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    #pragma endscop
}
