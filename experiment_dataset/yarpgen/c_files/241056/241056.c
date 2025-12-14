/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = var_2;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_14 = ((~(-6835636030135407745 ^ 180)));
                            var_15 -= (((-var_6 ^ 128) ? (~var_12) : (((+(((arr_10 [i_0] [i_1] [i_2]) ^ var_11)))))));
                            var_16 = ((max((arr_3 [i_3]), (arr_3 [i_3]))));
                            var_17 = var_12;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    arr_19 [i_4] [i_5] [i_5] [i_6] = 9538737092793010775;
                    arr_20 [i_5] = var_11;
                    var_18 = (((((117 ? var_4 : ((1804874577 ? (arr_17 [i_4] [i_5] [i_5]) : 1))))) ? 1 : ((((!((max((arr_3 [i_5]), var_3)))))))));
                }
            }
        }
    }
    var_19 = (max((min((var_3 - 253), (var_0 ^ 69))), var_10));

    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {
        arr_23 [i_7] = ((-var_2 + ((-(arr_21 [i_7])))));

        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            var_20 = (((((9538737092793010763 ? 911005221 : 192))) ? 137 : ((4294836224 ? 252 : 7))));
            arr_26 [i_7] [i_7] = (max(-6937871686067901916, 651603270));
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_21 = (max(var_21, (((((!((min(1429047298, 216))))))))));
            arr_29 [i_7] [i_7] [i_9] = var_2;
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 13;i_11 += 1)
                {
                    {
                        var_22 = ((!((((var_0 - var_2) ? (max(138, (arr_30 [i_7] [i_10 - 1]))) : (arr_28 [0]))))));

                        for (int i_12 = 1; i_12 < 13;i_12 += 1)
                        {
                            var_23 = (min(var_23, (arr_30 [i_9] [i_11 + 1])));
                            var_24 = max(var_4, (max((arr_35 [i_12 + 1] [i_12] [7] [5] [i_12] [i_12 - 1]), (arr_31 [i_7] [i_9] [i_7]))));
                        }
                        var_25 = (!1165245407);
                    }
                }
            }
            var_26 = (min(((var_11 - (~248))), var_7));
        }
        var_27 = (max(var_27, ((((39 != var_6) - ((~((~(arr_10 [i_7] [i_7] [i_7]))))))))));

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {
            var_28 = (~((((max((arr_5 [i_13] [i_13] [10] [i_13]), (arr_22 [i_13])))) ? var_3 : (min((arr_6 [i_7] [0]), 58)))));
            var_29 = (max(var_29, ((((~(min(var_3, var_7))))))));
        }
        for (int i_14 = 0; i_14 < 14;i_14 += 1)
        {
            var_30 = (min(var_30, (((((((min((arr_2 [i_7]), 1))) ? var_9 : (~var_10))) != 14)))));
            var_31 = (max(var_31, (arr_6 [i_7] [i_14])));
            var_32 = ((((min(93, 9538737092793010757))) ? ((min((arr_1 [i_14]), (arr_1 [i_7])))) : (arr_1 [i_14])));
            arr_42 [i_7] [i_7] [3] = ((0 ^ (max((arr_7 [i_7] [i_14] [i_7] [i_14]), (((arr_7 [i_7] [i_14] [i_14] [5]) ^ 100))))));
        }
        for (int i_15 = 0; i_15 < 14;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 1; i_16 < 13;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 14;i_17 += 1)
                {
                    {
                        var_33 |= (-(max(var_9, 178)));
                        var_34 = (~var_9);
                        arr_49 [i_7] [i_17] = (((!-1925625686) != (min((((arr_44 [i_7]) ^ var_6)), 115))));
                        var_35 = (min((max((max(var_9, (arr_39 [i_7]))), (((-513502690138996877 ? 159 : (arr_7 [i_7] [i_15] [i_15] [1])))))), (((((max(2282689780, -24))) ? (var_12 ^ 2282689773) : var_12)))));
                        arr_50 [i_7] [i_7] [i_7] [i_17] = ((((((arr_34 [i_7] [i_15] [i_16 + 1]) ? ((var_6 - (arr_38 [i_7] [i_17]))) : ((((!(arr_28 [i_17])))))))) ? 162 : (arr_8 [i_7] [i_7])));
                    }
                }
            }
            var_36 = (((arr_8 [14] [i_15]) ^ (!var_0)));
        }
    }
    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
    {
        var_37 = ((!((var_7 != (arr_34 [i_18] [i_18] [i_18])))));
        var_38 = (((((var_0 ? (arr_2 [i_18]) : var_10))) ? (min((arr_2 [i_18]), var_9)) : ((((arr_2 [i_18]) ? (arr_2 [i_18]) : (arr_2 [i_18]))))));
        var_39 = (-var_8 - (((!(arr_32 [i_18] [i_18] [i_18])))));
        /* LoopNest 2 */
        for (int i_19 = 0; i_19 < 14;i_19 += 1)
        {
            for (int i_20 = 0; i_20 < 14;i_20 += 1)
            {
                {
                    var_40 = (var_12 - 36028797018963967);
                    var_41 = ((((max(-622997572, 109))) ? (arr_56 [i_18] [4] [i_18]) : (((var_4 ^ var_11) ^ 35))));
                    var_42 = -1;
                }
            }
        }
    }
    #pragma endscop
}
