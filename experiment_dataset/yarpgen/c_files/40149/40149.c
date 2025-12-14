/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 16;i_3 += 1)
                {
                    {
                        var_10 = ((!((!((((arr_1 [i_0 + 1] [i_0 + 1]) % 15805395013272254544)))))));
                        arr_10 [i_0 - 1] [i_1] [i_2] [i_3] = ((15805395013272254545 & (max(var_4, (((arr_0 [1]) ? var_6 : 981821271))))));
                    }
                }
            }
            var_11 = (arr_4 [i_0 + 1] [i_0 + 1]);
            arr_11 [i_0] [i_1] = (((((-(arr_9 [i_0] [i_0 - 1] [i_0 + 1] [10])))) < (min(9, 2641349060437297068))));
            var_12 = (~235878524);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_13 |= -81;
            arr_15 [i_4] = (min(67108863, 2641349060437297065));
            var_14 = (arr_5 [16] [i_0]);
        }
        var_15 ^= ((((var_5 || ((!(arr_9 [i_0] [i_0] [i_0 + 1] [i_0 - 1]))))) ? (min((arr_8 [i_0] [i_0] [1] [16]), var_2)) : (max((((arr_14 [13] [i_0]) ? var_4 : (arr_5 [i_0] [i_0 - 1]))), (arr_4 [i_0 - 1] [i_0 + 1])))));
        arr_16 [i_0 - 1] [i_0] = 1;
        var_16 = 104;
    }
    var_17 = var_9;
    var_18 = ((2641349060437297085 ? var_3 : (((var_1 <= (1856448225 < 2641349060437297078))))));

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_19 = (max(var_19, ((((arr_18 [i_5]) < (((arr_17 [i_5]) ? var_1 : (arr_19 [13]))))))));
        var_20 = (min(var_20, 15805395013272254549));
        var_21 = (arr_17 [i_5]);

        for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
        {
            var_22 += ((((81 || (arr_19 [i_6]))) ? var_5 : var_4));
            var_23 = (arr_17 [i_5]);

            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                var_24 = (((arr_17 [i_5]) ? 2641349060437297065 : ((((arr_21 [i_5]) | (arr_20 [i_5] [i_5] [i_5]))))));
                arr_26 [i_5] [i_5] [i_5] = ((390509963015640126 ? (((var_1 ? (arr_22 [1] [i_5]) : (arr_22 [16] [i_6])))) : ((var_1 ? (arr_18 [4]) : (arr_19 [i_5])))));
            }
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
        {

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                var_25 = (((arr_22 [i_5] [i_5]) >> (arr_18 [i_5])));
                var_26 = var_6;
                var_27 = (min(var_27, 917043037));
            }
            var_28 = ((((((arr_17 [i_5]) | (arr_18 [i_5])))) ? var_7 : 151825288987814245));
            var_29 = (((((2641349060437297072 ? (arr_27 [i_5] [i_8] [i_8]) : (arr_31 [i_8] [i_8] [i_8] [i_8])))) < (arr_32 [1] [1] [i_5] [i_8])));
            var_30 = -1;
            var_31 = (((((arr_23 [i_5]) ? (arr_19 [i_5]) : (arr_32 [i_8] [i_8] [5] [i_8]))) * 0));
        }
        for (int i_10 = 1; i_10 < 1;i_10 += 1)
        {
            arr_35 [4] = var_9;
            var_32 = (2641349060437297053 % 151825288987814245);
            arr_36 [i_5] [i_10 - 1] = 255;
            var_33 = (arr_17 [i_5]);
        }
        for (int i_11 = 1; i_11 < 20;i_11 += 1)
        {
            var_34 = (max(var_34, 3730527476));
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 1; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 4; i_14 < 19;i_14 += 1)
                    {
                        {
                            var_35 = (~1);
                            var_36 = ((-((-(arr_24 [17])))));
                            arr_48 [i_12] = (arr_37 [i_5] [i_11 + 1] [i_5]);
                            var_37 = arr_23 [i_11];
                        }
                    }
                }
            }
            var_38 = (arr_46 [i_5] [i_11] [i_11] [i_11] [i_5]);
        }
        var_39 *= (arr_30 [i_5] [i_5]);
    }
    for (int i_15 = 0; i_15 < 12;i_15 += 1)
    {
        arr_51 [i_15] = (65535 ? (max(2267443588, ((((arr_28 [i_15] [i_15] [i_15]) ? var_6 : (arr_29 [i_15] [i_15] [i_15])))))) : (((-(124 || 1749620371)))));
        var_40 = ((~(arr_44 [i_15] [i_15] [i_15] [13] [i_15] [i_15])));
        var_41 = var_1;
        var_42 = (((((~((max(65527, 1)))))) / ((-(arr_38 [i_15] [i_15])))));
    }
    #pragma endscop
}
