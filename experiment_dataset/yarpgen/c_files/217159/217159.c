/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217159
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((!(var_16 < 163369577)))), ((var_1 ? (min(var_4, var_8)) : (var_13 == 12322042746792357050)))));
    var_18 = var_11;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                var_19 = var_5;
                arr_10 [i_2] [i_0] [i_0] = (((~768) ^ -163369580));
            }
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                var_20 = ((((!(arr_5 [i_1 + 1] [i_1 + 1] [i_3 + 2]))) ? var_3 : (var_2 / var_3)));
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_19 [i_4] = ((!(!var_0)));
                            arr_20 [i_3] [2] [i_4] = ((((((arr_9 [i_0] [i_1 - 2] [i_1 - 2] [i_0]) || var_2)))) | (max((var_2 * 0), var_16)));
                            arr_21 [i_0] [i_4] = ((var_8 * (((((var_13 ? var_8 : var_8))) ? (max((arr_14 [i_0] [i_1] [i_4] [i_5]), var_5)) : (var_9 * var_3)))));
                            var_21 = var_8;
                        }
                    }
                }
                var_22 = (((((-((var_10 ? var_13 : (arr_11 [1] [2] [2])))))) * 4021335807));
                arr_22 [i_0] [i_0] [i_3] = ((!(arr_2 [i_1])));
                var_23 = ((!((min(49632, -1345252123)))));
            }
            arr_23 [i_1] = (((min(((var_12 ? var_14 : var_7)), var_10)) != 33));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 13;i_9 += 1)
                    {
                        {
                            var_24 = (!var_5);
                            var_25 = -var_7;
                            arr_35 [i_0] [i_6] [i_7] [i_7] [i_9] [i_9] = (arr_7 [i_0] [i_7] [i_9]);
                        }
                    }
                }
            }
            var_26 = var_13;
        }
        /* vectorizable */
        for (int i_10 = 1; i_10 < 11;i_10 += 1)
        {
            arr_38 [i_10] = (!var_1);
            var_27 ^= 12876421521019352385;
        }
        var_28 = (min(var_28, (((4 ^ (min((!var_13), var_12)))))));
    }
    for (int i_11 = 2; i_11 < 23;i_11 += 1)
    {

        for (int i_12 = 2; i_12 < 23;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                arr_46 [i_12] = ((var_12 ? (arr_39 [i_11 - 1]) : (var_10 <= var_3)));
                var_29 = ((((var_0 ? 1 : var_12))) ? (!var_4) : (arr_42 [i_12 - 1] [i_12 - 1] [i_11 - 1]));
                arr_47 [i_13] [i_12] [i_11] [i_11] = ((-((4175762803 - (arr_44 [i_11] [18] [18])))));
            }
            for (int i_14 = 0; i_14 < 24;i_14 += 1)
            {

                /* vectorizable */
                for (int i_15 = 0; i_15 < 24;i_15 += 1)
                {
                    arr_53 [i_14] [i_14] [i_12] [i_11] = -var_10;
                    arr_54 [17] [i_15] [i_14] [i_14] [i_12] [19] &= (-var_9 != (-26 / -1345252123));
                }
                /* vectorizable */
                for (int i_16 = 0; i_16 < 24;i_16 += 1)
                {
                    var_30 = (((!var_3) ? var_13 : var_12));
                    var_31 = (!var_6);
                    var_32 = var_14;
                    arr_59 [i_16] [i_14] [i_16] [i_12] [i_11 - 1] = ((var_14 ? 254 : var_2));
                }
                var_33 = ((+(((arr_49 [i_11] [i_11]) << (-var_4 - 14386622300571460814)))));
                var_34 = (!(0 - var_8));
                /* LoopNest 2 */
                for (int i_17 = 4; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 1; i_18 < 21;i_18 += 1)
                    {
                        {
                            var_35 = var_0;
                            arr_66 [i_11] [i_12] [i_14] [i_17 - 2] [3] = (min(((var_0 ? var_13 : var_2)), ((var_7 ? var_0 : var_3))));
                            arr_67 [i_18 - 1] [13] [i_14] [i_12] [i_11] = -var_1;
                        }
                    }
                }
                arr_68 [i_14] [i_12] [1] [i_11] = ((-(~var_0)));
            }
            for (int i_19 = 0; i_19 < 24;i_19 += 1)
            {
                arr_72 [i_12] = (var_8 < var_14);
                arr_73 [3] = (((arr_58 [i_11] [i_11] [i_11] [i_11]) ? (max(730892833, var_7)) : var_11));
            }
            for (int i_20 = 0; i_20 < 24;i_20 += 1)
            {
                var_36 ^= var_9;
                var_37 = (min(45, var_5));
                arr_77 [i_20] &= (((var_10 << ((((max(0, (arr_45 [i_20] [i_11] [18] [i_11])))) - 36)))));
                var_38 = ((((max(-1399094041555503194, (arr_55 [i_12 - 1] [11] [i_11 - 2])))) != (~5570322552690199231)));
                var_39 = ((-(max(12876421521019352388, -8))));
            }
            var_40 = (~26);
            var_41 ^= -695275127;
        }
        for (int i_21 = 0; i_21 < 24;i_21 += 1)
        {
            var_42 ^= ((~(var_10 ^ var_7)));
            arr_80 [i_21] [i_21] [17] = ((-((554871421615266323 ? var_14 : var_0))));
        }
        var_43 &= (!var_14);
        var_44 = ((((((var_15 ? var_10 : 12876421521019352388)) < (arr_43 [i_11 - 1] [i_11 + 1] [1]))) ? ((~(arr_41 [13]))) : var_2));
        var_45 = ((~(~var_14)));
    }
    for (int i_22 = 0; i_22 < 15;i_22 += 1)
    {
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 1;i_23 += 1)
        {
            for (int i_24 = 1; i_24 < 13;i_24 += 1)
            {
                {
                    var_46 = var_11;
                    arr_90 [2] [i_22] [i_23] [i_24] = (min((~8695107265285598229), (((var_12 | -1345252132) ^ -2720152271844011648))));
                    arr_91 [i_22] [i_22] [i_23] [i_24] = ((-(!-8631690361291580349)));
                    var_47 = (~var_11);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_25 = 0; i_25 < 15;i_25 += 1)
        {
            for (int i_26 = 0; i_26 < 15;i_26 += 1)
            {
                {
                    arr_98 [i_22] [2] [i_22] &= ((!((((!-1399094041555503174) ? (arr_41 [3]) : var_2)))));
                    arr_99 [i_22] [2] [7] [i_25] = ((((var_3 ? var_10 : var_5)) != 1));
                    arr_100 [i_25] [i_26] [2] [i_25] = ((((arr_56 [i_26] [i_25] [i_25] [i_22]) >= ((var_10 ? var_0 : var_3)))) ? ((var_14 ? (max(-2720152271844011645, 15904)) : var_8)) : var_13);
                }
            }
        }
    }
    var_48 = var_0;
    #pragma endscop
}
