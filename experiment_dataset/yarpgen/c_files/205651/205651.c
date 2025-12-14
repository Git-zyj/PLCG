/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 = 16268862415397150918;
            var_19 = (((((!(((~(arr_1 [1]))))))) >> (((arr_3 [i_0]) ^ (((!(arr_3 [i_1]))))))));
            var_20 = (!16268862415397150943);
        }
        /* vectorizable */
        for (int i_2 = 2; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_21 &= ((var_11 ? (arr_3 [i_2 - 2]) : (arr_3 [i_2])));
            var_22 = ((~(arr_3 [i_2])));
            var_23 = 1;
            var_24 = 11935158086649390676;

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        {
                            var_25 = ((((((~(arr_8 [1] [7] [i_0] [i_0]))) + 2147483647)) << ((((~(arr_9 [10] [3] [4]))) - 8335694581728128473))));
                            var_26 = (2114238570 ? var_9 : (arr_14 [i_5] [i_5] [i_5 - 3] [1] [5] [i_5]));
                            var_27 = var_14;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 9;i_7 += 1)
                    {
                        {
                            var_28 = var_13;
                            var_29 = 16268862415397150932;
                            var_30 -= 6511585987060160961;
                            var_31 = (((~(arr_16 [i_0] [1] [1] [2] [2] [1]))));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_32 = 16268862415397150932;
            var_33 = var_12;
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {
                    {
                        var_34 = (max(var_34, (0 ^ var_5)));
                        arr_30 [i_0] [7] [i_0] [i_0] = 8847653279127076604;
                        var_35 = (1 <= 9223372036854775807);
                    }
                }
            }
            var_36 = (((var_3 + 2147483647) << (((-5090 + 5114) - 23))));
        }
        var_37 = (min(var_37, 65535));
    }
    for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        var_38 = 2114238568;
                        var_39 = (max((!1498240526), 65534));
                        var_40 = (max((((108 & (1498240513 | var_7)))), var_15));
                        var_41 += 65535;

                        for (int i_15 = 2; i_15 < 11;i_15 += 1)
                        {
                            var_42 = 1203526130;
                            var_43 = (max((min(2177881658312400683, -1950666902)), (var_15 | -30631)));
                            var_44 = var_7;
                            var_45 = (i_11 % 2 == zero) ? (((var_2 << (((min((((6511585987060160922 ? (arr_11 [i_15] [i_11]) : 0))), 6511585987060160927)) - 108))))) : (((var_2 << (((((min((((6511585987060160922 ? (arr_11 [i_15] [i_11]) : 0))), 6511585987060160927)) - 108)) - 104)))));
                        }
                        for (int i_16 = 1; i_16 < 10;i_16 += 1)
                        {
                            var_46 = (((((((~(-127 - 1))) != (max(6511585987060160942, var_16)))))));
                            var_47 = var_5;
                            var_48 = (((6511585987060160922 ? -1203526131 : 11935158086649390692)));
                        }
                        for (int i_17 = 2; i_17 < 8;i_17 += 1)
                        {
                            var_49 = (min(var_49, ((max(((~(arr_2 [i_11] [i_11] [3]))), var_11)))));
                            var_50 = (((arr_44 [i_17] [11] [5] [i_17] [5]) ? (var_15 | -32740) : (var_17 & var_2)));
                        }
                    }
                }
            }
        }
        var_51 = (max((max(((1 ? 16728044312315756382 : 2177881658312400690)), var_10)), ((((((arr_37 [i_11] [9] [i_11]) ? 38155 : 100)) | 1)))));
    }
    var_52 = 3;
    #pragma endscop
}
