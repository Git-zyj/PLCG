/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_7, 1)) / ((var_2 / ((max(var_3, 2047)))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = 31;
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_5 [13] = ((((((arr_4 [i_1]) & 1))) ? (((arr_3 [i_0]) ? var_2 : (max(9, 17309000879844283213)))) : var_18));
            arr_6 [i_0] [i_0] [i_0] = ((~var_12) ? -6150690275735633809 : (~11879));
            var_22 = (!(((3 >> (((1 | -5942382810837891821) + 5942382810837891851))))));
            var_23 = (max((((min((arr_1 [i_0]), var_1)))), (((max(-5942382810837891817, var_15)) | 127))));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_24 *= (((max(((min(48, -1360810989))), 25619)) >= ((((min(65535, (arr_7 [i_0] [i_0]))))))));

            for (int i_3 = 2; i_3 < 23;i_3 += 1)
            {
                var_25 = (((1 || 15479) ? (((-(arr_12 [i_0] [i_0] [i_3])))) : (arr_11 [i_3 - 1] [i_3] [i_3 - 1] [i_3 + 2])));
                var_26 = ((var_7 ? ((min((max((arr_12 [i_0] [i_2] [i_3]), var_16)), 15480))) : ((1 ? (arr_7 [i_0] [11]) : 157))));
                arr_13 [i_3] [19] [i_3] [i_0] = min(1, (max(1, var_4)));
                var_27 = min(((min((arr_11 [i_0] [i_3] [i_3] [i_2]), 1217174435))), ((max(1, (arr_4 [i_3 + 2])))));
                var_28 = ((32767 >= (((max((arr_1 [i_2]), -9167497113795201194))))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                var_29 = var_7;
                var_30 |= (((((-2147483647 - 1) / var_16))) | 0);
                var_31 = (((arr_12 [i_4 + 1] [i_4 + 3] [i_2]) ? ((0 ? 8180715159397897405 : 1)) : var_7));
            }
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    arr_24 [i_2] [i_2] [i_2] = ((+((min((arr_9 [i_0] [i_0] [22]), var_10)))));
                    arr_25 [i_0] [i_2] [i_5] [i_6] [i_6] = (min(((((min(var_0, 1619896561))) ? (arr_12 [i_2] [i_5] [i_6]) : (8521 * -6051))), ((((arr_18 [i_0] [i_2] [i_6]) && (((-127 - 1) || 109)))))));
                }
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    arr_29 [i_7] [i_2] [i_5] [23] = (arr_19 [i_2]);
                    arr_30 [i_0] [i_0] [i_7] [2] = (((((~((10694297686229709660 ? (arr_21 [i_0] [i_2] [i_5]) : 2131441039))))) ? (~0) : ((max((arr_16 [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1]), 9)))));
                }
                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_33 [10] [10] [i_5] = (((arr_19 [i_8]) ? (max(((~(arr_1 [i_2]))), (34747 >= 65535))) : (!var_18)));
                    var_32 = (arr_10 [i_0] [i_0]);
                }
                var_33 = (max((-1 ^ 0), (((((min(-41, var_4))) > var_17)))));
            }
        }
    }
    #pragma endscop
}
