/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247995
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(min((max(5, 65526)), ((max(64, var_2)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (var_3 <= 65526);
        var_12 = var_7;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 8;i_1 += 1)
    {
        var_13 ^= (arr_6 [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_15 [i_4] [i_3] [i_4] = var_4;
                        var_14 = (max(var_14, ((((var_10 >> 0) ? (arr_2 [i_2]) : ((64 ? 17 : 88)))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
    {
        arr_19 [i_5] = ((4294967292 ? (arr_18 [i_5] [i_5]) : (arr_18 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                {
                    arr_24 [i_6] = 1179967531;
                    var_15 = (max(var_15, ((67 ? 1157628947 : (arr_21 [i_7 + 1])))));
                    arr_25 [i_6] = ((-(arr_22 [i_6] [i_7 + 1] [i_6] [i_6])));
                    arr_26 [i_5] [i_6] [i_7] = -1;
                    var_16 = (((arr_20 [i_7 + 3]) ? (arr_20 [i_7 + 3]) : (arr_21 [i_7 + 3])));
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 11;i_10 += 1)
            {
                {
                    var_17 *= (min(((-73 ? (arr_23 [i_8] [i_8] [i_10] [i_10 - 1]) : (arr_23 [i_8] [i_8] [i_10] [i_10 - 2]))), (min((arr_23 [i_8] [i_8] [i_10] [i_10 + 2]), (arr_23 [i_8] [i_8] [i_8] [i_10 - 2])))));
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 13;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_43 [i_8] [i_8] [i_8] [i_11] [i_12 - 3] &= -8699888213747730814;
                                var_18 *= ((((((((max(var_6, (arr_29 [i_8] [i_9])))) || ((1179967531 != (arr_17 [i_12]))))))) - (5964717473191441839 ^ 6022189734491584803)));
                                arr_44 [i_11] = 66;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 13;i_14 += 1)
                        {
                            {
                                arr_49 [i_13] [i_13] [i_8] [i_9] [i_8] = var_6;
                                var_19 = (min(var_19, (((!((min(2, 7968577837067624924))))))));
                                arr_50 [i_8] [i_8] = (min((min((arr_34 [i_14] [i_9] [i_9] [i_10 - 2]), (arr_34 [i_8] [i_10] [i_10 - 1] [i_10 - 3]))), (min((arr_34 [i_8] [i_8] [i_10] [i_10 + 1]), (arr_34 [i_8] [i_9] [i_8] [i_10 + 1])))));
                                var_20 = arr_36 [i_8] [i_8] [i_10];
                                var_21 = (min(var_21, ((((((var_5 | -1971812439749360911) ? (arr_48 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_41 [i_8] [i_9] [i_9] [i_10] [i_9] [i_8]))) & (((((max((arr_47 [i_10] [i_10] [i_10] [i_13] [i_10] [i_10]), 0))) & -73))))))));
                            }
                        }
                    }
                    var_22 = (min(var_22, (min(((((((7 ? 1 : (arr_46 [i_8] [i_8] [i_10] [i_10])))) ? (((var_8 ? var_5 : 1))) : (arr_37 [i_8] [i_10])))), var_3))));
                }
            }
        }
        arr_51 [i_8] [i_8] = (max(-62, -62));
    }
    #pragma endscop
}
