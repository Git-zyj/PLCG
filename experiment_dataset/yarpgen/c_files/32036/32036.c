/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 / (max(2147483647, 1))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = 4148591198818410703;
        var_14 = (arr_0 [i_0] [i_0]);
        var_15 = 1753936307;
        var_16 = (min(var_16, (((-9223372036854775807 - 1) <= 4148591198818410710))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((~((var_0 | (arr_4 [i_1])))));
        var_17 = (min(var_17, (((((((arr_0 [i_1] [i_1]) / (arr_4 [i_1])))) * (max(-1493489187828967224, 0)))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = ((((14488191221890137198 ? 4148591198818410685 : 234)) >> (15851219994936763907 - 15851219994936763884)));
        arr_11 [i_2] [i_2] = var_0;

        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_18 = (((((arr_6 [i_3] [i_4]) & ((~(arr_1 [i_2] [i_3 + 1]))))) * (max(((0 ? var_3 : var_5)), (arr_13 [i_2] [i_2])))));
                var_19 = (((min((((arr_6 [i_4] [i_3]) | var_7)), (((var_9 <= (arr_13 [i_3] [i_2])))))) % 1));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    arr_19 [i_2] [i_3] [i_2] [i_3] = (((arr_7 [i_2]) ? (!1985207722) : var_10));
                    arr_20 [i_4] [i_3] = (arr_12 [i_3 - 2] [i_3] [i_3 - 2]);
                }
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    arr_23 [i_2] [i_4] [i_6] [i_3] [i_3] = (((((2797 ? (arr_0 [i_2] [i_3 - 2]) : (arr_0 [i_2] [i_3 - 2])))) ^ (min(1, 7912245094426709996))));
                    var_20 = (min(((1 ? (arr_1 [i_2] [i_3 - 2]) : (arr_1 [i_4] [i_3 - 2]))), (max(9223372036852678656, (arr_1 [i_2] [i_3 - 2])))));
                    arr_24 [i_3] [i_4] [i_3] = (max(var_9, 96));
                }
            }

            /* vectorizable */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_21 = (min(var_21, 4148591198818410685));
                arr_27 [i_3] = ((((var_3 ? 176839648 : 15851219994936763889)) - ((var_3 ? (arr_8 [i_2] [i_7]) : (arr_1 [i_2] [i_3])))));
            }
            arr_28 [i_3] = ((~(!var_5)));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            arr_32 [i_2] = ((((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2])))) ? ((max(1656008986823722604, -6848477466224043872))) : (~var_3)));
            var_22 = var_4;
            var_23 = (max((arr_17 [i_2] [i_8] [i_2] [i_8]), ((((arr_17 [i_2] [i_8] [i_2] [i_2]) || 255)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            var_24 = (((-935701735 < 4294967271) ? (((var_0 ? var_5 : (arr_31 [i_2] [i_2])))) : 15851219994936763907));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    {
                        var_25 = (min(var_25, ((((arr_3 [i_2] [i_10]) ? (var_5 / -2113124861) : (1656008986823722615 ^ 2595524078772787702))))));
                        arr_43 [i_10] [i_10] [i_10] [i_10] = ((~(arr_26 [i_11] [i_2] [i_2])));
                        arr_44 [i_10] [i_9] [i_9] [i_9] = ((var_1 ? 15 : (arr_1 [i_2] [i_9])));

                        for (int i_12 = 0; i_12 < 12;i_12 += 1)
                        {
                            var_26 = ((~(arr_26 [i_9] [i_2] [i_12])));
                            arr_49 [i_2] [i_9] [i_9] [i_10] [i_11] [i_10] = ((211 > (arr_47 [i_2] [i_2] [i_10] [i_10] [i_11] [i_10] [i_2])));
                            var_27 = (min(var_27, 11970520));
                            arr_50 [i_11] [i_10] = (((~var_0) < ((-115701194 ? var_1 : (arr_37 [i_2] [i_9] [i_10] [i_11])))));
                        }
                    }
                }
            }
            arr_51 [i_2] = (((arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [4] [i_9]) ? (arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [4] [i_2]) : (arr_9 [i_9])));
        }
    }
    #pragma endscop
}
