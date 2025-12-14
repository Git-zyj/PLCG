/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (var_13 && var_12)));

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_3 [0] [i_0] = (arr_2 [i_0]);
        var_17 *= (arr_1 [i_0] [i_0 + 1]);
        var_18 = (max((((!var_15) ? ((((var_3 != (arr_2 [5]))))) : var_10)), (arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_9 [i_1] [5] = ((((((!-2022760827) / (max(var_12, (arr_8 [i_1] [i_2])))))) % 14122233127023387508));
            arr_10 [12] [16] = (6939020146872133116 <= 30);
            var_19 = ((((((min(var_15, var_0)) ^ 6144))) ? ((5 ? var_4 : (arr_5 [i_1 - 1]))) : (((arr_5 [i_1 + 1]) % ((var_12 ? 1 : var_8))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = (((max(((4294967275 ? 9223372036854775799 : 964765879)), (arr_12 [i_1 + 2]))) + ((((var_11 ? var_1 : var_9)) - ((max(var_6, 4294967291)))))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        var_21 = (min(var_21, ((((((max(var_8, (arr_11 [i_4]))) - var_8)) + (((9223372036854775799 - ((var_6 ? var_0 : (arr_17 [9] [14] [i_4] [i_5] [i_5])))))))))));
                        arr_19 [i_1] [i_3] [i_3] [i_5] = -1068376836792633205;
                        var_22 = (arr_15 [i_1] [i_1] [i_1 + 3] [i_1 + 3]);
                    }
                }
            }
            var_23 ^= (arr_4 [i_1]);
        }
        var_24 = (!var_9);
        var_25 = (-71233460 - 1);
        var_26 = ((min(((var_9 ? (arr_4 [i_1]) : var_12)), (arr_13 [i_1 + 3] [i_1 - 1] [i_1 + 1] [i_1 + 3]))) - ((((-var_1 == (~var_10))))));
    }

    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        var_27 = (max(var_27, (min(1542966756, ((((max(var_15, var_9))) ? ((((!(arr_4 [i_6]))))) : (max(var_3, 436))))))));
        arr_22 [i_6] = (arr_18 [i_6 + 2] [15] [i_6 + 2] [8] [i_6]);
    }
    for (int i_7 = 2; i_7 < 17;i_7 += 1)
    {
        var_28 = (arr_24 [i_7] [i_7]);
        var_29 = (min(((((((var_9 ? var_14 : 1))) > (min(var_7, var_3))))), (arr_17 [i_7] [i_7 + 2] [i_7] [i_7] [i_7])));
        var_30 = var_3;

        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            var_31 &= (max(2022760810, 9223372036854775807));
            arr_28 [i_8] [i_8] [i_8] = (((((var_2 ? (var_14 & var_15) : (1056693719 & -25270)))) ? (min(var_5, 0)) : ((((var_2 <= (((232 >> (var_0 - 4235096393))))))))));
        }
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_35 [9] [i_9] [i_7] [6] = (((arr_26 [i_7 - 1] [i_7 - 2]) < (((23207 ? (arr_32 [i_10]) : (min(var_12, (arr_23 [i_11]))))))));
                        var_32 = (min((min((arr_11 [i_7 + 1]), var_11)), (((arr_11 [i_7 - 1]) ^ 9223372036854775807))));
                    }
                }
            }
            arr_36 [i_7] |= (max((arr_5 [i_7]), (max(-var_2, (min(4449104449194444670, var_7))))));
        }
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            var_33 = (max((min(var_7, (arr_17 [i_7 + 1] [i_7 - 1] [i_7] [i_7 - 2] [i_7]))), (((7680 ? -2896164448141949197 : 96)))));
            var_34 = (max(var_34, ((var_15 ? (((min(var_12, var_4)))) : (arr_23 [i_7 + 2])))));
        }
    }
    #pragma endscop
}
