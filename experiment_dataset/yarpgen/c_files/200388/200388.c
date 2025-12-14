/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [i_0] = (((((~(arr_2 [i_0])))) ? ((-((1699449047 ? 3037938714 : var_10)))) : ((max((((arr_1 [12] [12]) ? (arr_0 [i_0]) : var_4)), -106)))));
        arr_5 [i_0] = (min((((-var_8 != (arr_3 [i_0])))), ((((((arr_0 [i_0]) || 3769145976326896090))) * ((var_14 ? (arr_1 [i_0] [i_0 - 1]) : 106))))));
    }
    var_20 = ((var_8 ? (-27612 || -615110499) : var_5));
    var_21 = (min((((-14677598097382655543 ? var_7 : var_0))), (min(14838, var_11))));

    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] = (arr_3 [i_1]);
        var_22 = (max(var_22, var_10));
        var_23 = -9223372036854775804;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_17 [i_2] [i_2] [i_3] = (arr_15 [i_3 - 1] [i_3 - 1]);

            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                var_24 += 1073479680;
                var_25 = ((100 ? (arr_0 [i_3 + 1]) : (arr_0 [i_3 + 1])));
            }
            var_26 = -232;
            arr_21 [i_3] [i_3] [i_3] = 9223372036854775807;

            for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
            {
                arr_24 [i_2] [8] &= (~-var_16);
                var_27 = ((14838 ? -5558614683285653320 : 1));
            }
            for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
            {
                var_28 = ((var_3 ? (arr_15 [i_2] [i_3 + 1]) : (arr_13 [i_3] [i_3 - 1])));
                var_29 -= (var_4 ^ -var_7);
                var_30 = (((arr_23 [i_3 + 1] [i_3 - 1] [i_3 + 1]) * (!var_14)));
            }
        }
        arr_27 [i_2] |= (min(((var_12 ? var_19 : (((-(arr_26 [i_2] [i_2] [i_2] [i_2])))))), var_12));

        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            arr_32 [i_7] [i_2] = (max(((var_11 ? ((((arr_29 [i_2] [i_2]) ? (arr_14 [i_2] [i_2] [i_2]) : var_7))) : 187283310449718880)), (((((((arr_16 [i_2] [9] [i_2]) == -85))) > (arr_26 [i_2] [i_2] [i_7] [3]))))));
            arr_33 [i_2] [i_2] [7] = var_1;
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            var_31 = -9223372036854775796;
            var_32 = min((max((arr_25 [12] [0] [i_8]), 0)), ((min((arr_25 [i_2] [i_2] [i_2]), -60))));
        }
        var_33 = (min(var_33, (((1229997903 ? ((2721758359 ? ((((arr_14 [i_2] [i_2] [i_2]) ? var_18 : 2147483647))) : ((var_6 * (arr_11 [i_2]))))) : ((((arr_20 [i_2] [i_2]) ? (max(156, 1651420150)) : (arr_2 [i_2])))))))));

        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            var_34 = (((((~(((arr_15 [3] [3]) | (arr_13 [i_2] [i_2])))))) ? ((min(var_6, 9223372036854775807))) : ((var_4 ? 3351 : (((((-2147483647 - 1) > -61))))))));
            var_35 = (arr_25 [i_9] [i_9] [i_9]);
            var_36 = (max(var_36, 7585912903382278599));
        }
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_37 = (max((!1229997916), ((-(arr_38 [i_2] [i_10] [i_10])))));
            var_38 = (max(var_38, ((max((-127 - 1), 163158000)))));
            var_39 = var_15;
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            var_40 = (min(var_40, (((((min(((~(arr_42 [i_2] [i_2]))), (~32767)))) ? ((((((-(arr_29 [i_2] [i_11])))) ? var_4 : 2147483647))) : ((179 ? 1966171289 : (arr_45 [i_2]))))))));
            arr_47 [i_2] [i_11] = (min(((~(arr_20 [i_11] [i_2]))), var_14));
        }
        /* vectorizable */
        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            var_41 &= (arr_15 [i_12] [i_2]);
            var_42 = (((arr_13 [i_2] [i_2]) ? 99 : (arr_13 [i_2] [10])));
        }
    }
    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
    {
        var_43 = (max(var_43, (((((arr_36 [i_13] [i_13] [4]) ? (arr_19 [i_13] [i_13] [i_13] [i_13]) : (((-2147483647 - 1) ? var_9 : var_0))))))));
        var_44 = (min(var_44, (((((((arr_37 [i_13] [i_13] [i_13]) + (arr_23 [i_13] [i_13] [i_13])))) * 18446744073709551615)))));
        var_45 = (~(max((arr_15 [i_13] [i_13]), (arr_39 [i_13]))));
    }
    #pragma endscop
}
