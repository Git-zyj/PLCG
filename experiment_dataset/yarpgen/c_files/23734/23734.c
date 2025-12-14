/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_13 += 31;
        var_14 *= ((max(255, 13680204587329729153)) << (((arr_0 [6]) ? (min(4766539486379822462, 0)) : 248)));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] = (max((arr_1 [i_4]), 80227150));
                                var_15 = (min(17468512543731396237, 13680204587329729154));
                            }
                        }
                    }
                    arr_16 [i_0] = (((min((arr_10 [i_0 + 3]), (arr_10 [i_0 + 2]))) != (arr_5 [i_0 + 1] [i_2 - 1])));
                    arr_17 [i_0] = (max((9079337989594098300 != 61), ((!(((903636791 ? 4766539486379822467 : 0)))))));
                }
            }
        }
        var_16 = (max(var_16, (240 / 29)));
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_17 = -369933140;

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_18 = (4214740146 != 0);
            var_19 += ((-(2681172315 < 225)));
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            var_20 = arr_25 [i_5 + 2] [i_7];
            arr_26 [10] [i_7] [i_7] = (arr_6 [i_5 + 3] [i_5 - 3] [i_7] [i_5 - 1]);
        }
        for (int i_8 = 2; i_8 < 16;i_8 += 1)
        {
            var_21 = arr_9 [i_5] [8] [i_8];
            var_22 += (((arr_13 [18] [i_5 - 3] [2] [i_8 - 2] [18]) || (4766539486379822493 < 4766539486379822466)));
        }
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            arr_33 [i_5 - 3] [i_5] [i_9] = ((var_8 ? 0 : (arr_23 [i_5] [i_5 - 3] [i_5])));
            arr_34 [i_5] &= (((arr_18 [i_5 + 3]) ? (arr_18 [i_5 + 2]) : var_4));
            var_23 *= 31;
            var_24 = (-159 || 17468512543731396226);
            var_25 += (arr_27 [i_9]);
        }
        arr_35 [i_5] = 4294967295;
    }
    for (int i_10 = 1; i_10 < 6;i_10 += 1)
    {
        var_26 += ((((max(((0 ? 13680204587329729165 : 1)), (min(var_1, 13680204587329729131))))) && (4766539486379822463 <= 145)));
        arr_38 [i_10] = (((250 ? 27 : 6)) ^ (arr_21 [i_10]));
        var_27 = (max(var_27, (((0 ? 9 : 76)))));
    }
    var_28 = (!var_3);
    var_29 += (min(((var_2 ? (min(var_4, var_8)) : (!84))), (~var_6)));

    for (int i_11 = 0; i_11 < 11;i_11 += 1)
    {
        var_30 = (4766539486379822467 * 10847621340456627547);
        var_31 |= (min(var_12, (min(166, 8))));
        var_32 = (min((min(((var_8 % (arr_30 [13] [13] [i_11]))), ((((arr_29 [i_11] [i_11]) != (arr_28 [i_11] [i_11])))))), (!6)));
    }
    #pragma endscop
}
