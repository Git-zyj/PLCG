/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((2147483647 ? ((max(15715, 65528))) : 15718)) | -8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = (((var_13 ? ((var_9 << (var_1 - 104))) : var_8)));
                var_16 = (((arr_4 [i_0] [i_1] [i_0]) ? (((var_2 + 2147483647) << (var_5 - 2387))) : (((!(!var_7))))));
                arr_5 [i_0] = 15715;
                var_17 = (min(var_11, ((((min(59533, var_3))) ? (arr_1 [i_0] [i_1]) : -var_4))));
            }
        }
    }
    var_18 *= ((-var_12 <= var_11) > (((((-8 * var_11) + 2147483647)) << (((var_6 || var_10) - 1)))));

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_19 = ((222 && (!var_13)));
        arr_8 [i_2] = ((var_13 + (arr_7 [i_2] [i_2])));

        for (int i_3 = 0; i_3 < 0;i_3 += 1) /* same iter space */
        {
            var_20 = (!-8);

            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                arr_15 [i_3] = ((arr_4 [i_3] [i_3] [i_4 + 2]) ? var_6 : (arr_4 [i_3] [i_3 + 1] [i_4]));
                arr_16 [10] &= (!var_3);
            }
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            var_21 = (((arr_19 [i_2] [i_3] [i_3] [i_7]) >> (var_2 - 36)));
                            var_22 = (((((-32765 ? 15715 : 14405))) || 0));
                        }
                    }
                }
                arr_23 [i_3] [i_2] [i_3] = (((arr_7 [i_2] [i_3 + 1]) ? (arr_18 [i_2] [i_3]) : (arr_12 [i_2] [i_3])));
                var_23 &= (!15732);
                var_24 = ((~(var_4 | var_10)));
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_25 = (max(var_25, ((((var_5 <= (arr_10 [i_2])))))));
                var_26 = (max(var_26, (((var_7 <= ((49825 ? (arr_24 [i_2] [i_2] [i_8 + 1]) : (arr_9 [4]))))))));
                var_27 = (-168 >= var_1);

                for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
                {
                    arr_30 [i_3] [i_3] [i_8] [i_9] = var_10;
                    var_28 = ((var_3 < ((var_12 ? (arr_6 [i_2]) : var_12))));
                    var_29 = (((!var_11) % var_2));
                    var_30 = (min(var_30, (((var_0 ? (arr_19 [i_3 + 1] [i_3 + 1] [i_8] [i_8 - 2]) : (arr_24 [i_3 + 1] [i_8 - 2] [i_9]))))));
                }
                for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                {
                    var_31 = ((-1628816131 ? -21713 : 127));
                    var_32 = (arr_0 [i_3]);
                }
            }
            arr_34 [i_3] [i_3] = var_12;
        }
        for (int i_11 = 0; i_11 < 0;i_11 += 1) /* same iter space */
        {
            var_33 = ((var_11 ? var_11 : var_8));
            var_34 = var_7;
        }
        for (int i_12 = 0; i_12 < 0;i_12 += 1) /* same iter space */
        {
            var_35 = ((-21717 >> (var_8 + 11)));

            for (int i_13 = 0; i_13 < 15;i_13 += 1)
            {
                var_36 = arr_3 [i_13] [i_12] [i_13];
                var_37 = ((-(((arr_37 [i_2] [i_2] [i_2]) ? var_9 : var_8))));
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 14;i_14 += 1)
                {
                    for (int i_15 = 0; i_15 < 15;i_15 += 1)
                    {
                        {
                            var_38 = (~133);
                            var_39 = (((((arr_44 [i_2] [i_12 + 1] [i_13]) << (var_0 - 20855))) == (arr_24 [i_2] [i_2] [i_2])));
                        }
                    }
                }
                var_40 -= var_5;
            }
            var_41 = ((arr_38 [i_12 + 1] [i_12]) ? 108 : var_10);
            var_42 = ((!(arr_48 [i_2] [i_2] [i_2] [i_12] [i_12] [i_12] [i_12])));
            arr_50 [i_12] = var_7;
        }
        for (int i_16 = 0; i_16 < 0;i_16 += 1) /* same iter space */
        {
            var_43 = (((((arr_7 [i_2] [i_2]) / (arr_29 [i_2] [i_2] [i_2] [i_2] [i_2]))) == var_1));

            for (int i_17 = 2; i_17 < 14;i_17 += 1)
            {
                var_44 = (min(var_44, (arr_20 [i_2] [10])));
                var_45 += var_4;
            }
        }
        var_46 ^= ((~(arr_52 [8] [i_2] [i_2])));
    }
    #pragma endscop
}
