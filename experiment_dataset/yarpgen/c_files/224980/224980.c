/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((!(((var_3 >> (var_3 - 25))))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_9;
        arr_3 [i_0] = var_9;
        var_16 = (max(var_16, (((1414517098 / (((((~(arr_0 [i_0] [i_0 - 1])))) + ((3025391860 ^ (arr_0 [i_0] [i_0 + 2]))))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_17 = (max(((min(((0 ? 128 : 249)), 467773665))), (~var_0)));
        arr_6 [i_1] = (min(((var_0 ? (arr_0 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))), (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_18 = (((arr_9 [i_2] [i_2]) ? ((max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))) : ((max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2]))))));

        for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_19 = (max((arr_8 [i_3] [i_3]), (((arr_0 [i_3] [i_3]) ^ (arr_0 [i_2] [i_3])))));
            arr_12 [i_2] [i_3] = ((((((((var_6 ? var_3 : -123))) ? (((arr_7 [i_2] [i_2]) + var_7)) : (((min(-52, (arr_9 [i_2] [i_2])))))))) ? (((((min(var_6, 1))) ? (((467773665 != (arr_5 [i_3])))) : (min((arr_4 [i_3]), -467773665))))) : (min(((((arr_8 [i_2] [i_2]) < 7))), ((7 ? var_1 : (arr_11 [i_2] [i_2] [i_2])))))));
            arr_13 [i_3] = ((((max((!7), (((arr_9 [i_2] [i_2]) + -52))))) ? var_10 : (max((arr_4 [i_2]), ((min(255, 31)))))));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_2] [i_2] = (max((((((min((arr_15 [i_2]), var_13))) ? (arr_15 [i_4]) : (arr_15 [i_4])))), ((-52 ? (4253328329 || 0) : var_2))));
            var_20 += ((((((arr_15 [i_2]) ? (((arr_11 [i_2] [i_2] [i_2]) - (arr_9 [i_2] [i_2]))) : (arr_16 [i_2] [i_4])))) ? (((((1833312741 ? (arr_8 [i_2] [i_2]) : -51))))) : ((((((arr_14 [i_4]) ? var_14 : var_11))) ? ((((arr_10 [i_2]) % var_11))) : (((arr_10 [i_4]) ? (arr_16 [i_2] [i_4]) : 0))))));
            var_21 -= (((arr_1 [i_2] [i_2]) >> (((((arr_1 [i_2] [i_4]) ? var_12 : (arr_1 [i_2] [i_2]))) + 1090482696))));
            var_22 = ((((min((arr_15 [i_4]), 63899))) ? (max(((-(arr_8 [i_2] [i_4]))), -24803)) : (arr_4 [i_2])));
        }
        arr_18 [i_2] [i_2] = (var_14 ? (arr_16 [i_2] [i_2]) : ((min(var_5, (-2147483647 - 1)))));
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        var_23 = ((((((arr_20 [i_5]) ^ var_13))) && (((-(arr_20 [i_5]))))));

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_24 = (max((((((min(24803, 0))) ? (arr_19 [i_5]) : ((-(arr_21 [i_5] [i_5])))))), (max(((((arr_19 [i_5]) ? var_3 : (arr_22 [i_5] [i_5] [i_5])))), (~8691452623842198937)))));
            var_25 |= ((-(((((3277438987 ? var_4 : 20868))) / (min(-8691452623842198938, 147))))));

            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                var_26 = (((-(((arr_24 [i_5] [i_5] [i_5] [i_5]) ? (arr_24 [i_5] [i_5] [i_5] [i_5]) : (-2147483647 - 1))))));
                arr_27 [i_5] [i_5] [i_6] [i_5] = (arr_19 [i_6]);
            }
            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_27 = (arr_29 [i_5] [i_5] [i_5]);

                for (int i_9 = 3; i_9 < 23;i_9 += 1)
                {
                    var_28 = ((((var_2 ? var_14 : (((arr_32 [i_8] [i_8] [i_5] [i_5]) >> (((arr_30 [i_5] [i_6] [i_6]) + 142)))))) < ((63 ? (arr_20 [i_9 + 1]) : 166))));
                    arr_33 [i_5] [i_5] [i_5] [i_5] = (((((~((var_6 ? (arr_31 [i_6] [i_6]) : (arr_30 [i_5] [i_6] [i_5])))))) ? ((-(arr_28 [i_9 - 3] [i_9 - 3] [i_9 - 3] [i_9 - 3]))) : ((((arr_24 [i_5] [i_5] [i_5] [i_5]) ? (arr_23 [i_5] [i_5] [i_5] [i_9]) : ((max(63, -24803))))))));
                    arr_34 [i_9] = (((arr_25 [i_6] [i_8] [i_9 - 3]) || -2409608825245455579));
                }
                for (int i_10 = 0; i_10 < 24;i_10 += 1)
                {
                    var_29 = ((1975065781 ? ((-(arr_31 [i_8] [i_10]))) : -var_13));
                    var_30 = (arr_20 [i_10]);
                }
                var_31 ^= (110 & 24803);
            }
        }
    }
    for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
    {
        var_32 *= (arr_19 [i_11]);
        var_33 = var_12;
        var_34 = ((((((108 ? -319528500 : -113)))) ? (!103) : (max((arr_19 [i_11]), var_0))));
    }
    #pragma endscop
}
