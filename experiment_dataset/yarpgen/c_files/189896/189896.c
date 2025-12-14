/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189896
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_14, (((!(((var_0 ? var_6 : var_8))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_16;
        arr_5 [i_0] [i_0] = (((arr_0 [i_0]) ? (((!(!var_15)))) : (((-var_13 > ((-(arr_3 [i_0] [2]))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 14;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            arr_18 [i_1] [i_2] [i_3 - 1] [i_2] [i_5] &= ((var_3 ? var_3 : (arr_11 [i_3 - 1])));
                            arr_19 [i_1] [3] [i_3 - 1] [i_4 - 1] [i_3] [i_5] = var_6;
                            var_18 = (((((arr_7 [i_4 + 2]) == -4764590033080809206)) ? (!284286499) : ((284286499 ? 1085964338 : (arr_8 [i_5])))));
                            var_19 = (max(var_19, (arr_12 [i_3 + 1] [i_3 - 2] [i_4 - 1] [i_4])));
                            var_20 -= -1085964339;
                        }
                        arr_20 [10] [i_2] [i_3] [i_2] = (((arr_11 [i_3 - 2]) ? 822240138885051099 : (arr_11 [i_3 + 2])));
                        arr_21 [i_1] [i_3] [i_4 + 2] = (arr_17 [i_3 - 1] [i_3 - 1] [i_4 + 2] [i_4 - 1] [i_4 + 2]);
                        var_21 = (arr_14 [i_1] [i_2] [i_3] [i_3] [14]);
                        var_22 += -841457091;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_23 = (-6538473445599232533 / (arr_12 [i_1] [i_6] [i_6] [i_7]));
                    /* LoopNest 2 */
                    for (int i_8 = 3; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_24 = (arr_13 [i_1] [i_1] [i_8] [i_8 + 1]);
                                var_25 = -var_2;
                                var_26 = (((arr_16 [i_6] [i_7] [i_8 - 2] [i_8] [i_8 - 1] [i_9]) ? (arr_17 [i_7] [i_7] [i_8 - 2] [i_8] [i_9]) : (arr_17 [i_7] [i_7] [i_8 - 2] [i_9] [i_9])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 16;i_11 += 1)
                        {
                            {
                                var_27 = (min(var_27, ((~(var_16 < var_3)))));
                                arr_40 [i_1] [i_1] [i_6] [i_6] [i_7] [i_10] [14] = (var_9 / var_14);
                                var_28 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_29 = -284286486;
    var_30 = var_11;
    var_31 = (max(var_31, ((~(min(-841457091, (min(0, -822240138885051104))))))));
    #pragma endscop
}
