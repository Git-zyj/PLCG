/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32840
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_13 != (max(((var_13 ? var_13 : var_9)), (!846367153159195371)))));
    var_16 = (max(var_16, var_9));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (arr_1 [i_0]);
        var_18 = (min(var_18, ((((((arr_0 [i_0] [i_0]) ? (arr_1 [i_0]) : var_1))) ? var_12 : var_6))));
        arr_3 [i_0] |= (~-929043517799811827);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = ((((var_14 ? (arr_4 [i_0]) : 892801366))) || (arr_5 [i_0 + 1] [i_0 + 2]));

            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                var_20 = (((arr_7 [i_2] [i_2 + 2] [i_2 - 4] [i_2 + 2]) ? (arr_7 [i_2] [i_2 - 3] [i_2 + 2] [i_2]) : (arr_8 [i_2] [i_2 - 4] [i_2 + 1] [i_1])));
                arr_10 [i_1] [i_1] [i_2] = (var_8 ? var_14 : (arr_6 [i_2] [i_1]));
                var_21 = (min(var_21, var_0));
                var_22 += (~-4531219787695553202);
            }
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    arr_15 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_1] = (arr_5 [i_0] [i_0 - 1]);
                    arr_16 [i_1] [i_3] [i_1] [i_1] = var_6;
                    var_23 -= (!var_4);
                }
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_24 = (arr_6 [i_1] [i_1]);
                    var_25 -= (arr_6 [i_3] [i_3]);
                    arr_19 [i_0] [i_1] [i_3] [i_5] = ((1113119134 ? 197 : 0));
                    var_26 = (arr_1 [i_0]);
                }
                var_27 = (max(var_27, (((~(arr_12 [2] [i_3] [i_0] [i_0]))))));
                var_28 -= ((1525 ? (arr_2 [i_0 - 1]) : var_0));
            }
            var_29 = (arr_13 [i_1] [i_0 + 1] [i_1] [i_0 - 1]);
            arr_20 [i_1] [i_0] [i_1] = 1113119134;
        }
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_30 = (arr_4 [i_0 + 2]);
            var_31 = (min(var_31, ((((arr_8 [i_0 - 1] [i_0 + 2] [i_0 - 1] [6]) ? var_3 : (arr_5 [i_0 + 2] [i_0 + 1]))))));
            arr_23 [i_6] = (arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_6]);
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_26 [i_7] = (-59 * var_9);
            var_32 = (((arr_25 [i_7]) != 59));
            var_33 = (((arr_14 [i_7] [i_7]) <= var_7));

            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_34 &= -var_10;
                arr_31 [i_7] [i_7] [i_7] = (((((arr_21 [i_7] [6]) || (arr_6 [i_7] [i_8]))) ? (!197) : var_14));
                var_35 = ((!(arr_11 [i_7] [i_7] [i_7])));
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_36 = (arr_25 [i_0]);
                var_37 = (var_7 > 1961248209);
                var_38 *= (((arr_24 [i_0 + 2] [i_0 + 2] [i_0 + 1]) || (arr_6 [i_0] [i_7])));

                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    arr_38 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0] [i_0] = ((96 == ((18446744073709551615 - (arr_5 [i_0] [i_0])))));
                    var_39 += ((!(arr_9 [i_0 + 2])));
                    var_40 = ((18 << (((arr_35 [4] [i_7] [4] [i_10]) - 7111498578959784629))));
                    var_41 += -var_8;
                    var_42 = ((~(!96)));
                }
                var_43 = (arr_7 [i_0] [i_0] [i_7] [i_9]);
            }
            for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
            {
                arr_42 [i_0 + 2] [7] [i_11] = ((-7903355513311337796 ? 8697607677624639836 : 134217727));
                arr_43 [i_0] [i_11] = (!3181848161);
            }
            var_44 = var_13;
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_45 = (((((var_0 ? (arr_46 [i_12] [i_12]) : (arr_45 [i_12])))) || 97));
        arr_47 [i_12] = ((+(((arr_46 [i_12] [i_12]) ? (arr_46 [i_12] [i_12]) : (arr_46 [i_12] [i_12])))));
    }
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_46 ^= (min(0, -110));
        var_47 = var_14;
    }
    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
    {
        var_48 = (max(var_9, (((-6095052480090455456 <= -97) ? (min((arr_48 [i_14] [i_14]), 9316131171496477917)) : (arr_50 [i_14])))));
        var_49 = (max(var_49, 13134280528524685095));
    }
    #pragma endscop
}
