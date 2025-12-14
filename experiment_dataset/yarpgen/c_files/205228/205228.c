/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205228
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        var_11 = (((~117) ? (var_10 && 1) : var_7));
        var_12 = (max(var_12, ((max(36879, -117)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_13 = (min((arr_4 [i_1]), ((max((min(-48, 2497074802)), var_3)))));
        var_14 = (max(var_14, (arr_4 [i_1])));
        var_15 = (max(var_15, (((var_2 && (arr_3 [i_1]))))));
        var_16 = (max(var_16, (((1 ? 1 : 75)))));
        var_17 = 93;
    }

    for (int i_2 = 2; i_2 < 24;i_2 += 1)
    {
        var_18 = ((var_3 || ((max(594263946, 682557132)))));
        arr_7 [i_2] = (max((arr_6 [i_2 - 1]), ((max((arr_6 [i_2 + 1]), var_4)))));
        arr_8 [i_2 + 1] = (min((~-104), var_4));
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                var_19 ^= ((-((((arr_4 [i_5]) != (arr_6 [i_3]))))));
                var_20 ^= (((((-(arr_12 [i_3] [i_4] [i_3])))) ? ((-(arr_9 [i_5]))) : (arr_9 [i_4])));
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_21 = ((((((var_7 ? 0 : (arr_2 [i_3] [15])))) ? var_4 : (((arr_4 [i_3]) ^ var_7)))));
                arr_20 [i_4] |= (min(((max((arr_13 [i_3] [i_3]), 200812795))), (arr_4 [i_3])));
                arr_21 [i_6] = (((((~var_0) << (((((arr_6 [i_3]) + 63)) - 39)))) & ((((var_1 <= (var_2 <= 72)))))));
            }
            var_22 ^= 18446744073709551615;
            var_23 ^= -682557148;
        }
        for (int i_7 = 4; i_7 < 7;i_7 += 1)
        {
            var_24 = var_7;
            var_25 = (max(var_25, ((((-(arr_23 [i_7] [i_7 - 2] [i_7])))))));
        }
        var_26 = (max(var_26, (((((max((arr_1 [i_3]), (arr_1 [i_3])))) / ((max(-61, (arr_1 [1])))))))));
        var_27 = (max(var_27, ((((((((((arr_17 [i_3] [i_3] [0] [i_3]) ? (arr_18 [i_3] [i_3]) : 682557121))) || ((((arr_15 [i_3] [i_3] [i_3]) - var_8)))))) >= var_3)))));
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_28 = (((((arr_0 [i_8]) + var_5)) ^ (((~(arr_25 [i_8]))))));
        var_29 = (max(var_29, (((!(arr_28 [i_8] [13]))))));

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_30 = ((-((var_9 ? (arr_27 [i_8] [i_8]) : 1))));

            for (int i_10 = 0; i_10 < 14;i_10 += 1)
            {
                var_31 = (min(826920255, (((((~(arr_34 [i_8] [i_9] [i_8])))) ? (((var_10 ? 3500354495 : var_10))) : (arr_0 [12])))));
                var_32 = (max(var_32, ((min(((min(1, -52))), ((var_1 ? (arr_34 [1] [i_9] [i_9]) : (arr_31 [i_8] [i_9]))))))));
                var_33 *= ((var_4 <= (((max((arr_29 [i_8]), var_8)) | (arr_4 [i_8])))));
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                arr_38 [i_11] [i_9] [i_8] = (max((((~(var_5 & var_2)))), (arr_34 [i_8] [i_9] [i_11])));
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 10;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        {
                            var_34 = (((((1 ? 14599 : 10083)) << (233 - 227))) ^ -200812817);
                            var_35 &= (max(79, (max((max(200812767, 75)), (var_2 ^ 4741)))));
                            var_36 = ((arr_41 [1] [i_12] [i_11] [i_12 + 2]) / (((((min((arr_4 [i_13]), (arr_1 [i_8])))) <= (max(var_9, var_1))))));
                            var_37 ^= ((682557117 >= 22598) == (((12992983929846822413 * ((var_4 / (arr_26 [i_8] [i_8])))))));
                        }
                    }
                }
                var_38 = (max(var_38, (((!(((arr_25 [i_8]) || 5453760143862729202)))))));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 2; i_15 < 12;i_15 += 1)
                    {
                        {
                            var_39 = (min(((var_7 ? 20048 : (arr_49 [i_8] [8] [i_11] [i_8] [i_11] [i_8] [i_14]))), (arr_49 [i_8] [i_9] [i_11] [i_14] [i_15] [i_14] [4])));
                            var_40 = var_6;
                            var_41 = (max(var_41, var_2));
                            arr_51 [i_8] [i_8] [i_9] [i_11] [i_14] [i_15] = ((((max((((arr_34 [12] [i_11] [i_9]) ? 136 : (arr_2 [i_15 + 1] [i_11]))), 22965))) ? 0 : (~1)));
                        }
                    }
                }
            }
            var_42 = (max(var_42, 3019003299));
        }
        for (int i_16 = 1; i_16 < 13;i_16 += 1)
        {

            for (int i_17 = 0; i_17 < 14;i_17 += 1)
            {
                arr_56 [i_8] [i_8] [i_8] |= (-49 * 0);
                var_43 = (max(var_43, ((min((~1), (min((arr_50 [i_16 - 1]), var_0)))))));
            }
            var_44 = (max(var_44, ((-((~(arr_33 [i_8] [i_16 - 1])))))));
        }
    }

    for (int i_18 = 0; i_18 < 1;i_18 += 1) /* same iter space */
    {
        var_45 = (max(var_45, 61));
        arr_60 [i_18] = (((arr_2 [i_18] [i_18]) ^ (min(var_10, var_8))));
        var_46 *= (max((arr_2 [i_18] [i_18]), 1));
        var_47 = (max(var_47, ((min((arr_2 [7] [i_18]), ((max(((max(1, (arr_6 [i_18])))), 31760))))))));
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1) /* same iter space */
    {

        for (int i_20 = 0; i_20 < 16;i_20 += 1)
        {
            var_48 = (max(var_48, ((max((((((var_2 ? var_10 : var_0))) ? -682557118 : (((arr_57 [i_19] [i_20]) ? (arr_4 [i_19]) : var_10)))), (((1 ? -524288 : ((((arr_1 [i_19]) && -4741)))))))))));
            var_49 *= var_0;
            arr_66 [i_19] = (arr_61 [i_19]);
        }
        for (int i_21 = 0; i_21 < 16;i_21 += 1)
        {
            var_50 ^= (min((arr_61 [i_19]), 720));
            var_51 = (max(var_51, 2744615382621486955));
            arr_70 [i_19] = (max((arr_57 [i_19] [i_19]), (arr_4 [i_19])));
            var_52 = (max(var_52, (arr_2 [1] [i_19])));
        }
        for (int i_22 = 1; i_22 < 13;i_22 += 1)
        {
            var_53 = (max(var_53, ((min(1, 1)))));

            for (int i_23 = 1; i_23 < 15;i_23 += 1)
            {

                for (int i_24 = 0; i_24 < 16;i_24 += 1)
                {
                    var_54 = (max(var_54, (arr_79 [i_24] [i_24] [i_23] [i_22] [i_19])));
                    var_55 ^= ((var_5 <= (min((arr_59 [i_24] [i_24]), var_0))));
                }
                var_56 = (!90114302);
                arr_81 [i_19] [i_19] [i_19] [14] &= ((!(((max(var_8, (arr_78 [i_19] [10] [i_22 + 1] [10] [i_22] [i_23 + 1])))))));
            }
            var_57 = (max(var_57, (arr_71 [i_22 - 1] [i_22])));
            var_58 = (var_2 - var_9);
            var_59 ^= (arr_1 [i_22 + 2]);
        }
        var_60 = (arr_2 [i_19] [i_19]);
        var_61 -= var_1;
    }
    var_62 = (max(var_62, var_1));
    var_63 = (max(var_63, var_6));
    #pragma endscop
}
