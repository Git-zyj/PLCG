/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -var_3));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_21 = (max((((arr_1 [i_0]) ? var_3 : var_14)), ((min((arr_0 [i_0] [i_0]), (arr_0 [2] [i_0]))))));
        arr_2 [i_0] [i_0] = (((max((120 / 1880149431), (min(var_17, (arr_0 [i_0] [i_0])))))) ? ((((((arr_0 [i_0] [i_0]) >= var_4))) % var_3)) : ((var_15 ? ((var_3 ? -107 : var_0)) : var_16)));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1 + 2] = (arr_1 [i_1]);

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                arr_12 [i_1] [1] [i_1] [10] = ((var_0 % (arr_1 [i_1 + 1])));
                arr_13 [i_2] [10] [i_2] [i_1 - 1] = (var_13 == var_8);
            }
            arr_14 [3] [3] [i_2 - 1] = ((-1343799281 ? (min(var_7, var_7)) : ((min(var_11, (min(-1880149426, 126)))))));
            var_22 = (((arr_10 [i_2] [i_2 - 2] [i_2 + 2] [i_1 + 2]) ? (((min(((!(arr_9 [i_1] [i_2]))), (var_12 > var_2))))) : (arr_4 [0])));
            arr_15 [8] [i_2] [9] |= var_6;
        }
        arr_16 [i_1] = (min((arr_10 [0] [0] [10] [i_1]), ((((var_11 || (arr_11 [i_1] [i_1] [i_1])))))));
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        arr_20 [i_4] [i_4] = var_2;

        for (int i_5 = 3; i_5 < 24;i_5 += 1)
        {
            var_23 |= (((arr_22 [i_5 + 1] [i_5 - 1]) ? (var_19 >= var_7) : (arr_18 [i_4])));
            var_24 = (((((max(var_7, (arr_22 [i_4] [13])))) >= ((min(var_9, var_14))))));

            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                var_25 = (max(var_25, (((~196) ? (((((arr_18 [i_4]) - var_18)))) : (max((~var_11), (min(var_2, var_0))))))));
                var_26 = (max(var_11, (min(((min(var_3, var_18))), (var_12 - var_4)))));
                arr_25 [i_4] [i_5 - 2] [i_6] = var_14;
                var_27 = var_3;
            }
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_28 = var_2;
                    var_29 += (((((-((var_15 ? var_4 : 104))))) ? var_7 : var_14));
                }
                var_30 *= (max((min(((var_6 ? (arr_18 [24]) : var_4)), var_16)), var_16));
                var_31 = (min(var_6, (!var_17)));
                arr_33 [i_4] [i_5] [i_7] [i_7] = 1343799278;
                var_32 = (max(var_32, (min((min(var_4, var_10)), var_13))));
            }
            for (int i_9 = 0; i_9 < 25;i_9 += 1)
            {
                arr_38 [i_4] [i_4] = ((max(var_7, (arr_23 [i_5 - 3] [i_5 - 1] [i_5 - 2]))));

                for (int i_10 = 3; i_10 < 24;i_10 += 1)
                {
                    var_33 = (min(var_33, (((((min(((var_5 ? var_3 : var_11)), var_2))) || ((min(var_7, (max(var_17, (arr_32 [i_4] [i_4])))))))))));

                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        arr_45 [i_4] [i_5] [i_9] [i_9] [i_10] [i_11] = (((arr_39 [i_4] [i_11 + 1] [i_10 - 2] [8]) ? (((arr_44 [i_5 - 3] [i_10 + 1] [i_11] [i_11 - 1]) + var_13)) : ((((var_19 + 2147483647) << (((var_9 + 17114) - 27)))))));
                        var_34 = ((((((~var_12) | var_9))) ? (((max(var_1, (var_8 || var_4))))) : ((max(var_10, var_5)))));
                        var_35 ^= var_9;
                    }
                    arr_46 [i_4] [i_5] [i_9] [i_9] [i_9] [i_9] = (max((var_19 | var_5), (((arr_41 [i_4] [i_5] [i_9] [i_10 - 3]) & var_9))));
                }
            }
            var_36 = (min((~-105), var_2));
            var_37 = (((var_5 ^ (arr_29 [i_5] [i_5 - 2] [i_5] [i_5 + 1]))) ^ (((((var_13 ? var_3 : var_8))))));
        }
        var_38 ^= (arr_35 [i_4] [i_4] [1] [i_4]);
    }
    var_39 = var_7;
    #pragma endscop
}
