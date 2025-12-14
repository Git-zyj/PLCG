/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        var_14 = var_4;
        var_15 = (max(var_15, (((arr_0 [i_0] [i_0 - 1]) - ((1 + (arr_1 [12])))))));
        var_16 = (((((((arr_1 [i_0]) * 1)) << (((arr_0 [i_0 - 1] [i_0]) - 652512072)))) < (((!(((1 ? 3633024583158092666 : var_12))))))));
        arr_2 [i_0 - 1] = ((((((((arr_1 [i_0 + 1]) * var_4))) ? -var_6 : ((-(arr_0 [i_0] [i_0 + 2])))))) ? (((min(0, 46)))) : 3154592563299169233);
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_17 = 1;
        arr_6 [i_1] = ((((max((arr_4 [i_1] [i_1]), (arr_4 [i_1] [i_1])))) ? 1 : (arr_4 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = (max(var_18, 1044480));
        arr_9 [i_2] [i_2] = (max(((var_6 ? var_6 : (max((arr_5 [i_2]), (arr_8 [i_2] [7]))))), -var_3));
        var_19 = (((((1 ? 6 : (arr_5 [i_2])))) ? (min((arr_3 [i_2]), (arr_3 [i_2]))) : var_11));

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                arr_15 [i_3] [i_3] [i_3] [i_3] = (arr_10 [i_2] [i_3] [i_2]);
                var_20 = var_8;
                var_21 = (arr_13 [9] [9] [i_2]);
            }
            arr_16 [i_3] = 1532913766238331439;
            arr_17 [i_2] [i_3] [i_3] |= ((((~((max(48, 0))))) <= ((var_7 ? ((var_13 ? 1 : var_13)) : 1621))));
            var_22 ^= (((((-(max(1501884727, (arr_12 [i_2] [5] [i_2] [i_2])))))) ? (min(5731, (arr_3 [i_2]))) : var_9));
        }
        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            var_23 = 1;
            arr_21 [i_2] [i_2] [i_2] = (((((var_6 ? var_4 : (arr_20 [i_5 - 3] [i_5 + 4])))) ? ((((arr_10 [i_5] [i_2] [i_5 + 1]) ? var_0 : -25037))) : (((max(var_0, var_5)) - 1))));
            var_24 = (8388607 && 25036);
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_25 = (((((((var_8 / (arr_19 [i_6] [i_6] [i_6])))) ? var_3 : 10074600519079570712)) < ((8388627 ? (1311278093 && var_10) : (min((arr_3 [i_6]), var_1))))));
        var_26 = (((-127 - 1) ? 4801 : (-127 - 1)));
    }
    var_27 = 3982299723;
    var_28 = (max(((((~var_1) & var_6))), var_10));
    var_29 = (((((14256 <= ((var_3 ? 6220221893876371240 : var_1))))) != -61581));
    #pragma endscop
}
