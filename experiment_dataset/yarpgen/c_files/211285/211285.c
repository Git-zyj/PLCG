/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211285
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = (arr_0 [i_0] [i_0]);

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_2 + 1] [i_3] [i_1] = (max((91 || var_14), ((var_6 ? (arr_3 [i_2] [i_2 + 2] [i_2]) : (arr_3 [21] [i_2 + 2] [i_0])))));
                        var_21 = (((((arr_8 [i_3] [i_3] [i_2 + 3] [i_1 - 2] [i_1] [i_1]) / 58021)) / ((min(var_10, (arr_8 [i_3] [i_3] [i_2 + 2] [i_1 + 1] [i_0] [21]))))));
                        arr_10 [i_0] [i_1] [i_2 + 2] = (arr_3 [i_0] [i_0] [i_2]);
                    }
                }
            }
            var_22 = (max(64762, 0));
            var_23 = ((!(1306208822 | -1306208814)));
        }
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_20 [1] [i_4] [i_5] [i_6] [i_6 + 3] [1] = (arr_19 [i_6] [20] [i_6]);
                        var_24 = (~2147483647);
                    }
                }
            }
            arr_21 [i_0] = (arr_3 [i_0] [3] [i_4]);
            var_25 ^= (max((-1306208830 * 1), 1306208831));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {
                var_26 = arr_16 [i_4] [i_4] [i_7] [i_4];
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_27 = (min(var_27, var_14));
                            arr_29 [i_0] [i_8] [i_7] [15] = (i_8 % 2 == 0) ? ((((var_0 / 24062) % (((arr_12 [i_0] [i_4] [i_8]) << (((((arr_28 [i_8] [i_4] [i_8] [i_9] [i_9] [i_9]) + 95)) - 27))))))) : ((((var_0 / 24062) % (((arr_12 [i_0] [i_4] [i_8]) << (((((((arr_28 [i_8] [i_4] [i_8] [i_9] [i_9] [i_9]) + 95)) - 27)) - 41)))))));
                            arr_30 [i_0] [i_4] [i_8] [i_8 - 1] [i_9] = var_11;
                        }
                    }
                }
                arr_31 [i_0] [i_4] [i_7] [i_7] = ((var_16 ? var_3 : var_13));
                arr_32 [i_0] [13] [i_7] = (arr_17 [i_4] [i_4]);
                arr_33 [i_0] [i_0] [i_4] [15] = ((!(arr_11 [i_7])));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_38 [i_10] [14] [14] = var_4;
                var_28 = (min((((-((min(var_19, var_10)))))), ((var_9 - ((min((arr_0 [i_10] [1]), (arr_2 [i_0]))))))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
            {
                arr_41 [i_0] [i_0] = ((-9223372036854775799 ? 1306208814 : (56845 / 7163829277102805991)));
                var_29 -= ((!(arr_5 [i_11] [i_4] [i_0])));
                arr_42 [i_4] = (!13);
            }
            for (int i_12 = 3; i_12 < 22;i_12 += 1)
            {
                var_30 = var_15;
                var_31 = (min(var_14, (min((arr_19 [i_12] [i_12 + 1] [i_12]), 0))));
                var_32 = (min(var_32, var_15));
                var_33 = (arr_7 [i_0] [i_4] [i_4] [i_4] [4] [i_4]);
            }
        }

        /* vectorizable */
        for (int i_13 = 0; i_13 < 24;i_13 += 1)
        {
            var_34 = (arr_46 [i_0] [i_13] [i_13]);
            var_35 = (arr_6 [i_0] [i_13] [i_13] [i_0]);
        }
        /* vectorizable */
        for (int i_14 = 2; i_14 < 21;i_14 += 1)
        {
            var_36 = (min(var_36, (~-1)));
            arr_51 [i_14] [i_14] = ((!(arr_48 [i_14] [i_14 - 1] [i_14])));
        }
    }
    /* vectorizable */
    for (int i_15 = 1; i_15 < 23;i_15 += 1)
    {
        arr_56 [i_15] = (((((var_5 ? var_12 : var_17))) ? (arr_13 [i_15 + 1] [i_15 - 1]) : var_14));
        arr_57 [i_15] = var_12;
        arr_58 [i_15] = var_1;
        var_37 = ((~(~var_10)));
    }
    var_38 *= (min(var_3, var_16));
    var_39 = var_4;
    /* LoopNest 3 */
    for (int i_16 = 2; i_16 < 13;i_16 += 1)
    {
        for (int i_17 = 1; i_17 < 12;i_17 += 1)
        {
            for (int i_18 = 0; i_18 < 1;i_18 += 1)
            {
                {
                    arr_68 [i_16] [i_17] [i_18] [i_17] = (((((arr_18 [i_16 - 2] [i_17 + 1] [i_17 - 1]) ? var_12 : ((var_17 ? (arr_53 [i_17]) : -1306208826)))) <= (((!((max(var_11, var_1))))))));
                    var_40 = (max((((min(-7163829277102805991, (arr_52 [i_16] [6]))) + (arr_7 [i_16] [i_16 - 1] [i_16] [i_16 - 1] [i_17 + 2] [i_18]))), (((((max((arr_48 [i_17] [i_17] [i_18]), var_7))) != (((arr_1 [i_16]) ? var_1 : var_17)))))));
                    arr_69 [i_17] = (((((((var_17 - (arr_24 [i_16 - 1] [i_17] [i_18] [i_17] [i_18])))) ? -1306208796 : (arr_12 [i_16] [i_17] [i_18])))) ? ((((((min((arr_67 [i_16] [i_17] [i_18]), var_0)))) != ((12 ? -7163829277102805991 : (arr_48 [i_17] [i_17] [3])))))) : (!var_11));
                    var_41 = var_16;
                    arr_70 [i_17] [i_17] [i_17] = var_12;
                }
            }
        }
    }
    var_42 = (((((var_16 != -1306208826) && -var_13)) ? 4194303 : (max((!var_6), -1306208814))));
    #pragma endscop
}
