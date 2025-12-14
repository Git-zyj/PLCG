/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_13 = var_5;
            arr_5 [i_0] [i_0] [i_0] = var_11;

            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                arr_9 [i_0] [i_0] = -18446744073709551612;
                var_14 *= (max(19051, ((-134217727 ? (arr_2 [i_0] [i_0 - 1]) : (~666393047721585639)))));

                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    var_15 = (max(var_15, (((min(((max(var_5, var_7)), (max((arr_6 [i_2] [i_2] [i_2] [i_3]), 18446744073709551615)))))))));
                    arr_13 [i_0] [i_1] [i_1] [12] = 133;
                }
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    var_16 ^= (+-22214);
                    var_17 = var_2;
                    var_18 += (var_8 < var_11);
                    var_19 = ((!(~18446744073709551600)));
                }
                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_18 [i_0] [i_0] [i_0] = ((~(max(536870910, var_8))));
                    arr_19 [i_0] = var_1;
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    var_20 ^= var_6;
                    arr_24 [i_6] [i_1] [i_1] [i_1] [i_1] [6] |= 2924613695;
                }
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                arr_27 [i_1] [6] [i_1] [i_0] = var_2;
                arr_28 [i_0] = (max(1370353600, 1251783918736358080));
                arr_29 [i_0 - 2] [i_0] [i_0] [i_0] = var_7;
            }
            arr_30 [i_0] = ((18446744073709551615 ? (arr_25 [i_0 + 2] [i_0] [i_0 - 1] [15]) : 17780351025987965951));
        }
        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_21 = (arr_14 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1]);
            var_22 = ((~(max(17780351025987965977, var_12))));
            var_23 = (max(var_23, ((min(((~(arr_26 [i_8] [18] [i_8] [10]))), (((~128) & 18446744073709551602)))))));
            var_24 = (-(arr_6 [i_0 - 1] [i_0] [i_0 - 2] [i_0]));
            arr_34 [i_0] [i_0] [i_0] = (((((max(var_6, var_9)))) > var_12));
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1) /* same iter space */
        {
            var_25 = min((arr_16 [i_0 - 2] [i_0]), (arr_17 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 - 1]));
            arr_37 [i_0] = (max((~18446744073709551598), var_10));
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1) /* same iter space */
        {
            arr_40 [i_0] [i_10] [i_10] = 32767;
            var_26 = var_12;
            var_27 = 11;
            var_28 = min((!var_6), var_8);
        }
        var_29 = (min(var_6, ((~(arr_39 [i_0 + 2])))));
        arr_41 [i_0] = -8910098419249917692;
        arr_42 [i_0] = ((-6208198269732662847 ? var_6 : var_12));
    }
    var_30 = (var_9 & 18446744073709551615);
    var_31 = 8910098419249917677;
    var_32 = var_11;
    #pragma endscop
}
