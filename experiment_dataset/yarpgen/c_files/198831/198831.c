/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 ^= var_11;
        var_21 = ((!(49 >= 29)));
        var_22 = (((arr_1 [i_0] [1]) && (arr_1 [i_0] [i_0])));
        var_23 = ((((((arr_0 [i_0]) & (max(var_15, 31))))) ? (max(var_6, (((var_1 ? var_18 : var_13))))) : ((((arr_2 [i_0]) ? var_17 : (max((arr_0 [13]), (arr_2 [i_0]))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_24 = ((-(((arr_2 [i_1]) ? (arr_2 [i_2]) : (arr_8 [i_1] [i_1] [i_2] [0])))));
                    arr_11 [i_1] [i_2] [i_3] = ((((3050831999 ? (arr_2 [i_3 - 1]) : (min((arr_0 [i_2]), (arr_7 [i_1] [14])))))) ? ((((((arr_1 [i_2] [12]) ? (arr_5 [i_3]) : 3))) ? var_16 : 4140721565)) : (((min((arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 1]), (arr_9 [i_3 - 1] [i_3 + 1] [i_3 + 1]))))));
                }
            }
        }
        var_25 = (((arr_10 [i_1] [i_1] [i_1] [i_1]) ? (45 | 255) : (arr_0 [i_1])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_16 [i_4] |= (arr_14 [i_4] [i_4]);
        var_26 += (((arr_8 [i_4] [i_4] [i_4] [i_4]) >= (arr_1 [i_4] [i_4])));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_27 |= (((((((arr_18 [i_5] [i_5]) ? (arr_18 [i_5] [i_5]) : 1953770249197067828)))) ? (arr_19 [i_5]) : (arr_18 [2] [i_5])));
        var_28 *= ((~((~(max((arr_20 [i_5] [i_5]), 11))))));
        var_29 += (arr_19 [i_5]);
    }
    var_30 -= ((var_14 ? ((min(31, var_2))) : var_1));
    var_31 *= (((((var_7 ? ((var_15 ? var_6 : var_18)) : var_3))) ? (((((31 ? var_18 : var_14))))) : var_5));

    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_32 = (-9223372036854775807 - 1);

        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 20;i_10 += 1)
                    {
                        {
                            var_33 ^= (var_13 + -42);
                            var_34 += (arr_23 [i_10 - 2] [i_7 + 1]);
                            var_35 = (min(var_35, (arr_17 [i_6] [i_10 - 1])));
                        }
                    }
                }
            }
            var_36 |= (arr_30 [i_7 + 1] [i_6] [i_7] [i_7]);
            var_37 = (0 / -4562834681019682191);
            var_38 = var_13;
            var_39 = (arr_28 [i_6] [i_6]);
        }
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 21;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 19;i_13 += 1)
                {
                    {
                        var_40 = (arr_34 [i_6] [i_6]);
                        var_41 = (arr_27 [i_11] [i_11 + 1]);

                        for (int i_14 = 0; i_14 < 21;i_14 += 1)
                        {
                            var_42 = 576460752303423487;
                            var_43 = (var_17 ? -108 : (arr_37 [1] [i_13 + 2] [2] [3]));
                            arr_45 [i_13] [i_11] [i_12] [i_13 + 2] [i_14] = (127 << 15);
                        }
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            var_44 |= var_3;
                            var_45 = (!1);
                            arr_48 [i_13] [i_13] [i_12] [i_13] [13] = (((arr_33 [i_6] [i_11 - 1]) ? -var_10 : var_8));
                            arr_49 [i_11 + 1] [i_11 + 1] [i_13] [4] [i_11] [i_11] = (arr_33 [1] [i_15]);
                            var_46 = (max(var_46, (((15475126028388433533 ? -37 : (arr_28 [i_11 + 1] [i_11 + 1]))))));
                        }
                    }
                }
            }
            var_47 = (((arr_35 [i_11 + 1] [i_11 + 1] [i_11 + 1] [i_11]) ? (arr_35 [i_11 + 1] [i_11 - 1] [i_11 + 1] [i_11]) : (arr_29 [i_11] [i_6] [i_11 + 1] [i_11 + 1])));
        }
    }
    for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
    {
        var_48 = (max(var_48, (arr_27 [i_16] [i_16])));
        var_49 = ((((6 ? 3196764312 : var_16)) + var_15));
        arr_54 [i_16] = ((-(min((arr_40 [i_16]), var_0))));
        var_50 = max((((arr_19 [11]) | (arr_33 [i_16] [i_16]))), (((arr_18 [i_16] [i_16]) ? (arr_18 [9] [i_16]) : (arr_18 [i_16] [i_16]))));
    }
    for (int i_17 = 0; i_17 < 21;i_17 += 1) /* same iter space */
    {
        var_51 = ((((min(((var_3 ? -30899 : var_11)), (((arr_23 [i_17] [i_17]) ? 0 : (arr_30 [i_17] [i_17] [i_17] [i_17])))))) ? (arr_30 [i_17] [i_17] [i_17] [i_17]) : (arr_25 [1])));
        var_52 = arr_36 [i_17] [i_17] [i_17];
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 16;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 16;i_19 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_20 = 1; i_20 < 14;i_20 += 1)
                {
                    for (int i_21 = 2; i_21 < 13;i_21 += 1)
                    {
                        {
                            var_53 = ((((~(arr_57 [i_19]))) & (((arr_43 [i_20] [14] [i_20] [i_20] [i_20 - 1] [i_20] [i_20 + 1]) ? (arr_43 [i_20] [0] [i_20] [i_20 + 1] [i_20] [i_20] [i_20 + 2]) : (arr_43 [i_20] [i_20] [15] [i_20] [i_20] [i_20] [i_20 - 1])))));
                            var_54 = ((+(((((arr_44 [i_21] [i_18]) ? 3666323780 : (arr_66 [i_21]))) | (((min((arr_25 [i_18]), var_2))))))));
                            arr_67 [i_19] [i_18] [i_19] [10] [i_21 + 3] &= (arr_3 [i_19] [i_18]);
                            var_55 = ((((-118 * (((arr_19 [i_19]) ? (arr_4 [10]) : var_11)))) | (--4106)));
                        }
                    }
                }
                var_56 = (max(((((min((arr_56 [i_19]), var_17)) << ((((var_10 ? (arr_41 [i_18] [2] [i_19]) : (arr_29 [i_19] [i_19] [i_19] [i_18]))) - 1956294238))))), (((((7467628606572040164 ? 14644283605119079149 : (arr_6 [i_18] [5] [i_19])))) ? 4194303 : var_5))));
                var_57 = (max((((!(arr_29 [i_19] [i_19] [i_19] [i_18])))), var_14));
                var_58 += (((!var_2) ? var_11 : ((((((arr_32 [i_18] [i_18] [i_18] [i_19] [i_19] [18]) ? var_3 : (arr_26 [i_18] [18] [i_19])))) ? ((((!(arr_65 [i_18] [i_19] [i_19] [i_19]))))) : 9079088859876966506))));
                var_59 = (max(var_59, ((((min(var_10, 96)))))));
            }
        }
    }
    #pragma endscop
}
