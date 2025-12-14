/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_21 &= (((((arr_1 [i_1 - 2] [i_1 - 1]) || var_7)) ? (((+(((arr_3 [i_0] [i_0] [i_1]) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0] [i_0])))))) : (max((min(15, 63099)), 0))));
            var_22 = (min(var_22, (((((min((max((arr_1 [i_0] [i_0]), 4294967281)), (arr_6 [i_0] [i_0])))) && ((((arr_2 [i_1 - 2] [i_1 + 1]) >> (((arr_2 [i_1 + 1] [i_1 - 1]) - 9072))))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_23 = var_17;
                        var_24 = ((((min(4294967280, (arr_12 [i_1] [i_1 - 2] [i_1 - 2])))) ? (arr_12 [i_0] [i_1 + 1] [i_1 + 1]) : ((((arr_12 [i_1] [i_1 - 1] [i_1 - 2]) ? var_18 : var_5)))));
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            var_25 = (max(var_25, var_19));
            var_26 = var_1;
        }
        for (int i_5 = 2; i_5 < 10;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    var_27 = (max((arr_12 [i_0] [i_5] [i_0]), 44));
                    var_28 = (min((max((min((arr_11 [i_7] [i_6] [i_5] [i_5] [i_0] [i_0]), var_12)), (min((arr_4 [i_0] [i_0]), var_1)))), (((((34977 << (1029890 - 1029889)))) ? (!var_4) : (arr_10 [i_7] [i_6] [i_5 - 2] [i_0])))));
                    var_29 -= (max((min(13659702404726046133, (arr_21 [i_0] [i_5] [i_0] [i_0]))), -1));
                    var_30 = -116;
                }
                var_31 = 4294967280;

                /* vectorizable */
                for (int i_8 = 3; i_8 < 10;i_8 += 1)
                {
                    arr_30 [i_0] [i_5] [i_6] [i_8 - 1] = (((arr_29 [i_5 - 1] [i_5] [i_8 - 1] [i_8 - 3] [i_8 - 1]) ? var_4 : var_19));
                    var_32 = (max(var_32, ((((arr_0 [i_5 + 1]) ? 849817905 : (arr_0 [i_5 - 1]))))));
                }
                /* vectorizable */
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    arr_34 [i_5] [i_5] [i_5] [i_0] = (arr_17 [i_0] [i_5 - 2] [i_9]);
                    var_33 = ((((((arr_29 [i_0] [i_5] [i_5] [i_6] [i_9]) ? 77 : (arr_12 [i_0] [i_5] [i_9])))) ? (arr_23 [i_5] [i_5] [i_5] [i_5 - 2]) : (arr_25 [i_5 - 1] [i_5 - 1])));
                }
                arr_35 [i_5] = (arr_33 [i_5] [i_5] [i_5] [i_6]);
            }
            var_34 = ((((((~47340) | ((var_18 >> (arr_15 [i_0])))))) <= (((arr_21 [i_5] [i_5] [i_5] [i_5]) ? -849817905 : (arr_20 [i_0] [i_5] [i_5 + 1] [i_5])))));

            /* vectorizable */
            for (int i_10 = 2; i_10 < 7;i_10 += 1) /* same iter space */
            {
                var_35 = ((1 ? ((2 >> (var_8 - 14026175764515086720))) : (arr_1 [i_5 - 1] [i_5 - 2])));
                var_36 = (var_8 + var_4);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_37 = (arr_31 [i_0] [i_0] [i_0] [i_0] [i_5]);
                            arr_43 [i_0] [i_5] [i_5] [i_11] [i_12 - 1] = ((var_18 <= (arr_29 [i_0] [i_5] [i_0] [i_11] [i_12 - 2])));
                            arr_44 [i_12] [i_5] [i_0] [i_5] [i_0] = (arr_42 [i_5] [i_12 - 2]);
                            var_38 = ((((((arr_10 [i_0] [i_5 + 1] [i_11] [i_11]) ? var_8 : var_14))) ? (0 > var_3) : (arr_12 [i_12 + 2] [i_5 - 1] [i_10])));
                            var_39 = ((!(arr_16 [i_12])));
                        }
                    }
                }
                var_40 = ((-(-849817903 ^ var_16)));
            }
            /* vectorizable */
            for (int i_13 = 2; i_13 < 7;i_13 += 1) /* same iter space */
            {
                var_41 = (min(var_41, ((((~var_18) ? var_16 : var_5)))));
                var_42 = (((arr_19 [i_5]) ? var_8 : 12004170694715692339));
                /* LoopNest 2 */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 11;i_15 += 1)
                    {
                        {
                            var_43 = (max(var_43, (arr_6 [i_13 + 1] [i_5 + 1])));
                            arr_51 [i_0] [i_0] [i_0] [i_13 + 2] [i_5] [i_0] = (((arr_12 [i_5 - 2] [i_5] [i_5]) ? (arr_47 [i_5 - 2] [i_5]) : (arr_27 [i_5 - 2] [i_5] [i_5] [i_5 - 2] [i_5 - 1] [i_5])));
                            arr_52 [i_5] [i_14] [i_15] = (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
                            var_44 = (((arr_50 [i_5 - 1] [i_14] [i_14] [i_15] [i_15]) ? 20479 : -5));
                            var_45 = (max(var_45, (((var_3 ? (arr_33 [i_0] [i_13 + 1] [i_13 - 1] [i_0]) : (arr_4 [i_0] [i_5 - 2]))))));
                        }
                    }
                }
            }
            for (int i_16 = 2; i_16 < 7;i_16 += 1) /* same iter space */
            {
                var_46 = ((max(((((arr_4 [i_5] [i_0]) == (arr_42 [i_5] [i_16 + 1])))), var_15)));
                var_47 = (min(var_47, ((3991077054 >> (var_3 + 6605918304014152678)))));
                arr_55 [i_0] [i_0] [i_5] = (((((arr_13 [i_5] [i_5] [i_16] [i_5 - 1]) / 2147483647))));
            }
            var_48 = var_17;
        }
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 11;i_18 += 1)
            {
                {
                    var_49 = 1483587488;
                    var_50 = (max(var_50, ((max(((((arr_32 [i_0] [i_17]) ? (arr_15 [i_18]) : (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((((max(29553, (arr_58 [i_0] [i_17] [i_0])))) - 2147483647))))))));
                }
            }
        }

        /* vectorizable */
        for (int i_19 = 1; i_19 < 10;i_19 += 1)
        {
            var_51 = (arr_8 [i_19 - 1] [i_19 + 1] [i_0]);
            var_52 |= (var_0 % -1483587488);
        }
    }
    var_53 = var_16;
    #pragma endscop
}
