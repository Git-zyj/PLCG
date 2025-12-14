/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_9;
    var_19 = (((!var_4) << ((((((var_6 ? var_3 : var_10)))) - 132))));
    var_20 |= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = 6852253994298548756;
            arr_6 [i_0] [i_0] = ((69 > (arr_3 [i_0] [i_0])));
            var_21 = (((115 ? 119 : 4087858498283001294)));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_3] [i_0] [i_0] = (32767 % 732586874);
                        var_22 = (((134086656 ^ (arr_7 [i_3] [18] [i_1] [i_0]))));
                        arr_13 [i_0] [i_1] [i_2] [i_1] [i_3] [i_3] = ((var_13 + (arr_0 [i_0] [i_1])));
                    }
                }
            }
            arr_14 [i_1] [i_0] = arr_11 [i_0] [i_0];
        }
        var_23 = (((~-741997223) ? var_8 : ((-422131795 ? (arr_4 [i_0]) : var_14))));
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_24 = (min(var_24, ((max((max(-134086680, 215)), ((((max((arr_17 [i_4]), -134086657)) == var_2))))))));
        arr_19 [i_4] = (((arr_2 [i_4]) + (min(-78, 1028860737))));
        var_25 = (max(((((arr_15 [i_4]) * 10382))), 15925155988397569621));
        var_26 = ((((arr_10 [1] [i_4] [i_4]) ? (arr_10 [i_4] [i_4] [i_4]) : var_1)) & (arr_10 [i_4] [i_4] [i_4]));
        arr_20 [i_4] [i_4] = 1;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        /* vectorizable */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            var_27 -= (arr_17 [i_6 - 1]);
            var_28 = (min(var_28, (-134086687 - 2731402883)));
            arr_26 [i_5] [i_6] [i_6] = (-1194555319 / var_2);
            var_29 -= (arr_7 [i_6 + 1] [i_6] [i_6 - 1] [i_6 - 2]);

            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    arr_33 [i_5] [i_5] [i_7] [i_8] [i_7] = 6829988500349094752;
                    arr_34 [i_6] [i_6] = 1;
                }
                var_30 = (11386796076452790132 < var_15);
                var_31 = (((arr_2 [i_7]) ? (arr_2 [i_5]) : (arr_25 [i_7] [i_7] [i_7])));
                var_32 = (var_9 != -1194555313);
            }
        }
        arr_35 [i_5] &= -134086680;
    }
    #pragma endscop
}
