/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44177
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, var_3));

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_17 ^= ((~(!0)));
        var_18 |= ((((((arr_1 [i_0 + 3]) ? -243 : var_14))) ? (((arr_0 [i_0]) ? -1 : 4019358743)) : (((((934511288 / var_4) > (275608552 + 164384004969337917)))))));
    }
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_19 += max((((!(((4019358749 ? 2357660109280507113 : var_15)))))), ((var_7 ? (arr_1 [i_1 + 2]) : ((var_10 << (var_8 - 2984447247))))));
        var_20 = (max(var_20, ((min((~var_5), (arr_0 [i_1]))))));
        var_21 ^= (((arr_2 [i_1] [i_1]) ? ((~((var_11 ? (arr_5 [i_1 + 2] [i_1 + 2]) : 4019358740)))) : var_9));
        var_22 -= -115;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_23 -= (((arr_8 [i_1] [i_3]) ? 23 : 7247346388526928266));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((arr_2 [i_1 + 2] [i_1 + 2]) < 51483)))));
                            var_25 |= (((arr_11 [i_5] [i_2] [i_3]) ? (!var_3) : 799352887));
                        }
                    }
                }
            }
            for (int i_6 = 2; i_6 < 11;i_6 += 1)
            {
                var_26 = arr_7 [i_1 + 2] [i_1 + 2];
                arr_21 [i_1 + 2] [i_1 + 3] [i_6] [12] |= (arr_17 [i_1] [i_1 + 2] [i_1 + 2] [i_6 - 1] [i_6 - 1]);
                var_27 = (min(var_27, ((~(arr_17 [i_6] [i_6 + 1] [i_6 + 1] [i_6 - 2] [i_6 - 2])))));
            }
            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {
                var_28 = (max(var_28, (arr_24 [i_7] [i_7] [6])));
                var_29 += (arr_3 [i_2] [i_2]);
                var_30 -= (arr_15 [4] [i_7] [i_7 + 1] [i_7] [4]);
            }
            /* LoopNest 2 */
            for (int i_8 = 2; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {
                        var_31 = (min(var_31, (((!(arr_28 [i_1] [i_1] [i_1]))))));
                        var_32 |= (((arr_27 [i_2] [i_2] [i_2]) ? (arr_22 [i_1 + 2]) : 1));
                        var_33 ^= ((~(((arr_26 [i_1] [i_1] [4]) ? (arr_7 [i_8] [i_8]) : var_9))));

                        for (int i_10 = 2; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            var_34 = (max(var_34, (((((var_4 ? 51499 : var_14)) / (arr_33 [i_10 + 2] [i_8 - 2] [i_1 + 1] [i_1 + 2] [i_1 + 1]))))));
                            var_35 ^= ((!(arr_17 [i_10 + 1] [i_10] [i_10 - 1] [i_10 - 1] [i_9])));
                            var_36 = (min(var_36, ((((arr_9 [i_10 - 2] [i_8 + 2] [i_1 + 3]) ? (arr_9 [i_10 + 1] [i_8 + 1] [i_1 + 2]) : (arr_9 [i_10 - 1] [i_8 - 2] [i_1 - 1]))))));
                            var_37 -= (((var_8 ? -3085271972786852109 : (arr_17 [i_10] [i_1 + 2] [i_8] [i_1 + 2] [i_10]))) % (arr_28 [i_1] [i_2] [i_9]));
                        }
                        for (int i_11 = 2; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_38 += ((arr_33 [i_1 + 1] [i_2] [i_8] [i_8] [i_8]) - (28672 < var_13));
                            var_39 = (min(var_39, (((((arr_34 [i_2] [i_8 - 1] [i_11]) ? var_6 : var_0))))));
                        }
                        for (int i_12 = 2; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_40 ^= (((arr_31 [i_1 + 1] [i_8 + 2] [i_8 + 2] [i_12 + 2] [i_12 - 1]) / (arr_31 [i_1 + 1] [i_8 - 2] [i_8 + 2] [i_12 - 2] [i_12 - 1])));
                            var_41 = (max(var_41, (arr_15 [i_1 - 1] [i_1] [i_1] [i_1] [1])));
                        }
                        for (int i_13 = 2; i_13 < 9;i_13 += 1)
                        {
                            var_42 -= var_13;
                            var_43 = (max(var_43, ((((arr_15 [2] [i_8 - 2] [i_8 + 1] [i_8 + 1] [2]) == var_13)))));
                        }
                        var_44 = (min(var_44, ((((arr_27 [i_8] [i_1 + 1] [i_8]) ? (arr_27 [i_1] [i_1 - 1] [i_1 - 1]) : (arr_27 [i_1] [i_1 + 2] [i_1]))))));
                    }
                }
            }
        }
        for (int i_14 = 0; i_14 < 13;i_14 += 1)
        {
            var_45 = (min(var_45, (((!((max(((((arr_34 [i_1] [i_1] [i_14]) < (arr_41 [i_1] [i_14] [i_14] [i_14] [i_1])))), var_8))))))));
            var_46 ^= ((~(((arr_1 [i_1 + 3]) ? (arr_22 [i_1 - 1]) : (arr_20 [i_1] [i_1 + 2] [i_1 + 2] [i_1 + 3])))));

            for (int i_15 = 0; i_15 < 13;i_15 += 1) /* same iter space */
            {
                var_47 -= (((arr_41 [i_1] [i_1] [i_1 + 1] [i_15] [i_15]) | (arr_18 [i_1] [i_1] [i_1 + 2] [i_15])));
                var_48 -= (((max((arr_19 [i_1 + 1] [i_1 + 1] [i_1]), (max((arr_31 [i_1] [i_1 + 3] [i_1] [i_1] [i_1]), (arr_27 [i_1] [i_1 + 1] [i_1 + 1]))))) + var_13));
            }
            for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
            {
                var_49 |= (((var_4 + var_14) == ((((((arr_33 [i_1] [i_1] [i_14] [i_1] [i_16]) * var_10))) ? (var_3 || var_1) : (var_0 - 9031)))));
                var_50 = (max(var_50, (((((((arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_16]) >> (((arr_15 [i_16] [i_16] [i_16] [i_1] [i_16]) - 3580762808))))) ? ((-(var_9 < 14053))) : (((!((((arr_42 [i_1] [i_14]) ? var_9 : var_1)))))))))));
                var_51 -= var_9;
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1) /* same iter space */
            {
                var_52 = (max(var_52, (((+((max((arr_23 [10] [10] [10]), var_7))))))));
                var_53 = (max(var_53, (((((!(((51840246 ? (arr_28 [i_1] [i_14] [i_1]) : (arr_26 [i_1] [i_1] [0])))))) && (arr_48 [i_1 + 3] [i_14]))))));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
            {
                var_54 = (max(var_54, ((((~(arr_19 [i_1] [i_1] [i_18])))))));
                var_55 = (max(var_55, var_5));
            }
        }
        for (int i_19 = 4; i_19 < 9;i_19 += 1)
        {
            var_56 = (min(var_56, ((max(((max(var_12, (arr_8 [i_19] [i_1 + 2])))), (arr_9 [i_1 + 3] [i_1 + 2] [i_1]))))));
            var_57 -= ((~(~var_2)));

            for (int i_20 = 1; i_20 < 10;i_20 += 1)
            {
                var_58 -= (((min((arr_30 [10]), (arr_1 [i_1 + 1])))) ? (((arr_30 [4]) ? (arr_1 [i_1 + 1]) : var_11)) : -4);
                var_59 -= var_13;
            }
        }
    }
    #pragma endscop
}
