/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (-var_11 - var_10);
    var_17 = var_10;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = (arr_2 [i_0]);
        var_19 = ((1122026875 ? (~1) : (arr_1 [i_0])));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_20 -= (max(65535, 1));
        var_21 = arr_5 [i_1];
        var_22 = (arr_2 [i_1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                var_23 = (arr_6 [i_1] [i_3 + 1]);
                var_24 = (arr_5 [i_1]);
            }
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                var_25 = (~242);
                var_26 = var_1;
                var_27 &= arr_4 [i_1] [i_4];
                var_28 = 1;
                var_29 = var_14;
            }
            var_30 ^= (!(arr_0 [i_1]));
            var_31 = (1 ? 2948546144 : 1);
            var_32 = ((var_14 ? (((arr_11 [i_1] [i_1] [i_2]) ? ((min((arr_12 [i_1]), var_11))) : (((arr_8 [5] [5] [5]) ? var_11 : (arr_13 [i_1] [i_2]))))) : ((var_14 ? (arr_2 [i_1]) : var_5))));
            var_33 = (((~(arr_8 [i_1] [i_2] [i_2]))));
        }
        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
        {
            var_34 = (!1122026868);

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_35 ^= var_14;
                var_36 = var_9;
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_37 = min((((~(!65535)))), 2);
                var_38 = (min(var_38, (var_15 - -186087390)));
                var_39 &= ((-16 ? (((var_0 ? 42 : var_4))) : (min((((~(arr_10 [i_5] [i_5] [i_7])))), (arr_19 [i_1] [i_5] [i_7] [i_7])))));
            }
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
        {
            var_40 = (arr_13 [i_1] [i_1]);

            for (int i_9 = 2; i_9 < 23;i_9 += 1)
            {
                var_41 += var_6;
                var_42 += (min(((((arr_19 [i_9 + 1] [i_8] [i_8] [23]) < 1))), ((var_6 ? (arr_11 [i_8] [i_9 - 2] [i_9 - 2]) : (arr_11 [i_8] [i_9 + 1] [i_9 + 1])))));
                var_43 = var_5;
                var_44 = (min(var_44, (arr_8 [i_1] [i_8] [i_9 - 2])));
                var_45 = var_3;
            }
            var_46 = (~((((arr_18 [i_1] [i_8] [23]) > (arr_5 [i_1])))));

            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                var_47 -= (!var_7);
                var_48 = 1;
                var_49 = var_2;
            }
            for (int i_11 = 2; i_11 < 20;i_11 += 1)
            {
                var_50 = (((arr_31 [i_1] [i_8] [i_11 + 2]) ? (~var_14) : (arr_21 [i_11 + 3] [i_11 + 3])));

                for (int i_12 = 0; i_12 < 24;i_12 += 1)
                {
                    var_51 = ((+(((!(((var_7 ? (arr_8 [i_1] [i_1] [i_1]) : 245))))))));
                    var_52 += var_7;
                }
                var_53 += var_14;
                var_54 = ((~(arr_27 [15] [i_8] [12])));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 1;i_13 += 1)
            {
                var_55 = (max(var_55, 0));
                var_56 += var_1;
                var_57 = ((var_12 - (arr_11 [i_1] [i_13] [i_13 - 1])));
                var_58 = (arr_28 [i_1] [i_8] [i_13 - 1]);
            }
        }
        for (int i_14 = 0; i_14 < 24;i_14 += 1) /* same iter space */
        {
            var_59 = (arr_22 [1] [i_14] [i_14]);
            var_60 &= (~var_2);
            var_61 -= (arr_15 [i_14] [i_14]);
            var_62 = ((~(arr_37 [i_1])));

            for (int i_15 = 0; i_15 < 24;i_15 += 1)
            {
                var_63 = ((+((+(max((arr_42 [i_1] [i_15] [i_14]), var_11))))));
                var_64 = var_4;
                var_65 = (!var_7);
                var_66 = max(((((arr_19 [i_1] [i_14] [i_14] [i_15]) ? var_6 : (arr_19 [i_1] [20] [i_15] [21])))), (~var_15));
            }
        }
    }
    #pragma endscop
}
