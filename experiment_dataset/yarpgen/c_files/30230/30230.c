/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_0 - 2] [i_1] [i_0 - 2] = ((-(arr_2 [18])));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0 - 3] [i_0] [i_1] [i_1 - 1] [i_2 - 1] [i_3] = (((arr_6 [i_2 - 3] [i_1] [i_2]) ? (arr_6 [3] [i_1] [i_2]) : (arr_6 [i_0] [i_1 + 1] [i_3])));
                        arr_13 [i_0 - 1] [i_0] [i_0 + 1] [i_0] [i_0 - 2] [1] = ((-(arr_6 [i_1 - 1] [i_2 - 4] [i_3])));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [5] [i_0] = (var_1 + var_8);
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        var_11 = (min(var_11, (var_5 & -121)));
                        var_12 &= (((arr_7 [i_0 - 2] [i_1 + 1] [i_4]) ? (arr_7 [1] [1] [i_2 + 1]) : (arr_7 [i_1 + 1] [i_2 - 3] [i_4])));
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_24 [i_5] [i_6] = ((((15072 ? var_8 : 8704757717921129695))) ? ((((arr_3 [i_0 - 2]) << (1073709056 - 1073709050)))) : (((arr_19 [i_0] [i_1] [i_1] [i_6]) | 4294967295)));
                            var_13 |= (1385285069 && var_4);
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            var_14 = (min(var_14, (arr_27 [i_7 + 2] [i_1] [i_2] [i_0 + 1] [i_7 + 2])));
                            var_15 = ((var_4 ? (((var_9 ? (arr_27 [i_0] [i_1] [i_2] [i_5] [i_7]) : (arr_10 [5] [i_5] [i_2] [i_2] [i_1] [i_0 + 1])))) : ((10186975906105561108 ? var_0 : var_2))));
                        }
                        arr_28 [i_0] [i_1 + 1] [i_2 - 3] [i_0] [i_5] = (1 <= var_0);
                        var_16 = ((var_5 ? ((var_9 ? 1143142313 : (arr_1 [i_5]))) : (arr_6 [i_0] [7] [8])));
                        arr_29 [i_2] = ((~(arr_18 [i_0] [i_0] [i_2] [i_5])));
                        arr_30 [i_5] = 251658240;
                    }
                }
            }
        }
        var_17 = (arr_17 [i_0] [i_0 - 2]);
    }
    var_18 = (((((!-1757592270) - var_2)) != 0));
    var_19 = 4294967285;

    for (int i_8 = 3; i_8 < 16;i_8 += 1)
    {
        arr_34 [i_8 - 2] = ((((min((((!(arr_27 [i_8] [i_8 + 2] [i_8] [i_8] [12])))), (arr_17 [i_8] [i_8 - 3])))) ? var_6 : (!14)));
        var_20 = ((((!((((var_10 + 9223372036854775807) >> (var_5 - 674726143)))))) ? ((~(arr_11 [i_8] [i_8] [i_8] [i_8 + 1]))) : ((8704757717921129692 ? (!15) : (min((arr_10 [i_8 - 1] [i_8] [i_8] [i_8 + 2] [i_8 + 1] [i_8 + 1]), (arr_11 [i_8] [i_8 + 1] [i_8] [i_8])))))));
    }
    var_21 = (max(-var_8, ((-((var_2 << (var_0 - 11245)))))));
    #pragma endscop
}
