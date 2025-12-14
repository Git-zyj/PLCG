/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [i_1] [i_0] = ((arr_3 [i_1] [i_0]) ? -5685819189098270448 : var_4);
            var_11 = (max(var_11, (arr_3 [i_0] [i_1])));
            var_12 = 9007199120523264;

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_13 ^= 1;
                arr_8 [i_0] [i_0] [i_2] [i_0] = var_8;
            }
            arr_9 [i_0] [i_0] = var_0;
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_18 [i_0] [i_0] [i_3] [i_3] [i_5] = (1 ? (max((arr_7 [i_0] [i_4 + 1] [i_4]), (arr_7 [i_0] [i_4 + 1] [i_4]))) : ((max((arr_16 [i_0] [i_4 - 2]), (arr_16 [i_3] [i_4 + 1])))));
                        arr_19 [6] [i_3] [i_4] = max((max(((6 ? 133955584 : 22)), (arr_16 [1] [i_0]))), (-9223372036854775807 - 1));
                        var_14 = (((max(0, 1)) >> var_10));
                        arr_20 [i_0] [i_3] [i_3] [i_0] [i_5] = var_8;
                    }
                }
            }
            arr_21 [i_0] [i_0] [i_3] = (max(258048, var_3));
        }
        arr_22 [i_0] |= ((var_6 < (arr_4 [i_0])));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_25 [0] |= ((var_7 ? 7 : var_5));
        var_15 = arr_24 [i_6] [i_6];
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
        {
            arr_31 [i_8] [11] |= var_8;
            arr_32 [i_7] [i_8] = (var_1 ? ((((arr_29 [i_7] [i_7] [i_7]) > -2627813843589180599))) : -2147483642);
            arr_33 [i_7] = (~-18446744073709551615);
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
        {
            arr_37 [i_9] [i_9] = ((((max((arr_27 [i_9] [i_7]), (arr_27 [i_9] [i_9])))) ? (max((arr_27 [i_7] [i_7]), (arr_27 [i_7] [i_9]))) : (((6662892981099069470 ? var_1 : 133955584)))));
            var_16 ^= var_1;
        }
        /* vectorizable */
        for (int i_10 = 3; i_10 < 12;i_10 += 1)
        {
            arr_42 [i_7] [i_7] [i_7] = (((arr_39 [i_10 - 1]) ? (arr_39 [i_10 - 1]) : (arr_39 [i_10 - 2])));
            arr_43 [i_7] [i_10 + 1] |= var_9;
            var_17 ^= 1577085844;
        }

        for (int i_11 = 3; i_11 < 13;i_11 += 1)
        {

            /* vectorizable */
            for (int i_12 = 2; i_12 < 13;i_12 += 1)
            {
                var_18 = -5172047949925606455;
                var_19 = (max(var_19, (arr_44 [i_11 - 1])));
            }
            arr_48 [i_7] [2] [i_11] = (max(((~(max((arr_36 [1] [1]), 31744)))), (~1)));
        }
        var_20 = (min(var_20, var_6));
        arr_49 [i_7] [i_7] = 10;

        for (int i_13 = 0; i_13 < 14;i_13 += 1)
        {

            for (int i_14 = 0; i_14 < 14;i_14 += 1)
            {
                var_21 = var_10;
                var_22 = (max(var_22, ((max((max((arr_30 [i_7]), (arr_27 [i_7] [i_13]))), (((~(arr_36 [i_14] [i_13])))))))));
            }
            for (int i_15 = 0; i_15 < 14;i_15 += 1)
            {
                var_23 ^= (max((((arr_47 [i_7]) ? -1 : var_6)), ((((arr_26 [i_7] [i_13]) * 0)))));
                var_24 ^= ((var_4 ? (arr_36 [i_13] [i_15]) : 15321219736326271270));

                /* vectorizable */
                for (int i_16 = 1; i_16 < 13;i_16 += 1) /* same iter space */
                {

                    for (int i_17 = 0; i_17 < 14;i_17 += 1) /* same iter space */
                    {
                        arr_62 [9] [i_13] [i_16] [i_13] [i_13] = var_9;
                        var_25 = (max(var_25, -8));
                    }
                    for (int i_18 = 0; i_18 < 14;i_18 += 1) /* same iter space */
                    {
                        arr_65 [0] [i_16] [i_16] [i_15] [i_16] [i_7] [i_7] = 1;
                        var_26 = 9223372036854775807;
                        arr_66 [i_7] [i_13] [i_13] [i_15] [i_7] [i_18] [i_16] = (4611686018410610688 > 1);
                    }
                    for (int i_19 = 0; i_19 < 14;i_19 += 1) /* same iter space */
                    {
                        var_27 = (min(var_27, var_3));
                        arr_70 [i_7] [i_13] [i_13] [i_15] [i_16] [1] [i_19] = 8796093022207;
                        arr_71 [i_16] [i_16] [i_15] [i_16 - 1] [i_16 - 1] [i_16] [i_13] = (arr_24 [i_7] [i_16]);
                    }
                    for (int i_20 = 2; i_20 < 13;i_20 += 1)
                    {
                        arr_74 [i_16] = (arr_67 [i_7] [1] [i_15]);
                        arr_75 [i_7] [8] [i_15] [i_16] [i_20] [2] |= var_0;
                        arr_76 [i_7] [i_7] [i_7] [i_7] [i_16] = ((var_8 ? var_5 : (arr_46 [i_16] [i_20])));
                        arr_77 [3] [i_13] [i_13] [i_13] [i_16] [i_13] = (arr_26 [i_7] [i_7]);
                    }

                    for (int i_21 = 0; i_21 < 14;i_21 += 1) /* same iter space */
                    {
                        arr_80 [i_7] [i_7] [i_16] [i_16] [i_21] = var_7;
                        var_28 = (max(var_28, (((var_8 + 9223372036854775807) >> (((arr_56 [12] [i_15] [i_13] [12]) - 17965690663704527207))))));
                    }
                    for (int i_22 = 0; i_22 < 14;i_22 += 1) /* same iter space */
                    {
                        arr_83 [i_16] [i_13] [i_13] = var_1;
                        var_29 = (max(var_29, (-9223372036854775807 - 1)));
                        arr_84 [i_7] [i_15] [i_16] [i_15] [i_22] [i_15] [i_15] = (var_9 ? (arr_79 [i_7] [i_13] [i_15] [i_16] [i_15]) : 1);
                    }
                    var_30 ^= -27;
                }
                for (int i_23 = 1; i_23 < 13;i_23 += 1) /* same iter space */
                {
                    arr_88 [i_7] [i_13] [i_15] [i_23] = (arr_24 [0] [12]);
                    var_31 ^= (((((((((arr_30 [i_23]) | 0))) ? var_3 : (max(22, 1))))) ? (((max(var_5, var_7)) / (max(1, var_5)))) : (max(-3772496390499836459, (-135727333106859245 ^ -1)))));
                    arr_89 [i_7] = var_7;
                }
                for (int i_24 = 0; i_24 < 14;i_24 += 1)
                {
                    arr_92 [i_7] [i_7] [i_7] [2] [i_15] [i_24] |= var_8;
                    arr_93 [i_24] [i_15] [i_7] [i_24] [i_24] = (((((-3437844021846284735 ? ((((1 || (arr_85 [i_24] [i_15] [i_13]))))) : -1))) || var_0));
                    arr_94 [i_7] [i_13] [i_24] = max((((-4727579157925438075 ? var_9 : 25))), ((max((arr_46 [i_13] [i_15]), (arr_35 [i_13] [i_24])))));
                }
                arr_95 [i_7] [i_13] [i_15] [3] = (max(((((((arr_68 [i_7] [i_13] [0] [i_13] [i_13] [8] [0]) ? 1 : 15805045318178441056)) >= (max(1, (arr_56 [i_7] [i_7] [i_13] [i_15])))))), (max(var_8, 0))));
            }
            var_32 = (min(var_32, (max(-3122626779411353837, (((arr_29 [i_7] [i_13] [i_7]) ? (arr_29 [i_7] [i_7] [i_7]) : (arr_38 [i_13])))))));
            var_33 = (min(var_33, ((((((((((-2147483647 - 1) & (arr_72 [2] [i_7] [i_7] [i_13] [i_13] [i_13]))) + 9223372036854775807)) >> (((arr_87 [i_13] [i_7] [i_7] [i_7]) - 11865096463627429808))))) ? var_3 : (max(((((arr_73 [i_7] [6] [i_7] [i_7] [i_7]) | var_1))), (var_1 / 2733614138507520333)))))));
            arr_96 [i_7] [i_7] [i_13] = (((((~(var_5 ^ var_8)))) ? 27 : ((((arr_68 [i_7] [i_13] [i_7] [i_7] [i_13] [8] [1]) == var_1)))));
            var_34 = (max(var_34, var_3));
        }
    }
    var_35 = 1727114690475008090;
    #pragma endscop
}
