/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_7, var_2));
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_18 = arr_8 [i_0] [i_0];
                    var_19 &= ((((((var_10 ? var_11 : (arr_0 [2] [2]))))) < (min((arr_2 [1] [1] [i_2]), var_15))));
                }
                for (int i_3 = 4; i_3 < 6;i_3 += 1)
                {
                    var_20 = min((min((arr_2 [i_0] [i_1] [i_1]), var_7)), ((((arr_2 [6] [i_3 + 2] [9]) || var_5))));
                    var_21 = (var_13 < (arr_0 [i_0] [3]));
                    var_22 = ((min((arr_10 [0] [0] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_1] [0] [i_3 - 1]))));
                }
                var_23 = ((((((arr_9 [i_0] [i_0] [1]) ? (!var_8) : (max(var_3, (arr_7 [i_0] [8] [9] [1])))))) && (((((!(arr_8 [1] [i_1]))) ? (min((arr_4 [4] [8]), 559748837)) : ((min(var_15, (arr_9 [6] [i_1] [1])))))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_24 = var_4;
                            var_25 ^= ((1 >> (((!(((var_11 % (arr_6 [7] [i_1])))))))));
                            var_26 = ((max(var_5, var_12)));

                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_27 = (~var_6);
                                var_28 = (arr_9 [i_0] [4] [i_1]);
                                var_29 *= 880304811;
                                var_30 ^= ((~((~(arr_15 [8] [i_1] [7])))));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                            {
                                var_31 = (~1180620000);
                                var_32 = var_11;
                                var_33 += -var_12;
                                var_34 |= (((arr_0 [i_0] [i_1]) ? var_2 : (((arr_9 [5] [i_1] [5]) ? var_0 : (arr_19 [i_0] [i_0] [i_4] [i_5] [i_5] [7] [9])))));
                                var_35 = (arr_14 [i_0] [5] [7] [9]);
                            }
                            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                            {
                                var_36 = (max(var_36, (arr_12 [i_0] [1] [8] [2])));
                                var_37 = ((-(~var_1)));
                            }
                            for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                            {
                                var_38 = (min((max((arr_27 [i_5] [4] [i_4] [i_5] [2] [7]), (~168363544))), ((max((max(var_7, var_10)), ((((arr_26 [i_4] [2] [0] [2] [0] [0]) ? (arr_0 [0] [i_0]) : var_15))))))));
                                var_39 = ((((min(-2132025730, var_12))) ? var_11 : (max((!var_11), var_12))));
                                var_40 = (min(var_40, var_6));
                                var_41 *= (min(((~(arr_27 [i_0] [i_9] [4] [i_5] [2] [8]))), (min((arr_8 [i_0] [9]), (arr_27 [i_0] [i_9] [0] [0] [0] [i_0])))));
                                var_42 = (min((min((arr_19 [4] [4] [i_4] [i_5] [9] [2] [3]), (arr_15 [i_0] [i_1] [9]))), (((~(~var_15))))));
                            }
                        }
                    }
                }
                var_43 = ((min((var_7 | var_14), ((min(var_13, var_15))))));
            }
        }
    }
    #pragma endscop
}
