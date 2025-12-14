/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_0));
        arr_3 [i_0] = (((((1176369748 ? (arr_0 [i_0]) : 10))) ? 2147483632 : 8671));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            var_13 = (((((arr_5 [i_0] [i_1] [i_1]) ? var_9 : var_6))) ? (arr_4 [i_0]) : (((arr_5 [i_1] [i_1] [i_0]) ? 427301939 : var_5)));
            var_14 = (arr_5 [i_0] [i_1 + 1] [i_1]);
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_15 = (max(var_15, (((var_11 ? ((310947500 ? (arr_5 [i_2] [18] [i_0]) : (arr_4 [i_0]))) : (-2147483613 != var_10))))));
            arr_10 [i_2] = (-(arr_6 [i_0]));
            var_16 ^= (((arr_1 [i_2]) ? (arr_0 [i_0]) : var_4));
            arr_11 [5] [i_2] [i_2] = (arr_0 [i_0]);
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1) /* same iter space */
        {
            var_17 = (var_0 ? (87 > -344184496) : -2147483603);
            var_18 = (max(var_18, (((-85 > (((arr_9 [i_0]) ? var_0 : (arr_13 [22] [i_3] [i_3]))))))));
            var_19 += (arr_4 [i_0]);
            var_20 = ((!(((var_8 - (arr_0 [i_0]))))));
        }
        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_21 *= ((((arr_0 [2]) ? (arr_8 [i_0]) : 127)));
            var_22 = (((((arr_8 [22]) ? 15656 : 10))) ? var_8 : -var_11);
        }
        var_23 = (max(var_23, -344184500));
    }
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            arr_26 [i_5] [i_6 - 1] [1] = var_8;
            arr_27 [i_5] [i_5] [i_5] = (((175 != (arr_21 [i_6]))));
            var_24 = var_4;
            var_25 = ((var_0 ? (((arr_12 [i_6] [i_5] [i_5]) ? var_9 : (arr_17 [i_5] [i_5] [i_6 + 1]))) : (arr_7 [i_6 + 3])));
            arr_28 [i_5] = (((arr_14 [i_6] [i_6 - 3] [i_6 - 3]) ? ((((!(arr_7 [i_6 + 2]))))) : ((150 ? (arr_23 [1]) : -67))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            var_26 *= (((((((-427301950 ? -310947510 : (-127 - 1))) == var_8))) ^ ((var_12 ? (arr_17 [i_5] [i_5] [i_7]) : (arr_20 [14] [i_7])))));
            var_27 = (min(var_27, (((min(var_9, (arr_8 [i_5]))) + var_8))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            var_28 = (((arr_7 [i_8]) && (arr_7 [i_5])));
            arr_37 [i_5] [i_8] [2] = (((((-973045099 ? 344184521 : 255))) ? (arr_16 [i_5] [i_8]) : (((arr_34 [i_5] [i_8] [i_8]) ? var_6 : (arr_13 [i_8] [4] [12])))));
            var_29 = ((-((((arr_16 [i_5] [i_5]) && -327239731)))));
            var_30 = (arr_35 [13] [i_8]);
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1) /* same iter space */
        {
            var_31 ^= (((arr_38 [i_5]) ? ((((-327239713 && 54519) >= ((274877841408 ? var_8 : 310947507))))) : ((min((arr_14 [i_5] [i_9] [i_9]), (arr_30 [11] [i_9] [i_9]))))));

            for (int i_10 = 1; i_10 < 16;i_10 += 1)
            {
                arr_44 [i_5] [i_5] [i_5] [i_5] = (min((arr_1 [i_10 + 3]), (arr_24 [i_10 + 1] [i_10 + 1] [i_10])));
                var_32 = (((min((arr_14 [i_5] [0] [i_10 + 1]), var_12))) - ((min((arr_14 [i_5] [12] [i_10 - 1]), (arr_14 [13] [5] [i_10 + 3])))));
                /* LoopNest 2 */
                for (int i_11 = 4; i_11 < 18;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 17;i_12 += 1)
                    {
                        {
                            arr_49 [4] [4] [i_10] [i_11] [i_12] [i_10] [i_5] = (((((var_9 < (arr_13 [i_12 + 2] [i_11] [i_10])))) ? ((((var_10 ? 56836 : var_5)))) : ((252 ? (arr_9 [i_9]) : (1045886506231729570 ^ 15921836362658071333)))));
                            var_33 ^= (arr_38 [i_5]);
                            arr_50 [i_5] = (arr_48 [i_5] [i_9] [i_9] [0] [i_10] [i_11] [5]);
                        }
                    }
                }
            }
        }
        var_34 = (((((arr_25 [i_5] [i_5] [i_5]) ? -var_9 : (min((arr_18 [9]), var_9)))) / ((((arr_12 [i_5] [7] [i_5]) | (arr_12 [i_5] [11] [16]))))));
        var_35 = ((!((max((5 | var_2), (arr_6 [i_5]))))));
    }
    var_36 = ((var_5 ? (var_7 | var_12) : var_4));
    #pragma endscop
}
