/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53102
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= var_3;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = (min(var_11, (((!((max(-var_5, ((164 ? var_9 : var_1))))))))));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_12 = ((~(arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1])));
                var_13 = (min(60700, 91));
            }
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_10 [i_0] [i_0] [i_0] = var_1;
                var_14 -= -174;
            }

            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                var_15 |= (((-(arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 1] [i_1 + 1]))));
                var_16 &= ((var_0 ? var_8 : var_7));
                var_17 ^= (~4848);

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_18 ^= max(-var_8, var_5);

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_19 |= ((arr_5 [8] [i_0]) ? var_8 : var_2);
                        var_20 ^= var_3;
                        var_21 = ((~(arr_6 [i_4] [i_1 - 1] [i_1 + 2] [i_1 - 1])));
                    }
                    /* vectorizable */
                    for (int i_7 = 3; i_7 < 12;i_7 += 1)
                    {
                        var_22 ^= ((127 ? 4838 : 101));
                        var_23 = -897557780;
                    }
                    var_24 += var_3;
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_25 |= ((60708 ? (arr_18 [0]) : -897557751));
                    var_26 += (((min(var_0, var_7))));
                }
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    var_27 -= (min((!var_8), (((arr_19 [6] [12] [i_4] [i_4] [i_4] [i_4] [i_9]) ? var_6 : var_3))));
                    var_28 ^= ((~((((min(var_2, 30418))) ? ((var_4 ? var_3 : var_9)) : (~var_7)))));
                }
            }
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                var_29 = (min(var_29, var_9));
                arr_30 [2] [4] [i_10] = (max(-1674320569, (((arr_15 [10] [i_1 - 1] [i_1 - 2] [10]) ? var_4 : var_0))));
            }

            for (int i_11 = 4; i_11 < 12;i_11 += 1)
            {
                arr_34 [i_0] [i_1] [6] &= 274877906943;
                var_30 = (max(var_30, ((min(-var_0, var_2)))));

                for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        var_31 += var_3;
                        var_32 = (arr_20 [i_1 - 1] [i_11 + 1]);
                        var_33 = ((-(arr_29 [i_0] [i_0] [i_1] [i_1 - 1])));
                        var_34 = (!var_9);
                    }

                    for (int i_14 = 3; i_14 < 10;i_14 += 1)
                    {
                        var_35 ^= var_4;
                        var_36 += var_1;
                        var_37 = (min(var_37, ((max((arr_21 [i_11] [5] [i_11 + 1] [i_11]), ((max(-30419, 1))))))));
                    }

                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 13;i_15 += 1)
                    {
                        var_38 += ((var_2 ? var_0 : var_4));
                        var_39 ^= (arr_36 [i_0] [i_0] [6] [i_0] [i_0] [i_0]);
                        var_40 = (min(var_40, (!1)));
                        var_41 |= (~1);
                    }
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 13;i_16 += 1) /* same iter space */
                {
                    var_42 = var_1;
                    var_43 ^= var_1;
                }
                var_44 = (((var_4 ? var_7 : (arr_37 [i_11] [i_11]))));
                var_45 |= ((var_8 ? (((200 ? var_5 : var_4))) : 2069399256));
            }
        }
        for (int i_17 = 0; i_17 < 13;i_17 += 1)
        {
            var_46 = (((101847781 ? var_8 : (!60698))));

            /* vectorizable */
            for (int i_18 = 0; i_18 < 13;i_18 += 1)
            {
                arr_54 [i_0] [6] [5] |= var_1;
                var_47 = var_6;
            }
            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {
                var_48 |= ((var_0 ? (~var_2) : var_4));
                var_49 |= ((~((var_9 ? var_5 : var_8))));
            }
        }
        var_50 += var_7;
    }
    /* vectorizable */
    for (int i_20 = 0; i_20 < 13;i_20 += 1)
    {
        arr_60 [i_20] = var_5;
        var_51 ^= var_6;
    }
    var_52 -= var_5;
    #pragma endscop
}
