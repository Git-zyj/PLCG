/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239886
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0 + 1] = ((((-(~44790)))) ? var_2 : (~var_4));
                    var_11 = (((-127 - 1) ? -121 : -16612733));
                    var_12 = var_10;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_13 = ((arr_19 [i_3] [i_4 - 1] [i_6] [i_6] [i_4 - 1] [i_3]) ? (arr_19 [i_4] [i_4 + 2] [i_5] [i_6] [i_6] [i_5]) : (arr_19 [i_3] [i_4 + 3] [i_5] [i_6] [i_6] [i_6]));

                        for (int i_7 = 4; i_7 < 19;i_7 += 1)
                        {
                            var_14 = var_9;
                            arr_24 [3] = ((241328867 ? (127 * 127) : (arr_22 [i_3] [i_4] [i_5])));
                            arr_25 [i_3] [i_4] [19] [i_5] [i_4] [i_6] [i_7 - 3] = (!123);
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            var_15 -= ((119 ? (-1499704856 || 4611686018427387648) : -23186));
                            var_16 = (((arr_17 [i_4 + 1] [i_4]) ? (arr_17 [i_4 + 1] [9]) : (arr_22 [i_4 + 1] [i_4 + 1] [i_5])));
                            var_17 += 123;
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                        {
                            var_18 -= var_8;
                            var_19 *= (!(arr_14 [i_3] [i_4] [i_5]));
                            arr_32 [1] [1] [i_5] [i_6] [i_4] [i_4 + 2] |= (((arr_23 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4 + 3]) != (var_1 >= 127)));
                            var_20 = 4611686018427387650;
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        var_21 = (max(var_21, -4611686018427387650));
                        arr_35 [i_3] [i_4] [3] [i_10] |= (~var_1);
                    }
                    /* vectorizable */
                    for (int i_11 = 2; i_11 < 19;i_11 += 1)
                    {

                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_22 += var_2;
                            arr_43 [i_12] [i_11] [i_5] [i_3] = (((arr_38 [i_4] [i_4 + 2] [i_11 - 2] [i_12]) ? var_6 : var_9));
                            var_23 = (max(var_23, (((~(!32743))))));
                            arr_44 [1] = 106;
                        }
                        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                        {
                            var_24 -= 4424215941130041685;
                            var_25 = (((arr_41 [i_13] [i_13] [i_11 + 1] [i_5] [i_3] [i_3] [i_3]) ? (((((arr_12 [i_11]) > -1912914855)))) : 815365500));
                            arr_49 [i_3] [i_13] [i_13] [i_3] = (arr_10 [i_13] [i_4]);
                        }
                        for (int i_14 = 0; i_14 < 1;i_14 += 1) /* same iter space */
                        {
                            arr_54 [i_3] [i_3] [i_5] [12] [i_14] = (((arr_11 [16] [i_11 - 1]) ? var_4 : 4611686018427387650));
                            var_26 = var_2;
                            var_27 ^= ((((((arr_39 [i_3] [1] [i_5]) ? 4424215941130041685 : 122))) ? var_9 : (arr_50 [i_11 - 2] [i_11 + 1] [i_11 + 1] [i_4 + 3] [i_4])));
                        }
                        var_28 &= (arr_47 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11]);
                        var_29 = ((-32751 ? ((106 ? -4611686018427387665 : -4611686018427387666)) : -125));
                        arr_55 [i_3] [i_3] [i_3] [i_3] |= var_8;
                        var_30 = var_3;
                    }
                    /* vectorizable */
                    for (int i_15 = 3; i_15 < 19;i_15 += 1)
                    {
                        arr_59 [i_5] [5] = 1;
                        var_31 ^= var_0;
                        arr_60 [17] [11] [11] [i_4 + 2] [11] = (~2080374784);
                    }
                    var_32 = (min(var_32, (1 <= 1444649002967011476)));
                    var_33 = (max(var_33, ((((arr_57 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4]) != (((((max((arr_38 [i_3] [i_3] [i_3] [i_3]), -123))) ? -21 : (var_0 || 0)))))))));
                }
            }
        }
    }
    #pragma endscop
}
