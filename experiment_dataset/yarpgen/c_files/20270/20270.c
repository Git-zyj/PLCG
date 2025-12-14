/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (min((((((max(var_16, 46093))) && 65535))), 89));

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_20 = 3479996953;
        var_21 ^= (min((min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 2]))), ((((arr_0 [i_0]) ? var_0 : (arr_1 [i_0 - 1]))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_4 [i_1] = (min(945068830, 3479996953));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_22 &= (((arr_5 [i_2] [5]) ^ (!var_17)));
            var_23 ^= (((arr_8 [13] [i_2]) ^ (arr_8 [i_2 + 1] [i_2])));
            var_24 = (min(var_24, var_17));
        }
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_25 = (((((var_0 ? ((var_11 ? (arr_10 [i_3]) : (-127 - 1))) : (!945068830)))) ? 814970342 : (min(65535, 3479996954))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            var_26 = (min(var_26, ((max((arr_11 [7]), (arr_11 [i_4]))))));
            var_27 = (arr_10 [i_3]);
        }

        /* vectorizable */
        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_28 = (((var_0 ^ var_3) | (var_14 || 484330412)));

            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_29 = ((-(arr_16 [i_5] [i_5 + 2] [i_5])));

                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    var_30 = (max(var_30, var_14));
                    arr_19 [4] [i_6] [i_5] [4] [3] = (!814970342);

                    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_22 [7] [i_8 - 1] [i_6] [i_5] = (var_14 - (arr_14 [i_3] [i_8 - 1]));
                        var_31 = (max(var_31, ((var_0 ? (arr_14 [i_8] [i_8 - 1]) : (arr_20 [i_8 + 1] [i_5 - 2] [i_6] [i_5 - 2] [i_8])))));
                        var_32 = (max(var_32, 3479996953));
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_33 = (max(var_33, -9));
                        var_34 ^= ((arr_12 [i_3] [i_5 + 1] [i_9]) / (arr_15 [i_5 + 1]));
                        var_35 = ((((arr_12 [i_9] [i_6] [i_6]) / var_7)));
                    }
                    arr_27 [i_3] [i_5 + 2] [i_6] [14] &= (arr_14 [3] [i_5]);

                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        var_36 += var_17;
                        var_37 = (max(var_37, var_14));
                        var_38 = ((484330412 ? 4838254792909936926 : -945068830));
                    }
                    for (int i_11 = 0; i_11 < 22;i_11 += 1)
                    {
                        arr_34 [i_3] [i_5] [i_7] [0] [i_6] = 945068849;
                        var_39 ^= var_18;
                        var_40 = (max(var_40, (((((var_4 ? (arr_32 [i_7] [2] [i_5] [2] [15]) : var_17)) / var_6)))));
                    }
                }

                for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
                {
                    var_41 = var_9;

                    for (int i_13 = 2; i_13 < 21;i_13 += 1)
                    {
                        var_42 = (((arr_14 [i_13 - 1] [i_5 - 1]) ? (arr_14 [i_13 + 1] [i_5 + 3]) : (arr_14 [i_13 - 1] [i_5 - 1])));
                        var_43 += 1;
                        arr_40 [i_3] [i_5] [i_3] [i_12] [i_13] &= 193;
                    }
                    for (int i_14 = 0; i_14 < 22;i_14 += 1)
                    {
                        var_44 += ((-(arr_26 [i_3] [i_3] [i_14])));
                        var_45 += (var_14 ? -var_8 : (((arr_35 [7] [i_14]) ? var_11 : var_9)));
                    }
                }
                for (int i_15 = 0; i_15 < 22;i_15 += 1) /* same iter space */
                {
                    var_46 = var_13;

                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        arr_48 [i_3] = var_4;
                        var_47 = var_1;
                    }
                    for (int i_17 = 0; i_17 < 22;i_17 += 1)
                    {
                        var_48 += 134;
                        var_49 = (max(var_49, (((((((arr_18 [i_15] [18] [i_5] [i_17]) ^ (arr_38 [i_3] [i_17] [i_17])))) ? 18431137587937531629 : var_11)))));
                        var_50 = ((((arr_49 [i_3] [i_3] [1] [i_3] [1]) ? (arr_31 [i_3] [i_3] [i_15] [i_3]) : var_12)) > (arr_49 [i_5 + 1] [17] [i_6] [i_6] [i_5]));
                    }
                }
                arr_52 [i_3] = ((((var_3 ? var_0 : var_11)) - -945068839));
            }
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                arr_56 [i_3] [i_3] [i_18] = var_15;
                var_51 = (max(var_51, ((((((252 ? 255 : -19))) ? var_9 : ((((!(arr_39 [i_5] [4] [i_18] [i_3]))))))))));
                var_52 += (!3285411931896761512);

                for (int i_19 = 1; i_19 < 18;i_19 += 1)
                {
                    arr_61 [i_18] [i_18] = ((arr_29 [i_5 - 1] [i_19 + 4] [i_19 + 4]) ? var_17 : (arr_29 [i_5 - 1] [i_19 + 4] [i_19 + 4]));
                    var_53 += (((arr_26 [i_19 + 4] [i_3] [i_18]) ? ((var_6 ? (arr_42 [2] [i_19] [i_18] [i_19 + 1] [i_3]) : var_5)) : (var_5 / -945068839)));
                }
                for (int i_20 = 0; i_20 < 1;i_20 += 1)
                {
                    var_54 = ((945068832 && var_7) || var_18);
                    arr_64 [8] [i_5] [i_5] [i_20] &= (((arr_41 [i_3] [i_5] [i_5] [i_5 - 1] [i_5 + 3]) ? (arr_60 [i_5] [i_18] [i_18]) : (arr_41 [1] [1] [i_5] [i_5] [i_5])));
                    var_55 = (max(var_55, (((var_10 << (((var_17 && (arr_20 [i_3] [i_3] [i_5 + 2] [i_18] [i_20])))))))));
                    var_56 ^= (((arr_54 [i_5 + 2]) ? var_3 : var_15));
                }
                for (int i_21 = 0; i_21 < 1;i_21 += 1)
                {
                    var_57 = ((var_5 - (arr_30 [i_3] [i_3] [i_5] [i_5] [i_3] [i_21] [i_21])));
                    arr_69 [i_3] [i_5] &= (((((8 ? -9 : 255))) ? (!var_6) : var_5));
                }
            }
        }
    }

    for (int i_22 = 4; i_22 < 13;i_22 += 1)
    {
        var_58 = (min(var_58, (((!(arr_53 [i_22] [4] [i_22]))))));
        var_59 = (((arr_24 [i_22] [i_22 + 3] [i_22] [i_22 - 2] [i_22] [i_22] [i_22]) ? (arr_26 [i_22] [i_22] [i_22]) : (((max(var_9, var_3))))));
    }
    /* vectorizable */
    for (int i_23 = 2; i_23 < 18;i_23 += 1)
    {
        arr_74 [i_23] [i_23] = (((arr_63 [i_23] [i_23 - 1] [i_23 + 1] [i_23] [i_23 + 1]) ? 0 : (arr_63 [i_23] [i_23 - 1] [i_23 + 1] [i_23 + 2] [i_23 + 1])));
        var_60 += (arr_44 [i_23] [0]);
        var_61 &= ((arr_37 [1] [i_23] [i_23 + 1] [i_23] [i_23 - 1] [i_23]) ? (arr_45 [i_23 - 2]) : (arr_59 [i_23] [i_23 - 1]));
        var_62 = (min(var_62, (arr_15 [i_23])));
    }
    #pragma endscop
}
