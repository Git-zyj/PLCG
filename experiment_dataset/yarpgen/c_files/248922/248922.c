/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 75;
    var_11 &= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_12 = (4171802744 & 1);
            arr_5 [i_0] = ((((((arr_0 [i_0]) % 1))) ? -791415683994656644 : (((1 ? var_0 : 100)))));
            var_13 = (((arr_4 [i_0] [10] [i_1]) && (arr_3 [i_1] [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    {
                        var_14 = (~1);
                        var_15 = (((((arr_6 [i_0] [i_1]) ? var_7 : 823155068))) || (arr_0 [i_0]));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [1] [i_0] = (arr_4 [i_3 + 1] [i_3 - 2] [i_3 + 2]);
                            arr_14 [i_0] [i_0] [i_0] [i_3] [i_4] = (((arr_8 [i_0] [i_3 + 2] [i_3 - 3] [i_3 - 1]) ? (arr_8 [i_0] [i_3 + 2] [i_3 - 3] [i_3 - 1]) : -2048));
                            var_16 = (max(var_16, (arr_8 [4] [i_3 - 1] [i_3] [i_3])));
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_17 = var_9;
                            var_18 -= 1856;
                        }
                        for (int i_6 = 4; i_6 < 15;i_6 += 1)
                        {
                            var_19 = (((((16777088 ? var_4 : var_0))) ? ((49 ? (arr_0 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0]))) : ((((arr_10 [i_0] [i_1] [i_3] [i_6]) && var_9)))));
                            var_20 *= ((var_1 ? (((22230 ? 7895 : -86))) : (((arr_0 [14]) ? (arr_7 [i_0] [i_2] [i_6] [i_3]) : (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        }
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1) /* same iter space */
        {
            var_21 = ((-(arr_10 [i_0] [i_0] [i_0] [i_0])));
            var_22 = 16;
            var_23 = var_7;
        }
        for (int i_8 = 0; i_8 < 17;i_8 += 1) /* same iter space */
        {
            var_24 = -262144;
            var_25 = (max(var_25, var_7));
        }

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_26 -= 185;
            var_27 = (((arr_20 [i_0] [i_0] [i_9] [i_9] [i_9]) ? var_4 : 38));
            arr_30 [i_0] = (((arr_2 [i_0]) - -100));
        }
    }
    for (int i_10 = 1; i_10 < 18;i_10 += 1)
    {
        var_28 = (min(var_28, ((((((arr_31 [i_10]) || 19)))))));
        var_29 = ((((arr_32 [i_10 + 2] [i_10 + 2]) ? (arr_32 [i_10 + 1] [i_10 + 1]) : (arr_31 [i_10 + 2]))));

        /* vectorizable */
        for (int i_11 = 1; i_11 < 17;i_11 += 1)
        {
            var_30 = (max(var_30, (((-91 ? ((-(arr_34 [i_10] [2]))) : var_9)))));
            var_31 = (arr_31 [i_11]);
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 20;i_12 += 1)
        {
            var_32 = (arr_34 [i_10] [i_10]);
            arr_38 [10] [i_10] = 16320;
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
        {

            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_33 = ((max((((arr_33 [i_10]) ? 508 : 30)), (((27 ? 7 : 14186))))));
                var_34 = ((-(((((var_0 ? var_6 : var_1)) > (((arr_34 [i_13] [i_10]) ? 10384546881100682016 : var_4)))))));
                var_35 &= var_3;
            }
            arr_44 [i_10] = (max(29645, -29646));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_16 = 0; i_16 < 1;i_16 += 1)
            {
                var_36 -= ((18 ? 45944 : -32115));
                var_37 = 65535;
            }
            var_38 = ((1 | ((var_8 % (((4160418871 ? (arr_47 [i_10] [i_10] [i_15]) : var_7)))))));
        }
    }
    /* vectorizable */
    for (int i_17 = 1; i_17 < 18;i_17 += 1) /* same iter space */
    {
        var_39 = ((-91 % (arr_34 [i_17] [4])));
        /* LoopNest 2 */
        for (int i_18 = 0; i_18 < 1;i_18 += 1)
        {
            for (int i_19 = 1; i_19 < 18;i_19 += 1)
            {
                {
                    var_40 = (max(var_40, ((((((var_7 ? var_7 : 9218868437227405312))) == (arr_41 [1] [i_18] [i_18]))))));
                    var_41 = ((((-105 ? (arr_39 [2]) : -29671)) >> (arr_50 [i_17 + 1])));
                }
            }
        }
        var_42 = (((arr_52 [i_17 - 1]) & (var_4 == var_8)));
        var_43 = (((arr_40 [i_17 - 1] [8]) ? (arr_40 [i_17 + 1] [8]) : (arr_54 [i_17 - 1])));
    }
    for (int i_20 = 1; i_20 < 18;i_20 += 1) /* same iter space */
    {
        var_44 = (max(((var_4 ? (arr_42 [i_20 - 1] [i_20 + 1] [i_20]) : (arr_41 [18] [i_20 + 1] [18]))), (arr_41 [4] [i_20 + 1] [4])));
        var_45 = ((-(((((((arr_43 [i_20] [2] [i_20]) ? var_6 : var_7))) && -var_2)))));
        var_46 = (((((arr_46 [18] [i_20 + 1] [10]) - (arr_48 [i_20] [6] [i_20]))) % ((((arr_48 [10] [12] [i_20]) && (arr_46 [i_20 + 1] [i_20 - 1] [i_20]))))));
        var_47 -= (min(100, 18446744073709551615));
    }
    #pragma endscop
}
