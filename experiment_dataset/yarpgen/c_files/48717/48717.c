/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += var_7;
    var_11 = var_2;
    var_12 = var_9;
    var_13 = -92;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (min(var_9, var_0));
                    var_15 -= ((-3475 ? ((var_6 ? (arr_0 [i_2]) : var_3)) : (arr_4 [i_1] [i_0])));
                    var_16 = ((0 ? (min(119, ((var_6 ? var_7 : 1)))) : (arr_4 [i_1] [i_1])));
                    arr_8 [i_1] [i_2] = 31094;
                }
            }
        }
        var_17 = (max(var_17, (((max(18446744073709551615, (arr_2 [i_0])))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_18 = (9719 ? ((-6255 ? -7678610025035956505 : 120)) : var_6);
            var_19 = 11;
            var_20 *= var_2;
            /* LoopNest 3 */
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        {
                            var_21 = -120;
                            var_22 = (max(var_22, (((0 ? 37633 : 880547967)))));
                            var_23 *= 7678610025035956520;
                        }
                    }
                }
            }
        }
        arr_18 [i_0] [10] = (min((arr_14 [i_0] [10] [i_0] [i_0]), (max(49, ((var_8 ? 6868 : var_2))))));
        arr_19 [i_0] [1] = ((!(((6473 ? 8581687593049048271 : 18)))));
    }
    for (int i_7 = 1; i_7 < 6;i_7 += 1)
    {

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            var_24 = ((+((var_5 ? (arr_12 [i_7] [i_7 + 3]) : (arr_12 [i_7] [i_7 + 4])))));
            var_25 = 15;
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 4; i_10 < 7;i_10 += 1)
            {
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    {
                        var_26 = (((arr_13 [i_7] [i_7]) ? (-7370 - 7388) : ((min(0, (min((-127 - 1), (arr_15 [i_9] [i_9] [i_9] [i_10 + 1] [10]))))))));
                        var_27 = 1;
                    }
                }
            }
        }
        var_28 -= -9922515177723357;
    }
    for (int i_12 = 0; i_12 < 25;i_12 += 1)
    {
        var_29 *= ((((max(var_9, var_6))) ? ((((((arr_35 [i_12] [19]) ? var_6 : (arr_35 [i_12] [i_12])))) & (max(0, (arr_35 [i_12] [i_12]))))) : ((((var_2 >= 0) ? ((max(1, (arr_36 [i_12])))) : (arr_36 [i_12]))))));
        var_30 = (((((var_3 ? -47 : var_9))) & ((((min(var_1, (arr_35 [i_12] [i_12])))) ? ((136 ? var_9 : var_2)) : 1231057896))));
        arr_37 [i_12] = (arr_35 [i_12] [i_12]);
        var_31 = (((var_3 ^ -6889313852363924610) ? var_2 : (min(((var_9 ? 10991624882825765675 : var_5)), var_0))));
        var_32 += -8581687593049048272;
    }
    for (int i_13 = 2; i_13 < 8;i_13 += 1)
    {
        var_33 = var_6;
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 1;i_14 += 1)
        {
            for (int i_15 = 2; i_15 < 8;i_15 += 1)
            {
                for (int i_16 = 2; i_16 < 10;i_16 += 1)
                {
                    {
                        arr_47 [i_13] [i_14] [i_14] [i_15] [i_16] = (max(18, 1));
                        var_34 = (~var_6);
                    }
                }
            }
        }
        var_35 ^= ((8581687593049048271 ? 63 : (((((1 ? -1 : var_2))) ? var_5 : (((arr_1 [i_13]) ^ (arr_3 [i_13 - 1])))))));
        var_36 = 1;
    }
    #pragma endscop
}
