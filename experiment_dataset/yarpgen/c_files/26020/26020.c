/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_5 [i_0] [i_0] = ((arr_1 [0]) != (((arr_3 [i_0]) ? (arr_1 [9]) : 0)));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                var_16 = 3765952896;
                var_17 = ((((((arr_1 [i_1]) ? (arr_1 [i_0 - 1]) : (arr_0 [i_0 - 1] [i_1])))) ? var_7 : var_8));
            }
            for (int i_3 = 4; i_3 < 12;i_3 += 1)
            {
                var_18 = (((((1788508684 ? (arr_11 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]) : (arr_11 [i_0 + 1] [13] [i_1] [i_3 + 1])))) ? (((max((arr_9 [i_0]), 1)) % (max(2506458599, (arr_10 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]))))) : ((((arr_7 [i_0 - 1] [i_0] [i_0 + 1] [5]) * ((max(var_5, var_6))))))));
                var_19 = min(-1, ((37589 ? -1713633239720504142 : 1788508684)));
                var_20 = ((-((-(arr_2 [i_3 - 3] [i_0 - 1])))));
                var_21 = (~(((!4294967283) + (0 - -1))));
            }
        }
        arr_13 [12] |= (max(242, (((((min(5, -16))) >= (18446744073709551612 && -55))))));
        var_22 = (arr_10 [8] [i_0 + 1] [i_0 - 1] [8]);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_23 = ((~(((max(var_11, var_13)) & (max((arr_14 [11]), 6871331064908822232))))));
        var_24 |= (min((var_12 == var_9), var_2));
        var_25 = ((-(((arr_16 [i_4]) ? ((max((arr_14 [12]), var_11))) : (((arr_14 [i_4]) + (arr_15 [4] [i_4])))))));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_26 = (min((arr_6 [i_5] [i_5]), ((-(min(-1, 14))))));

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            var_27 = (max(2506458612, var_10));
            arr_23 [i_6] = (min((arr_17 [i_6 + 2]), (((arr_14 [i_5]) ? var_8 : (!var_3)))));
        }
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {

            /* vectorizable */
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                var_28 = 1128534355;
                var_29 = ((var_6 ? (((arr_24 [i_5] [9] [i_8]) - 1)) : (arr_25 [i_7] [i_8])));
                var_30 = (~var_11);
            }
            /* vectorizable */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_31 = (((~1192939963) + 8258028602771776139));
                var_32 = 671437047;
                var_33 -= (--36);
                var_34 = ((7791345845853320294 ? ((var_15 ? (arr_12 [i_5] [i_7] [i_9 - 1]) : (arr_12 [i_9 - 1] [i_9 - 1] [i_7]))) : ((var_4 ? 1 : var_5))));
            }
            for (int i_10 = 3; i_10 < 12;i_10 += 1)
            {
                var_35 = ((((((arr_34 [i_5]) ? (arr_27 [i_5] [i_5] [i_5]) : var_11))) ? ((min(1, ((var_5 == (arr_15 [i_5] [16])))))) : ((((max(10232908581107009905, 2506458612)) != ((-11 ? var_9 : (arr_15 [i_5] [i_7]))))))));
                var_36 = 128;
                var_37 = (~var_13);
            }
            var_38 = var_13;
            var_39 = 3;
        }
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            var_40 = -1359684440;
            var_41 = (max(var_41, ((((((arr_11 [i_5] [5] [i_5] [i_5]) ? var_4 : (arr_26 [i_11])))) ? (max(8258028602771776145, var_1)) : ((((min(var_1, (arr_1 [1]))))))))));
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 0;i_12 += 1)
        {
            var_42 = 0;

            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {

                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    var_43 = ((-6079051337456412397 ? 6 : 53));
                    var_44 = (((arr_7 [i_5] [i_12 + 1] [i_13] [4]) ? -10647 : 2386525480));
                }
                arr_49 [i_5] [i_5] [i_12] [7] |= 3;
                var_45 -= (((arr_19 [i_12]) * -8258028602771776141));
            }
            var_46 = (((arr_10 [i_5] [i_5] [1] [i_12 + 1]) ? var_12 : var_11));
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 16;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 16;i_16 += 1)
        {
            {
                var_47 = arr_55 [8] [8] [i_16];
                arr_56 [i_15] |= ((+(((arr_15 [i_15] [i_15]) ? (((!(arr_53 [i_15] [i_16] [10])))) : var_12))));
                var_48 = (arr_55 [i_15] [i_16] [i_16]);
            }
        }
    }
    var_49 |= var_13;

    for (int i_17 = 0; i_17 < 17;i_17 += 1)
    {
        var_50 = ((min((arr_59 [13] [1]), (arr_59 [i_17] [i_17]))));
        var_51 -= var_1;
    }
    for (int i_18 = 0; i_18 < 12;i_18 += 1)
    {
        var_52 = (max(var_52, (((+(min(((((arr_57 [i_18]) && 18446744073709551610))), (arr_43 [i_18] [i_18] [i_18]))))))));
        var_53 -= (max((arr_12 [i_18] [i_18] [10]), var_14));
    }
    var_54 = min((((1 != 18) ? (~var_2) : ((2506458597 ? var_6 : var_7)))), (((var_6 + (var_8 - var_15)))));
    #pragma endscop
}
