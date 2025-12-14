/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 474298081;
    var_18 -= (min(var_15, ((var_3 | ((94 << (159 - 156)))))));

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (-(arr_3 [i_0] [i_0]));
        var_19 = (arr_2 [i_0]);
        var_20 = (~474298074);
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_21 = ((((((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_7 [i_1])))) ? (max(3820669206, (arr_7 [i_1]))) : 3820669219));
        var_22 = (min(var_22, ((max(92, (max(((min((arr_1 [12] [i_1]), (arr_1 [i_1] [i_1])))), ((15672 ? 3510726930 : (arr_3 [i_1] [i_1]))))))))));
        var_23 -= (-var_3 | 3820669215);
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_24 = 162;
            var_25 = var_8;
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            var_26 = (((min(var_9, (~1894107653))) <= ((min((min(var_12, (arr_3 [i_2] [i_2]))), (arr_13 [i_4 + 1] [i_2] [i_4]))))));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_23 [i_2] [i_4 - 2] [i_5] [i_2] [i_2] = (arr_19 [i_4] [i_4] [i_4] [i_4] [12]);
                        var_27 = (max(var_27, ((min((((+(((arr_1 [i_2] [i_6]) ? var_0 : -121))))), (min((((arr_11 [6]) ? -1 : var_5)), (arr_6 [i_5]))))))));
                        var_28 = arr_13 [i_2] [i_2] [i_5];
                        var_29 = (arr_9 [i_2]);
                    }
                }
            }
        }
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        {
                            arr_34 [i_2] [i_7] [i_2] [i_2] = (((arr_3 [i_2] [i_2]) % ((-((4114126261 ? var_13 : -480752079))))));
                            var_30 = 134215680;
                            arr_35 [i_2] [i_2] [i_2] [i_9] [i_10] [8] = (max(((-(-121 <= 1836742303))), (max(((-28 ? (arr_24 [i_2] [i_2] [i_8]) : 165)), ((max(230, (arr_15 [i_2] [i_7] [i_8] [i_9]))))))));
                        }
                    }
                }
            }
            var_31 = (min(var_31, (~90)));
            var_32 &= (((((-(arr_7 [i_7])))) ? ((((((var_15 - (arr_13 [i_2] [10] [i_7])))) ? (var_13 + var_4) : ((-(arr_28 [i_2] [i_2] [i_7])))))) : (min((min(var_5, var_3)), (((!(arr_21 [i_2] [i_2]))))))));
            arr_36 [i_2] [i_2] [i_2] = ((((((max((arr_20 [i_2] [i_7] [i_2] [i_7] [i_7] [i_7]), 4047763823))) ? (arr_26 [i_2]) : ((min(79, 235))))) & ((((((arr_17 [i_2] [i_7]) >> (var_9 - 76)))) ? -var_3 : (-127 - 1)))));
        }
        arr_37 [i_2] [6] &= -99;
    }
    var_33 = (((max(247203474, var_9)) <= ((var_13 ? (((var_1 ? 105 : -72))) : (~var_16)))));
    #pragma endscop
}
