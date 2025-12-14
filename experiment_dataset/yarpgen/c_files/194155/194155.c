/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((0 ? ((((min(var_7, (arr_6 [i_0] [i_0])))) ? ((((arr_6 [i_0] [i_0]) || (arr_4 [i_0] [i_1 + 1] [i_2])))) : (126 || 6))) : 129));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_1 + 3] [i_0] = ((~((min((arr_6 [i_1 + 1] [i_0]), (arr_6 [i_1 + 2] [i_0]))))));
                                var_12 ^= (min(1, 9));
                                var_13 = (max(((min((arr_6 [i_0] [i_0]), (((arr_0 [i_4]) ? var_6 : (arr_0 [17])))))), (((arr_2 [i_0 + 2] [i_0] [i_0]) ? (arr_2 [i_0 + 2] [i_0] [i_0]) : (arr_2 [i_0 + 3] [i_2] [i_0])))));
                            }
                        }
                    }
                    arr_15 [i_0] [15] [i_0] = min(4294967285, (~2515507753));
                    var_14 = ((((arr_10 [i_1 + 3] [i_0 + 2]) ? (arr_3 [i_1 + 1]) : (arr_3 [i_1 + 4]))));

                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 22;i_6 += 1) /* same iter space */
                        {
                            var_15 = (max(var_15, (((max(((max(7, 140))), (arr_17 [i_0 - 1] [i_1 + 3] [i_5 + 3])))))));
                            arr_23 [i_0] [i_1] [i_0] = (min(13, 141));
                            var_16 = ((((arr_1 [i_5 + 1]) || var_6)) ? (((arr_1 [i_5 + 2]) ? (arr_6 [i_6 + 1] [i_0]) : (arr_1 [i_5 - 1]))) : (((arr_1 [i_5 + 3]) ^ (arr_6 [i_6 - 2] [i_0]))));
                        }
                        for (int i_7 = 2; i_7 < 22;i_7 += 1) /* same iter space */
                        {
                            arr_26 [i_0] [i_1] [i_0] [i_0] [i_7] = (((((arr_17 [i_5] [i_2] [i_1 + 1]) / (((var_5 ? (arr_3 [i_7 - 1]) : var_8))))) <= var_5));
                            var_17 = (max(var_17, ((min(107, 1432842697)))));
                        }

                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] = (arr_1 [i_8]);
                            var_18 = arr_4 [i_0] [i_2] [13];
                            arr_30 [i_0] [i_5] [i_0] [i_5] [i_5] = (((arr_8 [i_5 + 2] [i_0 + 1] [i_0] [15] [i_0]) - ((~(arr_27 [i_5 + 2] [i_0 + 1] [i_0] [i_0] [i_0])))));
                            var_19 = 19636;
                        }

                        for (int i_9 = 1; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            arr_34 [i_9] [i_0] [i_2] [i_1] [i_0] [i_0] = (max(((~(~var_2))), ((~(arr_11 [i_9] [i_5 + 1] [6] [i_1 + 1] [i_0] [i_0])))));
                            var_20 *= (min((((var_4 || (arr_17 [i_0] [i_1] [i_0])))), (arr_5 [14])));
                        }
                        /* vectorizable */
                        for (int i_10 = 1; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_21 ^= (((arr_33 [i_2] [i_10 - 1] [i_1] [15] [i_2] [i_1] [i_0]) ? (arr_33 [15] [i_10 - 1] [i_2] [i_2] [i_10] [1] [i_10 - 1]) : (arr_33 [i_10 + 1] [i_10 - 1] [i_1] [i_5] [18] [i_10] [i_10])));
                            var_22 += ((2988235890 ? (arr_8 [i_0] [i_10 - 1] [i_0] [i_0 + 1] [i_0]) : (arr_8 [1] [i_10 - 1] [i_1] [i_0 + 2] [i_0])));
                            var_23 = (~(var_8 || 4191343695));
                            arr_38 [i_0] [i_1] [i_2] [i_0] [i_10] [i_5] [i_2] = 11;
                        }
                        for (int i_11 = 1; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_24 = (arr_24 [i_0] [i_1 + 1] [2] [i_11]);
                            var_25 -= 1;
                        }
                        for (int i_12 = 1; i_12 < 22;i_12 += 1) /* same iter space */
                        {
                            arr_45 [i_0] [i_1 + 3] [i_0] [i_2] [i_5] [i_2] [i_12 + 1] = ((-4336468833925291575 ? 27485 : 4294967295));
                            var_26 = 16193827565345883782;
                            var_27 = (arr_12 [i_0] [i_5] [i_0] [i_0] [i_0]);
                        }
                        arr_46 [i_0] [i_1] [i_0] = (((((var_3 ? 255 : 4046))) ? ((min((~var_9), -4192))) : (min((((arr_12 [i_0] [i_0] [i_5] [i_5] [i_1]) / var_6)), (arr_19 [i_0] [i_0 - 1] [i_5] [i_0] [i_1 + 2])))));
                    }
                }
            }
        }
    }
    var_28 = ((((((4294967288 / var_1) ? var_10 : (var_1 + var_8)))) + (min(((113 ? 115 : 2252916508363667833)), ((max(146, -25006)))))));
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 20;i_14 += 1)
        {
            {
                var_29 = (max(var_29, ((min(61659, 16193827565345883780)))));
                arr_53 [i_14] = (min((((((min(4294967284, 16))) || (arr_35 [i_14])))), var_11));
                arr_54 [i_14] [i_14] [i_13] = (((((arr_1 [i_13]) < 0)) ? ((min((min((arr_5 [i_14]), (arr_8 [i_13] [i_13] [i_13] [i_14] [i_14]))), (arr_13 [i_14] [i_13])))) : (((min((arr_1 [i_14]), (arr_18 [i_13] [i_13] [i_13] [i_14]))) - var_6))));
                var_30 -= 3749155764;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 25;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 23;i_16 += 1)
        {
            {
                arr_59 [i_15] = (((arr_55 [i_15]) ? ((~(arr_56 [i_16 - 1]))) : -22580));
                var_31 = (max(var_31, var_6));
            }
        }
    }
    var_32 = var_8;
    #pragma endscop
}
