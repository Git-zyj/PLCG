/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35135
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_19 = ((-(arr_2 [i_0] [i_0])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] = (((var_13 | (arr_0 [i_0] [i_1]))));
                            arr_14 [i_0] [i_0] [i_0] = (((arr_7 [i_2] [i_3 - 1]) ? (arr_11 [i_1]) : (arr_2 [i_0] [i_0])));
                        }
                    }
                }
            }
            arr_15 [i_0] = (arr_1 [i_0]);
        }
        var_20 = 255;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 11;i_5 += 1)
    {
        var_21 = (((((22359 ? 34359738367 : var_15))) ? ((33634 ? 30139 : (arr_17 [i_5 - 3]))) : 4589957900899519513));
        arr_20 [i_5] = (~4589957900899519522);
    }
    for (int i_6 = 3; i_6 < 7;i_6 += 1)
    {
        var_22 -= (max(-var_6, (((-(arr_23 [i_6 - 2] [i_6 + 4]))))));
        var_23 = (min(var_9, (max(8370297302909297642, (max(var_15, var_4))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                {
                    var_24 = (max((~31967), (((157 || 4589957900899519531) ? (max(var_6, (arr_3 [i_6] [i_6] [i_8]))) : ((max((arr_25 [i_7] [i_7]), var_5)))))));

                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        arr_34 [i_9] = (~16128);

                        for (int i_10 = 0; i_10 < 11;i_10 += 1) /* same iter space */
                        {
                            arr_37 [i_6 - 2] [i_7] [i_9] [i_9] [i_9] [i_9] [i_6 - 2] = (min((max((max(var_10, (arr_28 [i_7] [i_7] [i_8]))), (arr_28 [i_6 - 1] [i_6 - 1] [i_6 + 2]))), (arr_29 [i_6 - 1] [i_6 - 1] [i_8])));
                            var_25 = ((((65535 > (arr_5 [i_6 + 4] [i_6 + 3] [i_6 + 4]))) ? 1 : ((((min(59483, 50987))) & (65535 | 5025)))));
                            var_26 = ((max((max(8370297302909297642, -23991)), (max(61440, 35184372088824)))));
                        }
                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_27 = ((((max((arr_12 [i_8] [i_6 + 1] [i_11] [i_6 + 1] [i_6 + 1]), (arr_12 [i_6 + 2] [i_6 + 1] [i_8] [i_6 + 2] [i_7])))) ? (arr_1 [i_9]) : (((max(var_4, 9242)) | (((max(3, 1))))))));
                            var_28 -= ((((33644 - (arr_22 [i_7] [i_8]))) / (arr_3 [i_6 + 1] [i_6 + 1] [i_8])));
                        }
                        var_29 = (((((-2 ? (arr_3 [i_6 + 3] [i_6] [i_6 + 3]) : var_5))) ? 18446744073709551612 : ((var_8 ? (arr_3 [i_6 + 3] [i_6 + 1] [i_6]) : 32768))));
                        arr_41 [i_9] [i_8] [i_7] [i_9] = (2192421927321910521 >> (((max(var_16, (arr_27 [i_6] [i_7]))))));
                    }
                    /* vectorizable */
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        arr_45 [i_6] [i_6] [i_6] [i_6] = (-1 | -805725136);
                        arr_46 [i_6 + 4] = -17;
                    }
                }
            }
        }
    }
    var_30 = ((!(((var_0 < var_18) != -var_4))));
    var_31 = (max(-16404, (((!((max(var_10, 8942479449247848469))))))));
    #pragma endscop
}
