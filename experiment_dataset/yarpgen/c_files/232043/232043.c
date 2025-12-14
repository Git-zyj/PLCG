/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_16 = (((arr_6 [i_1] [i_0] [i_1]) == (arr_6 [i_1] [i_1] [i_1])));
                    var_17 -= (((arr_0 [i_0 + 1]) != var_5));
                    var_18 *= (((1026009960 ? (arr_4 [1] [i_2] [i_0 + 1]) : var_9)));
                    var_19 = (max(var_19, (arr_4 [i_0] [i_2] [i_0 - 1])));
                    var_20 = (max(var_20, ((((arr_3 [i_2] [i_2]) != (arr_3 [i_2] [i_0]))))));
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 4; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_21 = ((((min((min(var_6, (arr_7 [i_0] [19] [i_1]))), 101))) >= 112));
                            var_22 = (max(var_22, ((min(((((-495238048 / 32757) ? (~156) : ((var_3 ? var_12 : 255))))), (min((!var_7), ((~(arr_2 [1] [i_4] [i_4 + 1]))))))))));
                        }
                    }
                }
                var_23 = (var_3 ? (min((arr_4 [i_0 - 1] [12] [i_0]), var_11)) : var_1);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {

                            for (int i_7 = 2; i_7 < 19;i_7 += 1)
                            {
                                var_24 = (arr_18 [i_0] [i_1] [i_5 + 4] [i_1] [i_0 - 1] [i_6] [i_0 - 1]);
                                var_25 = (min(var_25, var_13));
                                var_26 = (((!var_0) | (((min(58720256, 58720274)) << (((-1316829441 + 1316829463) - 17))))));
                                var_27 = var_3;
                                var_28 = ((((min((var_1 >= 160), (arr_1 [i_5 + 3]))))) - ((39 | (min(4754903318268124258, 47)))));
                            }
                            var_29 = ((+(min((arr_15 [i_1] [i_0 - 1] [i_0 + 1] [i_5 - 1]), (arr_8 [i_0 + 1] [i_1])))));

                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_30 = var_9;
                                var_31 = (min((arr_12 [i_1] [i_6] [i_5 + 2] [1] [i_5 + 2]), ((~((var_2 ? 61 : -71))))));
                                var_32 = (((arr_3 [i_1] [i_5 - 2]) == (arr_22 [i_1] [i_1])));
                                var_33 = (min(var_33, (arr_3 [8] [i_0 + 1])));
                                var_34 = ((((var_3 & (53358 == 142))) | (((min((min((arr_5 [i_1] [i_1]), var_7)), ((((arr_17 [i_8] [i_6] [i_1] [i_1] [7] [7]) && (arr_20 [i_1] [i_0] [i_1] [i_5 - 1] [i_6] [i_8] [1]))))))))));
                            }
                            for (int i_9 = 0; i_9 < 21;i_9 += 1)
                            {
                                var_35 = (max(var_35, ((min((arr_8 [i_0] [0]), var_0)))));
                                var_36 = (!((!(arr_18 [i_0 - 1] [i_1] [i_5] [i_1] [i_1] [i_1] [i_0]))));
                                var_37 = (min(var_37, -32741));
                            }
                        }
                    }
                }
            }
        }
    }
    var_38 = (min(var_38, (((-58720255 & ((min(var_7, (min(55, var_7))))))))));
    var_39 = (((((min(32737, 126)))) && (((~31) && -var_5))));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            {
                var_40 = (-32370 / 2146959360);
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_41 -= (((arr_2 [i_10] [i_10] [i_10]) ? ((var_3 & (((~(arr_19 [i_10] [i_13] [i_12] [i_10] [i_10] [8] [i_13])))))) : (min(65534, (((arr_20 [i_10] [i_11 + 1] [i_12] [4] [i_13] [i_13] [4]) ? 2147483643 : 13700810936440113910))))));
                            var_42 = ((((((min((arr_30 [i_10] [i_12] [16]), 16))) ? var_9 : var_14)) | -139932486));
                            var_43 = (min(var_43, var_14));
                        }
                    }
                }
            }
        }
    }
    var_44 = var_14;
    #pragma endscop
}
