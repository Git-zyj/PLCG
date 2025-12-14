/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = -42;
        var_18 = var_6;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {

            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                var_19 = (min(var_19, (max((max(868877429, (((((arr_9 [i_1] [i_1] [i_1]) + 2147483647)) >> (((arr_3 [i_1] [i_3]) - 3055975792)))))), (arr_5 [i_1])))));
                arr_11 [i_3] [i_2] [i_2] [i_3] = var_0;
            }
            var_20 = (max(var_20, var_9));
        }
        var_21 *= (((((-((318347465 ? 192 : (arr_10 [i_1] [i_1] [i_1] [i_1])))))) ? ((~(arr_4 [i_1] [i_1]))) : ((((min(747147671, (arr_5 [i_1]))) | (max(747147671, 1301481911)))))));
    }
    for (int i_4 = 2; i_4 < 9;i_4 += 1)
    {
        arr_15 [i_4 + 1] = (((~var_2) == (-747147661 / var_12)));
        arr_16 [i_4] [i_4 - 2] = (((((min(var_7, (arr_9 [i_4] [i_4] [14]))) <= (max(732488874, 7)))) && ((min((((arr_2 [i_4] [i_4]) / var_3)), var_10)))));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_22 = 4172807675296862552;
            var_23 |= max(2147483647, 19766);
            var_24 = -0;
            var_25 = (min(var_25, ((((arr_0 [i_4]) - (max(732488877, 732488878)))))));
        }

        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            var_26 = var_3;

            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                var_27 = -var_1;
                var_28 = (max(var_28, ((((((~(((arr_7 [i_4] [i_4] [i_7]) ? var_13 : var_13))))) ? (((max((arr_0 [i_4]), var_11)))) : -var_7)))));
            }
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                var_29 = (max(var_29, (((((((747147661 ? 732488876 : -747147657))) ? ((-(arr_29 [i_4] [i_4] [i_4] [10]))) : var_0))))));

                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    arr_33 [i_6] [i_6] [i_8 + 3] [i_6] = (((max(14273936398412689064, (arr_8 [i_8 - 4] [i_6 + 1]))) % (arr_19 [i_8 - 4] [i_8 - 4])));
                    var_30 ^= ((min((arr_32 [i_6 + 1] [i_6 + 1] [i_8 + 2] [i_6 + 1]), -51)));
                    var_31 = 234;
                    var_32 = (max(var_32, (!-371637672)));
                }
                var_33 = (max((max(var_3, ((((arr_0 [12]) ? -1 : 10846))))), -1692211431));
                var_34 *= ((+(((arr_18 [i_4 + 2] [i_4]) ? var_13 : (arr_20 [i_4])))));
                var_35 = ((~((~(arr_10 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1])))));
            }

            /* vectorizable */
            for (int i_10 = 1; i_10 < 11;i_10 += 1)
            {

                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    arr_40 [i_4] [i_6] [i_6] [i_11] = -732488859;
                    var_36 = (max(var_36, var_0));
                }
                var_37 = (arr_22 [i_4]);
            }
            var_38 = ((+(max((((arr_2 [i_4] [i_6]) - (arr_37 [i_4]))), -var_14))));
        }
        var_39 = (((~(arr_27 [i_4 + 2] [i_4] [i_4 + 4]))) << (((((((arr_4 [i_4 + 4] [i_4 - 2]) ^ (arr_27 [i_4 - 2] [i_4] [i_4 + 4]))) + 1547593298359305774)) - 1)));
    }
    var_40 = var_0;
    #pragma endscop
}
