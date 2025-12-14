/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 % (var_6 & 246)));
    var_20 = (((((~var_17) ? var_16 : (max(var_13, 7))))) ? (((min(var_18, var_0)) - (((var_0 ? var_10 : 14))))) : (var_16 <= 0));
    var_21 = (var_16 < var_2);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0 + 1] [i_0 + 1] [i_0 + 1] = var_16;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 8;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 2] [i_1] [1] [i_3] [i_3 + 3] [i_1] = (max((min(var_14, var_13)), ((((var_17 + 14) != var_6)))));

                            for (int i_4 = 2; i_4 < 10;i_4 += 1)
                            {
                                arr_15 [8] [i_3 + 3] [6] [6] [i_0] = (max(((64 ? 246 : -2758088847322380784)), ((max(((246 ? 1 : 255)), (((var_4 < (arr_6 [i_0] [0] [0] [i_0 - 1])))))))));
                                arr_16 [i_0] [i_0] [i_0 - 2] [6] [i_0 + 1] [i_0] [i_0] = (--226);
                                arr_17 [0] [i_1] [i_1] = 254;
                                arr_18 [i_0] [i_1] [i_2 - 1] [i_1] [i_4] [5] = (min(((var_12 ? 8822 : 15)), (max((91 / 8822), ((min(var_10, 1)))))));
                                arr_19 [i_0 - 2] [i_1] = (((22 ? -1992986664 : 15307588187494177216)));
                            }
                            arr_20 [i_0 + 1] [1] = (((var_14 | 16069451465870929165) ? ((((((1173 ? var_7 : 59398))) ? var_8 : 15))) : (((arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] [1]) | (((max(74, 8432))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_28 [1] [1] [1] [i_1] = (((min(var_17, (arr_24 [8] [8] [i_6]))) > (((1 ? 1173 : (max(-817501344, 246)))))));

                            for (int i_7 = 0; i_7 < 11;i_7 += 1)
                            {
                                arr_31 [i_0] [6] [i_1] [i_5] [i_6] [i_7] = var_15;
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [4] = (((~(~-854504550))));
                                arr_33 [i_7] [i_7] [i_6] [i_5] [i_1] [i_0] = var_6;
                                arr_34 [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_0] = 19;
                                arr_35 [i_0] [i_1] [i_5] [i_6] [i_6] [i_7] = (((arr_8 [7] [i_1] [i_5] [i_0 + 2]) ? ((var_7 * (arr_22 [i_0] [i_1] [i_5] [i_0 + 2]))) : (~24809)));
                            }
                            for (int i_8 = 0; i_8 < 11;i_8 += 1)
                            {
                                arr_38 [i_0] [i_1] [i_0] [i_1] [i_8] = ((+((((var_11 ? (arr_27 [i_8] [i_6] [i_5] [7] [i_0]) : 134))))));
                                arr_39 [i_0 + 1] = ((var_12 ? (((252 ? 238 : 8413))) : (192 * var_5)));
                                arr_40 [i_5] [i_6] [i_5] = (arr_13 [i_8] [i_6] [7] [i_0 + 2] [i_0] [i_0 + 2]);
                                arr_41 [i_0] [1] [i_0] [i_5] [i_8] [0] [i_8] = ((((((~-40) ? var_18 : ((var_3 ? (arr_5 [8] [10] [i_6]) : var_12))))) ? 246 : ((246 ? var_6 : var_16))));
                            }
                            arr_42 [i_0] [i_1] [i_5] [i_5] = 0;
                            arr_43 [i_0] [i_0] [i_0] [i_0 + 2] = var_9;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
