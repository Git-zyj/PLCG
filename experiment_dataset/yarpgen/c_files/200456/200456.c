/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((var_3 ? ((min((-6690400 <= 4180059723), (var_3 == 255)))) : var_5));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 = (min(var_13, (((!(((!var_0) <= (((arr_0 [2]) ? (arr_0 [14]) : 369557716)))))))));

        /* vectorizable */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_14 *= (((((var_0 ? (arr_4 [i_0]) : var_0))) ? (arr_2 [i_1 + 2] [i_1 - 1]) : 7));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_1 + 2] [i_0] = (((0 <= (arr_1 [i_0] [i_0]))));
                var_15 |= (arr_3 [i_2]);
            }
            arr_8 [i_0] = ((!(arr_6 [i_0] [i_1 + 1])));

            for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
            {
                var_16 &= (!(((var_11 ^ (arr_3 [i_3])))));
                var_17 = (max(var_17, var_4));
            }
            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
            {
                var_18 = ((arr_4 [i_1 - 1]) ? var_1 : (arr_6 [i_0] [i_1 - 1]));
                var_19 = (arr_1 [i_0] [i_4]);
                var_20 = (((arr_11 [i_1 - 1] [i_1 + 2] [i_1 - 1] [i_0]) ? (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_0]) : (arr_11 [i_1 + 1] [i_1 + 2] [i_1 - 1] [i_0])));
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_21 = (min(var_21, (arr_1 [i_5] [i_5])));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 17;i_7 += 1)
                {
                    {
                        var_22 |= ((((max((((!(arr_10 [i_5] [i_7])))), ((var_8 ? var_5 : var_8))))) ? 9223372036854775807 : (max((((arr_19 [2] [2] [i_7] [i_7]) ? var_10 : (arr_2 [i_7] [i_0]))), (min(var_10, var_5))))));
                        var_23 = ((max(3096779563, 1)) + 65533);
                    }
                }
            }

            for (int i_8 = 0; i_8 < 18;i_8 += 1)
            {
                var_24 -= min(((((((arr_13 [6] [i_5] [6]) ? var_8 : (arr_10 [16] [i_5])))) ? (min((arr_20 [17] [12] [i_0]), var_11)) : (!-30))), var_0);
                var_25 = ((((var_3 % ((-50 - (arr_1 [i_0] [i_5]))))) < 16384));
                var_26 &= var_7;

                /* vectorizable */
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_25 [i_0] [i_0] [i_8] [i_9] = ((!((((arr_11 [i_0] [i_5] [i_8] [i_0]) ? (arr_1 [i_0] [i_5]) : 0)))));
                    var_27 = (max(var_27, (arr_17 [i_0] [i_5] [i_0] [i_0])));
                    var_28 = (((arr_11 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [1] [i_8] [i_0]) : (arr_11 [i_0] [i_5] [4] [i_0])));
                }
                arr_26 [i_0] [i_8] [i_5] [i_0] = (min(((((((arr_14 [i_5] [i_5]) ? var_9 : var_11))) ? (((arr_19 [i_0] [9] [i_0] [2]) ? var_3 : (arr_5 [i_0] [i_0] [i_0] [i_8]))) : (!120))), (arr_2 [i_0] [5])));
            }
        }
        arr_27 [i_0] = (((!var_9) % (max((arr_11 [i_0] [i_0] [i_0] [i_0]), ((((arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 255)))))));
        var_29 = ((((arr_3 [i_0]) >= (((!(arr_11 [i_0] [i_0] [i_0] [i_0])))))));
    }
    var_30 |= var_4;

    /* vectorizable */
    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_31 [i_10] [i_10] = (!var_3);

        for (int i_11 = 3; i_11 < 15;i_11 += 1)
        {
            arr_36 [i_10] [i_10] = arr_29 [i_11 + 3];

            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                var_31 = ((!(arr_32 [i_11 - 2])));
                arr_41 [i_12] [i_12] [i_12] &= (arr_34 [i_12] [i_11 + 3] [i_10]);
                var_32 = var_2;
                var_33 = var_4;
            }
            var_34 = (max(var_34, ((((arr_32 [i_10]) ? (arr_29 [i_11 - 3]) : ((var_0 ? var_4 : (arr_30 [0]))))))));
        }
        var_35 = (max(var_35, ((((~-3181356282529011361) ^ (arr_28 [18] [18]))))));
    }

    /* vectorizable */
    for (int i_13 = 1; i_13 < 17;i_13 += 1)
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 19;i_15 += 1)
            {
                {
                    var_36 = ((((var_4 ? (arr_33 [i_13] [11] [i_15]) : 8303329062637789360)) * (arr_43 [i_13 - 1])));
                    var_37 = (min(var_37, (((!(arr_34 [i_15] [i_13 + 1] [i_13 + 1]))))));
                }
            }
        }
        var_38 = (arr_28 [i_13 + 1] [i_13]);

        for (int i_16 = 3; i_16 < 18;i_16 += 1)
        {
            var_39 = (min(var_39, ((((arr_44 [16] [i_16 - 1]) * var_1)))));
            var_40 = (max(var_40, ((((!var_9) ? ((var_9 ? 49152 : var_2)) : (arr_46 [12] [i_16 - 2] [i_13 + 1]))))));
            var_41 = (((arr_28 [i_13 - 1] [i_13]) ? (((arr_51 [i_16] [i_16] [9] [9]) ? var_2 : var_11)) : var_10));
            var_42 = ((var_8 ? var_6 : (arr_32 [i_13 - 1])));
            arr_55 [i_13] [18] = -788359972;
        }
        var_43 = ((((((arr_29 [i_13]) ? var_4 : var_7))) ? (arr_34 [i_13] [15] [i_13 + 1]) : (((arr_32 [i_13]) ? var_8 : var_4))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 20;i_17 += 1)
    {
        var_44 = (min(var_44, (((!(arr_57 [i_17] [i_17]))))));

        for (int i_18 = 0; i_18 < 20;i_18 += 1)
        {
            var_45 = (max(var_45, (((arr_58 [i_18]) * (arr_58 [i_17])))));
            var_46 = (((arr_61 [i_17]) + (arr_60 [i_17])));
            var_47 += 1298391371;
        }
        for (int i_19 = 2; i_19 < 18;i_19 += 1)
        {

            for (int i_20 = 0; i_20 < 20;i_20 += 1) /* same iter space */
            {
                arr_66 [i_17] = ((arr_57 [i_17] [i_19]) ? (arr_64 [i_17] [i_19] [i_19 + 2]) : (arr_64 [i_19] [i_19] [i_19 - 2]));
                arr_67 [i_20] [i_19] = ((!(arr_60 [i_17])));
            }
            for (int i_21 = 0; i_21 < 20;i_21 += 1) /* same iter space */
            {
                var_48 = ((4 ? ((~(arr_59 [i_17] [2] [i_21]))) : (!var_10)));
                var_49 = (arr_69 [i_19 - 1] [i_19 + 1] [i_19] [i_19 - 2]);
            }
            for (int i_22 = 0; i_22 < 20;i_22 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_23 = 2; i_23 < 18;i_23 += 1)
                {
                    for (int i_24 = 0; i_24 < 20;i_24 += 1)
                    {
                        {
                            var_50 = (min(var_50, ((((arr_78 [i_19 + 2] [i_23 + 2] [i_23] [i_23] [18]) ? (arr_68 [i_19] [3] [i_19 - 2]) : (var_3 != var_7))))));
                            var_51 = (((arr_64 [i_23 - 1] [i_23 - 1] [i_23]) ? ((((!(arr_75 [i_17] [i_19] [5] [5] [i_23] [i_19]))))) : (((arr_60 [i_17]) | -8388608))));
                            var_52 = var_6;
                        }
                    }
                }
                var_53 = ((var_6 ? (arr_57 [i_17] [i_17]) : (arr_74 [i_17] [i_19 + 2] [i_19 + 1] [i_22])));
                var_54 |= var_0;
            }
            var_55 &= ((arr_62 [i_19 + 2]) % (arr_62 [i_19 - 2]));
        }
    }
    #pragma endscop
}
