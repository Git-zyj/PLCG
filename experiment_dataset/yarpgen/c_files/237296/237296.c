/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_0);

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            var_15 = ((1359230925 ? ((-(arr_3 [i_1] [7] [i_0]))) : ((var_6 ? var_9 : (5873945914736002642 ^ 1359230930)))));
            var_16 = (((((var_9 ? -16045 : var_12))) | (min(((5873945914736002637 ? 2935736363 : -10388)), (arr_1 [i_1])))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_17 = ((-73 ? (min((max(var_6, var_3)), (var_0 | var_9))) : (((1 ^ (1 | 10387))))));
                            var_18 ^= ((((arr_2 [i_0 - 2]) ? (min(var_13, var_12)) : (!var_1))));
                            var_19 = ((!(arr_4 [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
            var_20 = 10395;
        }
        for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    {
                        var_21 = ((((var_6 | (arr_18 [i_0] [i_0] [i_0 + 1] [i_0])))) ? (((arr_18 [i_0] [i_0] [i_0 - 1] [i_0]) ? var_6 : var_6)) : (arr_16 [i_0 - 1] [i_0 - 1]));
                        var_22 = var_10;
                        var_23 = var_13;
                    }
                }
            }

            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {

                for (int i_9 = 2; i_9 < 9;i_9 += 1)
                {
                    var_24 = ((!(((((min(var_10, (arr_1 [i_5])))) ? (~var_2) : (arr_10 [8] [i_5] [i_8] [i_5]))))));
                    var_25 = var_0;

                    for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                    {
                        var_26 = ((((((var_2 ^ var_11) | ((min(var_9, (arr_6 [i_0] [i_0] [i_8] [1]))))))) ? ((((arr_3 [i_9] [i_9] [i_9]) ^ (min(var_9, (arr_22 [i_0] [i_0] [0] [i_0])))))) : 5873945914736002669));
                        var_27 = (min(var_27, 60669));
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
                    {
                        var_28 = (arr_20 [i_0 + 1] [i_0]);
                        var_29 -= ((~(min(var_8, (arr_16 [i_9 - 2] [i_0 - 3])))));
                        var_30 = var_2;
                    }
                    var_31 = ((~(((arr_2 [i_0 - 1]) ? var_10 : var_8))));
                    var_32 = (min((((-595595569 ^ var_11) ? (arr_22 [i_0] [i_0 - 1] [i_0] [11]) : (max(4853, 1409247653091575650)))), (min((arr_23 [i_8] [i_5] [i_0 + 1]), (!var_8)))));
                }
                for (int i_12 = 4; i_12 < 11;i_12 += 1)
                {
                    var_33 &= ((-(var_5 / 1904261601)));
                    var_34 -= ((-(min((((-5873945914736002637 + 9223372036854775807) >> (var_8 + 46))), ((max((arr_26 [i_5] [i_0]), var_8)))))));
                }
                for (int i_13 = 3; i_13 < 11;i_13 += 1)
                {
                    var_35 = ((-((var_2 | (arr_31 [i_8 - 1] [i_13] [i_13 + 1] [i_8 - 1])))));
                    var_36 -= ((min((5873945914736002642 + var_2), (((var_9 ^ (arr_24 [i_13 - 3] [i_13] [i_13] [i_13])))))));
                    var_37 -= ((-((var_3 ? (((-(arr_9 [i_0] [8] [i_5] [i_13])))) : (~var_5)))));
                }
                var_38 = ((var_4 ? 7582871889374086759 : (((((arr_16 [i_0] [i_5]) && (((var_5 ? 36933787 : 3072)))))))));
                var_39 = arr_21 [i_0] [i_0 - 3] [i_8] [i_0];
            }
            var_40 ^= -378;
            /* LoopNest 2 */
            for (int i_14 = 3; i_14 < 9;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    {
                        var_41 = -var_10;
                        var_42 = (max(var_42, (max(var_12, (min(13409358766101412748, (arr_24 [i_14 - 3] [i_14 + 1] [i_14 - 2] [i_14 - 1])))))));
                    }
                }
            }
            var_43 += -595595569;
        }
        for (int i_16 = 0; i_16 < 12;i_16 += 1) /* same iter space */
        {
            var_44 = ((32767 ? var_12 : (var_3 ^ -98114176)));
            var_45 = (((arr_15 [i_16]) ^ var_0));
            var_46 = (min(var_10, (var_5 | var_0)));
        }
        for (int i_17 = 0; i_17 < 12;i_17 += 1) /* same iter space */
        {
            var_47 = ((-((-((1 ? (arr_16 [i_0] [i_0]) : var_4))))));
            var_48 = (min(((var_8 | (!var_11))), -var_0));
            var_49 = (min(var_49, ((((((min((arr_24 [i_0] [i_0 - 1] [i_0] [i_17]), 1763163398))) | (595595569 | var_3)))))));
        }

        for (int i_18 = 3; i_18 < 11;i_18 += 1)
        {

            for (int i_19 = 0; i_19 < 1;i_19 += 1)
            {

                for (int i_20 = 0; i_20 < 12;i_20 += 1)
                {
                    var_50 = (((((((min((arr_40 [i_18] [i_19]), var_8))) / ((var_12 ? var_10 : 3136814879))))) ? (!var_2) : ((((0 ^ var_6) | (max(2891373627, (arr_29 [i_0] [i_18] [i_19] [i_19] [i_20]))))))));
                    var_51 ^= var_12;
                }
                var_52 += (arr_34 [i_18 - 1] [i_0 - 1] [i_0 - 1]);
            }
            var_53 &= ((((((!(arr_12 [i_0] [i_18] [i_18 - 1]))) || (1 && 3892243853268310767))) ? (!var_3) : var_12));
            var_54 = (arr_22 [i_0] [i_0] [i_0] [i_0]);
            var_55 = (min(var_55, ((min((~var_1), (var_7 | var_10))))));
        }
        var_56 = ((((!((!(arr_12 [i_0] [i_0] [i_0 + 1]))))) ? ((var_6 ? var_5 : (((var_1 ? var_3 : var_9))))) : -5873945914736002638));
    }
    #pragma endscop
}
