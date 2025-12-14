/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 21;i_2 += 1)
                {
                    var_16 = var_13;
                    arr_8 [i_1 + 1] [i_0] = (min(var_11, (!var_11)));
                }
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            {
                                var_17 = var_14;
                                var_18 = ((~(((((var_3 + 9223372036854775807) << (var_15 - 6795))) | (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                                var_19 = var_2;
                            }
                        }
                    }
                    var_20 = (!40915);
                    var_21 &= var_10;
                }

                for (int i_6 = 3; i_6 < 20;i_6 += 1)
                {
                    var_22 *= (((!(!var_9))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_26 [13] [i_1] [1] [i_7] [i_8] [i_0] [i_0] = (arr_16 [i_1 + 1] [i_1]);
                                var_23 &= ((((((arr_17 [i_8] [i_8] [i_6] [i_1 + 1] [i_1] [i_8] [i_0]) ? (arr_12 [i_0] [i_0] [i_8] [i_0]) : ((((!(arr_24 [i_0] [i_6] [i_0] [i_8] [i_8])))))))) ? 16382 : ((-(arr_11 [i_8])))));
                                var_24 = (((~var_6) && (arr_2 [i_1] [i_6 + 1] [i_0])));
                                var_25 *= (arr_0 [i_8]);
                            }
                        }
                    }
                    var_26 &= (16382 | 16382);
                    var_27 *= (arr_10 [i_1] [i_6]);
                }
                for (int i_9 = 0; i_9 < 22;i_9 += 1)
                {
                    var_28 = (40915 || 23045);

                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        var_29 *= (~var_1);
                        var_30 = ((max((((1 << (var_7 + 1694635058)))), var_5)));
                        var_31 = (~(arr_22 [i_10 - 1] [i_1 - 1] [i_0]));
                        var_32 = (arr_14 [i_0] [i_1] [12] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 18;i_11 += 1)
                    {
                        arr_34 [i_0] [i_9] [i_1 + 1] [i_0] [i_0] = (arr_32 [i_0]);
                        var_33 = var_6;
                        var_34 = -var_12;
                    }
                }

                for (int i_12 = 0; i_12 < 22;i_12 += 1)
                {
                    var_35 *= 2990284169;
                    var_36 = -16215;
                    var_37 = (max(var_37, (((-(arr_33 [i_12] [13] [i_12] [i_0] [i_0] [i_0]))))));
                }
            }
        }
    }
    var_38 = var_14;
    var_39 = max((var_4 * var_14), var_6);
    var_40 = (((~var_12) == (var_6 != var_12)));
    var_41 = var_2;
    #pragma endscop
}
