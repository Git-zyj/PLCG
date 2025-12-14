/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_19 = (~9482996372948873012);
        arr_3 [i_0 - 1] = (~27445);
    }
    for (int i_1 = 1; i_1 < 21;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_2] = (var_17 && var_5);
            arr_10 [i_2] [i_2] = (((arr_7 [i_2]) >> (((max((arr_6 [i_2] [i_2]), 12375137270716656264)) - 12375137270716656236))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 21;i_3 += 1)
        {
            var_20 += (!4239548695724465726);
            arr_13 [i_3 - 4] [i_1 - 1] [i_3 - 4] &= (((arr_7 [4]) ? (arr_4 [i_3 - 4]) : (~var_11)));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 19;i_4 += 1)
        {
            arr_17 [18] &= ((arr_12 [i_4 + 2] [i_1 - 1]) >> (4294967295 - 4294967234));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 19;i_6 += 1)
                {
                    {
                        arr_23 [i_1] [i_1 + 1] [i_4 + 1] [i_5 - 2] [20] |= (18446744073709551612 + -26602);
                        var_21 = (!-4239548695724465724);
                        var_22 += ((((arr_20 [i_1 - 1] [i_1]) > var_4)) && (~12846576568379853349));
                        var_23 *= ((16087140914213378152 ? 4254 : 1));
                    }
                }
            }
        }
        var_24 = 12239976159728636604;
    }
    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
    {
        var_25 ^= ((!((3583287797301477601 == (arr_6 [i_7 - 1] [0])))));
        arr_27 [i_7] = var_1;
        var_26 = 3820404493;

        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {
            var_27 = 808307685281351540;
            var_28 = (min(var_28, (arr_24 [i_7])));
            var_29 &= (((((((arr_18 [12]) + 2147483647)) << (((arr_28 [18]) - 15165)))) == ((((((arr_4 [i_7]) || (arr_5 [i_7]))) || var_12)))));
        }
        for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
        {
            var_30 = (((((~(arr_24 [i_7 + 1])))) || 22397));
            var_31 = (((((arr_24 [i_7 - 1]) ? (((~(arr_26 [i_7])))) : -16828739080245632097)) == (((((arr_30 [i_7 - 1] [i_7]) != (arr_30 [i_7] [i_7])))))));
        }
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1) /* same iter space */
    {

        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            var_32 = -2792305550;
            arr_42 [i_10] [i_11] [i_10 - 1] = -19575;
            var_33 = (((!11) ? 2574339546 : -16557));
        }
        /* vectorizable */
        for (int i_12 = 3; i_12 < 20;i_12 += 1)
        {
            var_34 = -4253;
            var_35 += (((arr_41 [14]) == 32767));
        }

        /* vectorizable */
        for (int i_13 = 1; i_13 < 19;i_13 += 1)
        {
            var_36 = 5922191585826552926;
            var_37 = 4261;
            arr_49 [i_10] [15] = (arr_26 [i_10]);
            var_38 = (max(var_38, 6126220920174261471));
        }
        var_39 += (19074 ? 17148 : 16);
    }
    var_40 = (((var_7 & var_4) == var_13));
    var_41 = 0;
    var_42 = ((((((((var_8 ? var_17 : 4252))) ? (((var_1 ? var_5 : 1022526295696825506))) : 4266))) ? -32753 : var_2));
    #pragma endscop
}
