/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) > (arr_0 [i_0])));
        arr_4 [i_0] = var_15;
        arr_5 [i_0] |= (arr_0 [i_0]);
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_18 = arr_6 [i_1] [i_1];

        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            var_19 &= ((((max(63, (max(14072, 1))))) >> ((((54 ? 201 : 1)) - 192))));
            arr_10 [i_1] [i_2] [i_1] = ((var_3 * ((((!(arr_8 [i_1] [i_2] [i_2 + 1])))))));
            var_20 -= (((((!(arr_7 [i_1] [i_2])))) << (var_8 + 51)));
        }
        var_21 = ((+(max((max((arr_6 [i_1] [i_1]), var_0)), (((var_4 ? var_6 : -14752)))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_15 [i_1] [i_1] [i_1] = 3602316926;
            var_22 = (((var_8 ? (arr_9 [i_1]) : var_5)) << ((((arr_12 [i_3] [i_1]) || var_4))));
        }
        /* vectorizable */
        for (int i_4 = 1; i_4 < 16;i_4 += 1)
        {
            var_23 = ((14065 == (arr_18 [i_4])));
            var_24 = (((arr_9 [i_4]) ? 11620057258803159897 : ((((arr_9 [i_4]) ? (arr_11 [i_4 - 1] [i_4 + 1] [i_1]) : (arr_13 [i_1] [i_4]))))));

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_25 = (((14077 >= 14838406715661209885) ? (arr_22 [i_4 + 2]) : 220));
                    var_26 = ((1 ^ ((var_12 ? (arr_6 [i_1] [i_1]) : var_10))));
                }
                arr_26 [i_1] [i_4] [i_4] [i_5] = (((arr_20 [i_4] [i_4 - 1] [i_4 + 2]) ? (arr_9 [i_4 + 1]) : (arr_20 [i_4] [i_4 + 2] [i_4 + 2])));
                var_27 = (max(var_27, (((-(arr_6 [i_4 + 2] [i_4 + 2]))))));
                var_28 *= 1;
                var_29 ^= (arr_12 [i_4] [i_4]);
            }
        }
        for (int i_7 = 2; i_7 < 18;i_7 += 1)
        {
            var_30 = (min(var_30, ((max(((14040 ? (arr_11 [i_1] [i_7 - 2] [i_1]) : (arr_11 [i_1] [i_7 + 1] [i_1]))), (((arr_11 [15] [i_7 + 1] [i_7]) << (((arr_11 [i_1] [i_7 - 1] [i_1]) - 2862556610)))))))));
            var_31 = (min(var_31, ((max(692650361, ((201 ? 51495 : (arr_25 [i_1] [i_1] [i_1] [i_7]))))))));
            var_32 = (((!(arr_8 [i_7 - 1] [i_7] [i_1]))));
            var_33 = (min(var_33, ((((min((arr_23 [i_1] [i_7] [i_7 - 2] [i_1] [i_7]), 481882420)) % ((max((arr_12 [i_7 - 2] [i_7]), 3892423694))))))));
            arr_29 [i_1] [8] [i_1] = (max(((-74 ? var_0 : ((((var_9 || (arr_22 [i_1]))))))), (((((min(71, (arr_20 [i_1] [i_1] [i_1])))) ? var_9 : var_15)))));
        }
    }
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 3; i_11 < 16;i_11 += 1)
                {
                    {
                        var_34 = (max(var_34, 402543616));

                        for (int i_12 = 2; i_12 < 16;i_12 += 1)
                        {
                            var_35 &= var_4;
                            var_36 = max((-10 && 51500), (arr_33 [i_8] [i_8]));
                            var_37 *= var_7;
                            var_38 -= ((3892423679 ? 0 : 18446744073709551615));
                            arr_44 [i_8] [i_9] [i_10] [i_11 + 1] = (arr_14 [i_12 - 2]);
                        }
                        var_39 = ((83 ? ((((!(((102 ? 1 : (arr_38 [i_10] [i_10 - 2] [i_10])))))))) : (min(var_0, (arr_34 [i_8] [i_8])))));
                    }
                }
            }
        }
        var_40 = var_12;
    }
    for (int i_13 = 1; i_13 < 1;i_13 += 1)
    {
        arr_47 [i_13] = ((var_14 < (min((min(var_8, var_4)), (arr_37 [i_13 - 1] [i_13] [i_13 - 1])))));
        var_41 = (max(var_41, var_2));
        var_42 ^= (((arr_3 [i_13 - 1]) ? (((arr_12 [i_13] [i_13 - 1]) ? var_4 : (max(-6823759823577910131, (arr_0 [i_13]))))) : ((((min(var_13, (arr_45 [i_13]))))))));
    }
    #pragma endscop
}
