/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (max(var_1, var_4));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (max(((-(arr_0 [i_0]))), (arr_0 [i_0])));
        var_13 = var_4;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = (max((((max(15763, (arr_3 [i_1] [i_1]))) % var_4)), -572449732));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_15 = (min(var_15, ((min(2796517561676219213, (((var_0 ? 97 : ((min(15776, (arr_5 [i_1] [i_2] [i_1]))))))))))));
            var_16 = 13;
            var_17 = max(-var_6, var_6);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_18 = ((~((((~var_1) > (arr_3 [i_1] [i_4]))))));
                var_19 = ((~(~var_9)));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_20 = ((51 ? var_9 : 1));
                            var_21 = var_9;
                            var_22 = var_3;
                        }
                    }
                }
                var_23 = ((49743 ? (arr_16 [i_1] [i_3 + 2] [i_1] [i_1] [i_3]) : 32));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                var_24 = -1025169187;
                var_25 = ((~(arr_6 [i_3] [i_3 + 2])));
                var_26 = (max(var_26, var_2));
            }
            var_27 = (min(var_27, (~118)));
            var_28 = (((max(-1285528792, ((min(var_6, var_1))))) >> ((((~(arr_24 [i_1] [i_1] [i_3] [i_3]))) - 2137493998))));
        }
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_29 = arr_20 [i_1] [i_9];
            var_30 = (min((((var_3 ? var_6 : -16809))), ((var_4 ? var_5 : (~var_6)))));
            var_31 = ((-(-1681547966 | var_5)));
            var_32 &= (!((max(var_7, 48727))));

            for (int i_10 = 1; i_10 < 9;i_10 += 1)
            {
                var_33 = (arr_14 [i_10 + 2] [i_9] [i_1]);
                var_34 = var_7;
                var_35 = ((((8355840 >> (16809 - 16797))) >> (((min((arr_23 [i_10 - 1] [i_9] [i_10 - 1] [i_9]), (arr_23 [i_10 + 1] [i_9] [i_10 + 3] [i_10]))) + 296904932))));
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            var_36 = (arr_2 [i_10 + 1]);
                            var_37 |= var_5;
                        }
                    }
                }
                var_38 = 1;
            }
            /* vectorizable */
            for (int i_13 = 0; i_13 < 12;i_13 += 1)
            {
                var_39 = 48729;

                for (int i_14 = 1; i_14 < 9;i_14 += 1)
                {
                    var_40 = var_3;
                    var_41 = var_8;
                }
                for (int i_15 = 1; i_15 < 11;i_15 += 1)
                {
                    var_42 = 1681547965;
                    var_43 = var_8;
                    var_44 = -49772;

                    for (int i_16 = 0; i_16 < 12;i_16 += 1)
                    {
                        var_45 |= ((-(arr_22 [i_1] [i_9])));
                        var_46 = (min(var_46, (((!(arr_27 [i_15 + 1] [i_15] [i_15] [i_15 - 1]))))));
                        var_47 = (~var_2);
                        var_48 = ((((var_6 ? (arr_29 [i_1] [i_1] [i_1] [i_1]) : 220)) | (var_6 < 1)));
                        var_49 = (arr_30 [i_13] [i_13] [i_13]);
                    }
                }
                for (int i_17 = 1; i_17 < 11;i_17 += 1)
                {
                    var_50 = (~var_2);
                    var_51 = (arr_38 [i_17 - 1] [i_17 + 1] [i_17]);
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 20;i_18 += 1)
    {
        var_52 = ((16809 > ((-var_5 ? ((-(arr_49 [i_18]))) : (arr_49 [i_18])))));
        var_53 = var_4;
    }
    for (int i_19 = 0; i_19 < 1;i_19 += 1)
    {
        var_54 = 12201853070378898045;
        /* LoopNest 2 */
        for (int i_20 = 0; i_20 < 24;i_20 += 1)
        {
            for (int i_21 = 1; i_21 < 23;i_21 += 1)
            {
                {
                    var_55 = var_0;
                    var_56 = (max(var_56, ((max((((arr_53 [i_19] [i_19] [i_20]) ? -var_4 : (arr_54 [i_20] [i_21 + 1] [i_20]))), (((-(arr_51 [i_20])))))))));
                }
            }
        }
        var_57 &= ((-16 * 16807) ? ((((arr_55 [i_19] [i_19] [i_19] [i_19]) ? var_3 : var_0))) : var_5);
        var_58 = (max((min(1, var_9)), var_9));
    }
    var_59 = var_8;
    var_60 = (~var_1);
    #pragma endscop
}
