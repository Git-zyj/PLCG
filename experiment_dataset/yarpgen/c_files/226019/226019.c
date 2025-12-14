/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        var_12 = (arr_0 [i_0] [i_0]);
                        var_13 = (((((-1 ? 7511745494042686638 : 9635074381506513444))) && var_0));
                        arr_9 [4] [i_2] [4] [i_1] [4] |= ((((((arr_7 [i_0] [2] [2] [i_1]) ? (arr_6 [i_0] [i_1] [i_2] [i_3]) : var_10))) ? -76 : var_5));
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = (10385 == 14074880961132486402);

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_14 [i_0] [i_0] [i_4] = var_3;
            var_14 = (arr_11 [i_0] [i_4]);
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_15 = (arr_2 [i_0] [0]);
            var_16 = (max(var_16, (((((((arr_17 [8]) ? var_0 : (arr_17 [i_0])))) ? (((arr_6 [i_0] [2] [i_5] [i_0]) ? var_4 : 65532)) : (10381 % var_7))))));
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            arr_21 [i_0] = (((arr_8 [i_0]) * (arr_8 [i_0])));
            arr_22 [i_0] [i_0] = ((14074880961132486387 && 4371863112577065208) ? ((var_6 ? (arr_20 [i_6]) : 8388608)) : var_5);
            var_17 = (((arr_8 [i_0]) ? -94 : 374983337));
        }
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        arr_26 [i_7] [i_7] = ((var_10 && (((((var_6 || (arr_25 [i_7] [i_7]))) ? (((70 ? var_1 : var_6))) : ((var_0 ? var_2 : var_10)))))));
        var_18 *= ((((((arr_25 [i_7] [i_7]) ? 1 : var_9))) ? ((var_11 ? (arr_23 [i_7]) : (arr_23 [i_7]))) : (((arr_25 [i_7] [i_7]) ? var_1 : (arr_23 [i_7])))));
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_29 [i_8] = ((1 ? 1 : 7128121635653513250));
        var_19 = var_10;
        var_20 = (arr_27 [i_8]);
        var_21 = ((((((arr_28 [i_8] [i_8]) ? 64512 : var_11))) ? ((var_2 ? (max(var_10, var_11)) : var_10)) : ((((((arr_27 [i_8]) ? var_1 : (arr_27 [8])))) ? var_11 : (arr_28 [i_8] [i_8])))));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        var_22 = (max(((var_8 ? 25916 : (arr_19 [i_9] [i_9] [i_9]))), (-630647529 || 4)));
        var_23 = (((((((var_10 ? (arr_11 [i_9] [0]) : var_1))) ? ((58954 ? 16379518911369240584 : 1)) : (((713672802 ? 65535 : 630647518))))) >> ((((arr_0 [i_9] [8]) > var_6)))));
    }
    var_24 = var_6;

    for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
    {
        var_25 = (max(var_25, (((2405 ? 1 : 630647538)))));
        var_26 = var_11;
        var_27 = (max(var_27, ((min(((((min(1803896197, var_3)) ^ ((var_8 ? 1 : var_1))))), ((((((arr_23 [i_10]) ? 1 : 80))) ? (((23 & (arr_32 [i_10])))) : ((1 ? var_7 : (arr_24 [15] [i_10]))))))))));
        var_28 = (max(((127 ? 21 : 0)), (arr_28 [i_10] [i_10])));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {

        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            var_29 = (min(var_29, ((min(59, 32768)))));
            var_30 = (min(var_30, ((max((max(100, (arr_32 [i_12 + 2]))), (-93 && 4294967295))))));
        }
        for (int i_13 = 0; i_13 < 22;i_13 += 1)
        {
            /* LoopNest 3 */
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                for (int i_15 = 0; i_15 < 22;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 22;i_16 += 1)
                    {
                        {
                            var_31 *= (min(((9223372036854775799 ? var_4 : var_0)), (((arr_40 [i_16] [i_15] [1] [1]) ? (arr_42 [i_11] [19] [6] [i_15]) : 1631177490))));
                            arr_47 [i_11] [i_11] [i_11] [i_11] [i_11] = (max((((var_1 - var_2) | (((arr_37 [i_11] [i_13] [i_16]) ? var_9 : var_4)))), (((((min(var_11, 1))) ? (9223372036854775774 ^ 1) : (((min(56140, 60837)))))))));
                            var_32 = (max(var_32, (var_11 - var_3)));
                        }
                    }
                }
            }
            var_33 = (((((arr_34 [i_11] [i_13]) ? 1 : (arr_34 [i_11] [i_13])))) ? ((var_3 ? var_0 : (arr_40 [8] [i_13] [i_13] [i_13]))) : (((arr_34 [i_11] [i_13]) ? (arr_34 [i_11] [i_11]) : (arr_34 [i_11] [i_13]))));
        }
        var_34 = (min(var_34, (((0 ? -105 : 1886748680)))));
    }
    #pragma endscop
}
