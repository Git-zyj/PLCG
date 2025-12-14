/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                arr_8 [i_0] [i_1] = (((var_5 ? 1399433264 : var_13)));

                for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
                {

                    for (int i_4 = 4; i_4 < 15;i_4 += 1)
                    {
                        var_17 = arr_3 [i_3];
                        var_18 = var_8;
                    }
                    arr_13 [i_0] [i_0] = 8627123580576153766;
                }
                for (int i_5 = 3; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_19 = (((arr_0 [i_1]) ? (~9223372036854775807) : ((((arr_10 [i_0 + 2] [i_1] [i_1] [i_2] [i_5]) ? (arr_6 [i_0]) : (arr_16 [i_5] [i_0] [i_2] [i_1] [i_0] [i_0]))))));
                    var_20 = (arr_3 [i_1 - 1]);
                }
                arr_17 [i_0] [i_1] [i_0] [i_1] = 1968924592;
                arr_18 [i_0] = (arr_11 [i_0] [i_0 - 1] [i_1] [i_1] [i_1 - 3]);
                var_21 = (min(var_21, ((((!127) ? ((var_16 ? var_15 : -1968924610)) : (((arr_15 [i_2] [i_2] [i_2] [i_1] [i_0]) ? var_4 : 1968924595)))))));
            }
            var_22 ^= var_6;
            arr_19 [i_0] [i_1] [i_0] = ((+(((arr_5 [i_0] [i_0]) ? 44977 : 4294967295))));
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 15;i_8 += 1)
                {
                    {
                        var_23 = (arr_24 [i_0] [i_6] [i_0] [i_6]);
                        var_24 = ((((((min(var_9, (arr_9 [i_0] [i_7] [i_6] [i_0])))) >= (((arr_4 [i_0] [i_7]) ? -32758 : -1604453707475040686)))) ? (min(-1968924606, var_13)) : (arr_27 [i_0] [i_6] [i_7] [i_8] [i_8] [i_8])));
                        arr_29 [i_0] [i_6] [i_7 + 1] [i_8 + 2] = (min((((arr_21 [i_7 + 1]) ? (((~(arr_22 [i_0])))) : (arr_3 [i_6]))), ((((arr_24 [i_0] [i_6] [i_7] [i_8]) ? (arr_21 [i_0]) : (~45008))))));
                        var_25 = ((((1968924609 ? (arr_1 [i_0]) : ((33152 ? var_0 : 14466543014130717284)))) % (((~(arr_23 [i_0 + 1] [i_0] [i_7]))))));
                    }
                }
            }

            /* vectorizable */
            for (int i_9 = 0; i_9 < 17;i_9 += 1) /* same iter space */
            {
                var_26 = (min(var_26, ((20544 + (arr_1 [i_6])))));

                for (int i_10 = 0; i_10 < 17;i_10 += 1)
                {
                    var_27 = -2109328846437782730;
                    var_28 = (max(var_28, var_7));
                    var_29 = 1146022626230968976;
                }
                var_30 = ((((arr_3 [i_6]) - 20)));
                var_31 = (min(var_31, var_4));
            }
            for (int i_11 = 0; i_11 < 17;i_11 += 1) /* same iter space */
            {
                var_32 -= ((-(min((((1604453707475040682 ? 44977 : 1968924595))), (arr_37 [i_6] [i_6] [i_11])))));
                var_33 = ((((((arr_37 [i_0] [i_6] [i_6]) ? (arr_14 [i_0] [i_6]) : (((arr_4 [i_0] [i_6]) ? var_10 : (arr_4 [i_6] [i_0])))))) - (arr_15 [i_0 + 2] [i_6] [i_11] [i_6] [i_6])));
                arr_38 [i_0] [i_6] = ((~((~((~(arr_14 [i_11] [i_6])))))));
            }
            var_34 = var_12;
            var_35 = ((((max(var_5, (max((arr_12 [i_6] [i_0] [i_0]), 16125))))) ? ((max((arr_23 [i_0 + 2] [i_0] [i_0]), (arr_23 [i_0 + 2] [i_0] [i_0])))) : (((arr_22 [i_6]) ? var_1 : ((max(var_7, -32765)))))));
        }
        var_36 = var_16;
    }
    for (int i_12 = 0; i_12 < 1;i_12 += 1)
    {
        var_37 = (arr_0 [i_12]);
        arr_41 [i_12] |= 4294967292;
    }
    for (int i_13 = 4; i_13 < 13;i_13 += 1)
    {
        arr_44 [i_13] |= 32767;
        arr_45 [i_13] [i_13] = (arr_4 [i_13] [i_13]);
        var_38 = (min(var_38, var_6));
    }
    var_39 = var_7;
    var_40 = (min((((((max(var_8, 1604453707475040705))) ? (((-10 ? 32767 : -16128))) : var_9))), (min(((var_10 ? 1968924595 : var_2)), 44977))));
    #pragma endscop
}
