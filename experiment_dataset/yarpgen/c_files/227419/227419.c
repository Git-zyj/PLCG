/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += -7398192288676581341;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = (max((((max(-8455529941697213491, 512)) * (arr_5 [i_0] [i_2]))), ((-(arr_9 [i_1])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [0] [i_3] = max(((-((var_10 % (arr_2 [i_0] [i_1]))))), (((((max(var_7, var_7))) | -7398192288676581341))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            arr_18 [i_0] [i_3] [i_2] [i_2] [i_3] = var_1;
                            var_19 = (arr_6 [i_1] [i_2] [i_3]);
                        }
                        arr_19 [i_3] [i_2] [i_1] [i_3] = var_7;
                    }
                    var_20 += ((+-59101) ? (((1456864952 ? -59101 : -1456864937))) : ((-(max((arr_8 [i_0] [i_1]), (arr_14 [i_0] [i_1] [i_2] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_21 += ((-var_2 % (min(var_16, var_10))));

    for (int i_5 = 1; i_5 < 13;i_5 += 1)
    {
        var_22 ^= (((~(max((arr_21 [i_5]), var_1)))));
        var_23 = (((((~(min(var_6, 1456864936))))) ? (arr_20 [i_5] [i_5]) : 7398192288676581340));
    }
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        arr_25 [i_6 - 1] = ((var_1 ? (arr_24 [i_6 - 1]) : (arr_24 [i_6 - 1])));
        arr_26 [i_6 - 1] = 7004435335660743455;
    }
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                var_24 = (((19610 ? ((-57 ? var_13 : -7004435335660743447)) : (~0))));
                var_25 -= arr_21 [i_7];
                var_26 = ((((-(600394454363263105 + -1456864947)))) ? ((((max(7004435335660743455, 2147483647))) ? var_12 : ((3923165387450637229 ? (arr_21 [i_7]) : var_4)))) : 7286015809122469255);
                arr_33 [i_7] [1] [1] = (((((max(var_9, 192)))) ? var_2 : ((var_10 ? (((-(arr_8 [i_8] [i_7])))) : var_12))));
            }
        }
    }
    #pragma endscop
}
