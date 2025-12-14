/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_14 += ((7607805938368974595 >> (((arr_1 [7]) - 32584))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 -= (!var_10);
                    var_16 &= (((arr_5 [2]) ? var_6 : (~var_11)));
                    var_17 ^= -var_13;

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_18 -= ((((1 ? 1 : var_5)) == (var_0 ^ 32998)));
                        var_19 ^= (!56985);
                    }
                }
            }
        }
        var_20 = var_8;
        arr_10 [i_0] [i_0] = ((32751 + (-529694829878767729 == var_5)));
        var_21 &= (((arr_0 [1]) || var_8));
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_22 ^= ((var_10 ? 16 : (min(-1834894831, (arr_2 [i_4 + 2] [i_5] [i_4])))));
            arr_16 [i_4] = var_4;
        }
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            arr_21 [i_4] [i_6] = ((!(((var_10 ? ((var_11 ? 36331 : 114)) : (((220 < (arr_7 [i_4])))))))));
            var_23 *= (min(1, -92));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_24 = ((var_9 << (((!(arr_13 [i_4]))))));
            var_25 = var_13;
        }
        for (int i_8 = 2; i_8 < 24;i_8 += 1)
        {
            var_26 = ((!((((7537112847167341014 ? -1552419028 : var_5)) != -474))));
            arr_30 [20] [i_8 - 1] = (max((-9223372036854775807 - 1), (var_7 + var_13)));
            arr_31 [16] [10] = 29859;
            arr_32 [i_4] = ((~((((min(1107396346, -29620))) ? (~var_0) : (~var_2)))));
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 25;i_10 += 1)
            {
                {
                    arr_38 [i_4] [7] [5] = (max((max((arr_20 [i_4 + 1]), var_7)), 66));
                    arr_39 [i_10] [i_10] = 6678425850389387011;
                    arr_40 [i_4] [i_4] [i_10] [16] = ((((var_4 << (5415037346182075633 - 5415037346182075617)))) ? (((min(((max(var_12, var_2))), 40932)))) : (min(28699, ((min(0, var_0))))));
                    arr_41 [i_4] [i_9] [i_9] [i_10] = ((!(((((var_11 << (var_1 - 8764))) >> (var_2 + 3352))))));
                    arr_42 [i_4] = (var_6 ? (~7176) : (min(18014398509481983, (arr_6 [i_4] [i_9] [i_10]))));
                }
            }
        }

        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            arr_46 [i_4] [i_11] [i_4] |= ((((min((max(var_8, 3328800303)), ((max(1046184743, 72)))))) ? (max(0, 3748241366505464340)) : (arr_15 [i_11])));

            /* vectorizable */
            for (int i_12 = 2; i_12 < 24;i_12 += 1)
            {
                var_27 += ((26681 ? (((-(arr_45 [i_11] [i_4])))) : ((125 ? var_8 : var_11))));
                var_28 &= (((arr_8 [i_4 + 1] [10] [i_12 - 2] [4]) ? 71 : (arr_11 [i_4 - 1])));
            }
            for (int i_13 = 1; i_13 < 21;i_13 += 1)
            {
                arr_51 [i_13] = var_8;
                arr_52 [2] [i_13] [i_13] [i_4] = (~var_5);
                arr_53 [i_13] = (((var_13 || var_11) ? var_1 : var_4));
                var_29 = 38509;
                var_30 += (arr_1 [i_13 - 1]);
            }
        }
        var_31 = (((5093305927409850918 % (arr_0 [i_4]))) >> ((((37237 << (12365 - 12359))) - 2383114)));
    }
    for (int i_14 = 0; i_14 < 24;i_14 += 1)
    {
        arr_58 [i_14] [i_14] &= var_11;

        for (int i_15 = 0; i_15 < 24;i_15 += 1)
        {
            var_32 = (4662963897498956170 < 3377);

            /* vectorizable */
            for (int i_16 = 2; i_16 < 23;i_16 += 1)
            {
                var_33 &= ((arr_50 [i_14] [i_15] [i_16] [i_15]) ? var_0 : var_6);
                arr_63 [i_14] [i_16] [6] = (var_2 * var_8);
                var_34 = ((!(arr_50 [i_16 - 2] [i_16] [i_16 - 1] [i_16 - 2])));
                /* LoopNest 2 */
                for (int i_17 = 1; i_17 < 21;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 1;i_18 += 1)
                    {
                        {
                            var_35 *= (4294967285 ? var_7 : (arr_8 [i_18 - 1] [i_17] [i_17 + 3] [i_14]));
                            arr_68 [i_14] [i_15] [i_16] = (arr_27 [0] [i_16 - 1] [0]);
                            var_36 = var_1;
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                var_37 += (var_8 | 29);
                var_38 -= var_0;
                var_39 = var_5;
                arr_72 [4] [19] [19] = ((6692232019905295681 >> (6804 - 6791)));
            }
            var_40 = ((((((-70 == (max(var_5, var_7)))))) >= (arr_36 [i_14] [i_14] [i_14] [i_15])));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            var_41 = (((!var_5) ^ var_5));
            arr_75 [17] = (arr_3 [i_20]);
            arr_76 [i_20] [i_14] = (((((arr_15 [i_14]) ^ var_7)) >> (var_12 + 134)));
            arr_77 [i_14] [i_14] [i_20] = 3225718311;
            var_42 ^= (var_13 | 4403307980333022230);
        }
        arr_78 [i_14] = (((((((!0) != ((var_6 ? var_2 : (arr_67 [i_14] [i_14] [14] [13] [i_14] [i_14]))))))) - (min(var_7, (255 | var_12)))));
    }
    var_43 |= (~65535);
    var_44 = (min(-var_8, var_2));
    var_45 -= ((((((var_3 < var_7) & ((max(4339, 84)))))) ? var_3 : var_9));
    #pragma endscop
}
