/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, 3830732058975870717));

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            var_16 = -18;
            arr_4 [3] [3] [i_0] = (((arr_0 [i_1 - 3] [i_0 + 1]) ? (arr_0 [i_1 + 1] [i_0 - 1]) : (arr_1 [i_0 + 1])));
            var_17 &= -2361853978100360104;
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_18 ^= var_14;
            var_19 = (max(var_19, (arr_1 [i_0 - 1])));
            var_20 = (max(var_20, var_12));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] [i_0] = (!1);
            arr_12 [i_0] = (arr_7 [i_0]);

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_21 *= (arr_16 [i_5] [i_4] [i_0 - 1] [i_3] [i_0 - 1] [i_0 + 1]);
                    var_22 += (arr_18 [4]);
                    arr_19 [i_0] [i_3] [i_4] [i_0] = var_12;
                    arr_20 [i_0] [i_0] [i_4] = ((arr_2 [i_0] [i_0 + 1]) != (arr_0 [i_0 - 1] [i_3]));
                }

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    arr_23 [i_0] [i_4] [i_4] [i_3] [i_0] = -3830732058975870719;
                    var_23 = (min(var_23, ((((((-2482 ? (arr_1 [i_3]) : 9223372036854775807))) ? var_10 : ((((arr_13 [i_0] [i_6]) && 946891451))))))));
                }
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    arr_28 [i_3] [i_3] [i_3] [i_0] [i_3] = (!741145092);
                    var_24 = (((arr_9 [i_0] [i_0] [i_0]) ? (!var_6) : (!0)));
                    arr_29 [i_0] [i_4] [i_3] [i_0] = (((arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]) | var_11));
                }
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 10;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_25 = var_0;
                            arr_40 [i_9] &= (var_7 - var_11);
                            arr_41 [i_10] [i_0] [i_8] [i_0] [i_0] = (((arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : -21776));
                            var_26 = (max(var_26, (~var_5)));
                            var_27 *= (((arr_34 [i_10] [i_10] [i_10] [i_10]) ? (arr_34 [i_0] [i_3] [i_8] [i_3]) : 32752));
                        }
                    }
                }
                arr_42 [i_0 + 1] [i_3] [i_0] [i_8] = ((1 ? -21770 : 7));
            }
            var_28 += (arr_32 [2] [i_0 - 1] [i_0] [1]);
        }
        var_29 = 2774;
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 10;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 10;i_13 += 1)
                {
                    {
                        var_30 = ((-4096 ? 1 : 1));
                        var_31 = (min(var_31, (arr_26 [i_0] [i_0] [i_11] [i_12] [i_13])));
                        var_32 = (min(var_32, (arr_24 [2] [i_13] [2] [i_11] [i_0] [2])));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 9;i_14 += 1) /* same iter space */
    {
        arr_55 [i_14] = (1 & (arr_3 [i_14]));
        var_33 = ((8386560 ? 5814 : 2482));
        arr_56 [i_14] = 97;
        arr_57 [i_14] = 3615;
    }

    for (int i_15 = 0; i_15 < 21;i_15 += 1)
    {
        var_34 = (min(var_34, (arr_58 [i_15] [i_15])));
        var_35 = ((-(min(741145062, 3924299686))));
        var_36 = (((arr_59 [i_15]) ? ((1 ? var_6 : ((56193 ? (arr_59 [i_15]) : (arr_59 [i_15]))))) : ((((-(arr_59 [i_15]))) + 741145052))));
    }
    for (int i_16 = 0; i_16 < 19;i_16 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 1;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 19;i_18 += 1)
            {
                {
                    var_37 = (min(var_37, 32755));
                    arr_66 [i_18] [i_17] [i_16] = var_3;
                }
            }
        }
        var_38 = (max(var_38, (!var_6)));

        for (int i_19 = 0; i_19 < 19;i_19 += 1)
        {
            var_39 -= (((((min(3830732058975870719, (arr_67 [i_19] [i_16] [i_16]))))) ? ((((!32765) ? var_7 : var_0))) : 6471335616806435048));

            for (int i_20 = 0; i_20 < 19;i_20 += 1)
            {
                var_40 = (!1349211908);
                var_41 -= (((((~(arr_59 [i_20])))) ? (!var_2) : var_14));
                arr_73 [i_16] [i_16] = ((!(((-(arr_70 [i_16] [2]))))));
            }
            var_42 = (((arr_65 [i_16] [10]) ? -18 : ((-(~var_4)))));
            var_43 = (max(var_43, ((((((((-32755 ? var_11 : var_9))) ? -3830732058975870737 : var_6))) ? ((min((((1125899906842623 <= (arr_59 [i_19])))), ((var_8 ? var_4 : var_10))))) : 3913859269))));
            var_44 = var_2;
        }
        var_45 = (max(var_45, (~4175043972)));
        var_46 = (((arr_60 [i_16] [i_16]) | ((min((arr_63 [i_16]), (arr_63 [i_16]))))));
    }
    for (int i_21 = 0; i_21 < 19;i_21 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_22 = 0; i_22 < 19;i_22 += 1)
        {
            for (int i_23 = 0; i_23 < 19;i_23 += 1)
            {
                {
                    var_47 = (min(var_47, (min((((((32759 ? 123 : 14589))) ? ((var_13 ? 1 : var_7)) : -53)), var_3))));
                    arr_81 [i_21] [18] = (((arr_80 [i_21] [16]) ? 507563693 : (arr_77 [i_23] [i_22] [i_21])));
                }
            }
        }
        var_48 += 4026531840;
        var_49 += (-26 && 0);
        var_50 = (min(var_50, var_13));
    }
    #pragma endscop
}
