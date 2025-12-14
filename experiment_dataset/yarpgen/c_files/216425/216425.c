/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!(((var_15 ? 164 : (~var_14))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [0] = ((5 && ((min(((-(arr_0 [i_1 - 1] [1]))), (var_14 < var_7))))));
                    var_20 = ((max(205, ((94 ? 107 : 129)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_11 [i_0] [13] = var_14;

            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                arr_16 [i_0] = (((var_2 | var_16) || (((86 ? 100 : 4)))));
                arr_17 [i_4] = (min((max(244, ((255 ? var_13 : var_2)))), (((((var_8 ? var_4 : 139))) ? ((var_14 ? 64 : 0)) : ((var_6 ? 79 : (arr_8 [i_0] [i_0] [i_0])))))));

                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    arr_20 [i_5] [i_4] [i_3] [i_5] = ((46 ? ((min((arr_9 [i_5 - 4] [i_5 + 4]), var_15))) : ((min(242, 95)))));
                    var_21 ^= ((((!(arr_4 [i_5] [i_5 - 1] [i_5] [i_5])))));
                    arr_21 [i_5] [i_5] = (55 < 32);
                }
                var_22 += (min((max(var_12, (arr_1 [i_0]))), (((var_7 < (arr_10 [i_0] [i_4]))))));
            }
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_23 = 24;
                var_24 ^= ((((((((16 ? var_14 : (arr_1 [i_0])))) ? (arr_8 [i_0] [i_3] [i_6]) : ((3 ? 200 : var_12))))) ? 163 : (arr_9 [i_3] [i_3])));
                arr_24 [i_6] [i_3] [i_0] = ((-var_1 ? (arr_15 [i_0] [i_3] [i_6]) : (min((arr_22 [i_0] [i_0] [i_6]), ((142 ? 29 : (arr_23 [i_0] [i_0] [i_0])))))));
                var_25 -= ((((var_12 + (arr_13 [i_3]))) / ((var_12 ? 31 : (arr_4 [i_0] [i_3] [i_0] [i_6])))));
                var_26 -= (((arr_9 [i_6] [i_6]) ? (((var_10 || (((var_6 ? (arr_15 [i_0] [i_3] [i_6]) : (arr_22 [i_0] [i_3] [i_6]))))))) : (max(((var_17 ? var_11 : 216)), (arr_22 [i_0] [i_0] [i_0])))));
            }
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_4;
                    var_27 = (min(var_27, ((((~250) || 180)))));
                    arr_30 [i_0] [i_3] [i_7] [i_7] = (max(238, ((56 ? 218 : 248))));
                    arr_31 [i_0] [i_0] [i_0] [i_8] = (((((~(((arr_6 [i_0] [i_3] [i_7]) << (var_18 - 187)))))) ? var_10 : ((max((arr_28 [i_8] [i_3] [i_3] [i_0]), 176)))));
                    arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((var_7 ? (arr_13 [i_8]) : (arr_13 [i_7]))) * ((min((arr_13 [i_0]), 102)))));
                }
                for (int i_9 = 0; i_9 < 21;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
                    {
                        arr_37 [i_0] [i_7] [i_9] [i_9] = ((+(((arr_10 [i_0] [i_3]) ? (arr_10 [i_3] [i_7]) : (arr_10 [i_0] [i_0])))));
                        var_28 = ((~(arr_18 [i_0])));
                        var_29 |= (((((max(var_0, var_16)))) == ((((min(49, (arr_2 [i_3] [i_10])))) * (24 == 5)))));
                    }
                    for (int i_11 = 0; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = 254;
                        var_30 = ((~((min(24, (arr_27 [i_0] [i_3] [i_7] [i_9] [i_11]))))));
                        var_31 = ((((min((arr_23 [i_0] [i_0] [i_0]), var_14))) <= ((~(arr_35 [i_0] [i_3] [i_7] [i_0])))));
                    }
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        arr_47 [i_0] |= 191;
                        var_32 = (((var_11 < var_9) ? 217 : ((-(11 - 245)))));
                        arr_48 [i_0] = ((~(((min((arr_43 [i_0] [i_0] [i_0] [i_0] [17]), (arr_6 [i_9] [i_3] [i_3])))))));
                    }
                    var_33 = ((((((arr_15 [10] [i_7] [i_9]) ? (arr_15 [i_9] [i_3] [i_0]) : 117))) ? ((max(var_18, var_10))) : ((44 ? 1 : var_18))));
                }
                arr_49 [i_0] [i_0] [i_0] = ((((((arr_34 [18] [i_3] [i_3] [i_3] [i_0] [i_0]) ? ((((arr_23 [i_0] [i_0] [i_0]) || (arr_35 [i_0] [i_0] [i_3] [18])))) : 133))) || 183));
            }
            var_34 |= 84;
        }
    }
    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            var_35 = (((((arr_1 [i_14]) != var_6)) ? (237 + 179) : 67));
            var_36 += (arr_5 [i_13]);
        }
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            arr_58 [0] [10] = ((((min((248 - 247), ((29 ? 192 : 34))))) ? ((((45 >> (127 - 111))))) : ((~((var_3 ? var_3 : var_1))))));
            var_37 &= ((((max((arr_52 [i_15] [5]), 35))) ? (arr_52 [i_13] [i_13]) : (~180)));
            arr_59 [i_13] [10] = (~245);
        }
        var_38 ^= ((-(arr_43 [i_13] [i_13] [i_13] [i_13] [i_13])));
        arr_60 [i_13] = ((((min((arr_36 [i_13] [i_13] [i_13] [18] [i_13] [i_13] [i_13]), (arr_40 [i_13] [i_13] [i_13] [i_13] [i_13])))) ? ((var_7 * (arr_26 [i_13] [i_13] [i_13] [i_13]))) : ((((max(var_16, var_7))) ? ((min(var_5, 176))) : (arr_56 [i_13] [i_13])))));
    }
    #pragma endscop
}
