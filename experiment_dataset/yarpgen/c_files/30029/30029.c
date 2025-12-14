/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-(((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 2147483631))));
        arr_3 [i_0] = (min(((max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), (((arr_0 [i_0] [i_0]) ? -2147483631 : var_3))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            var_14 -= (min((((((((arr_5 [i_0] [i_0] [i_0]) ? var_2 : 2147483631))) ? (arr_6 [i_1 - 1] [i_1]) : (arr_6 [i_0] [i_0])))), (((((arr_6 [i_0] [i_0]) ? 11201809723046837955 : 32453)) | (((max((arr_1 [16] [i_1]), 7))))))));
            var_15 = ((((((15143 ? -15887 : 9900)) == (arr_1 [i_0] [i_1 + 2]))) ? (((var_1 > 55641) ? var_5 : (((-28 ? 0 : 28531))))) : var_11));
            arr_7 [i_0] [i_1] = arr_4 [i_0] [i_0];
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            arr_10 [i_0] |= ((((((2147483639 ? var_7 : 4591)) - -30)) / var_9));
            arr_11 [i_2] = ((((((34640 & (arr_8 [i_2]))))) * -32764));
            var_16 += (((arr_9 [i_0] [i_0]) >> (((((-1614307000 + 2147483647) << (((arr_5 [i_0] [i_0] [i_0]) - 88)))) - 533176626))));
            var_17 &= max((((0 ? 2055033518 : (arr_5 [i_0] [i_0] [i_0])))), ((min((max(44980, var_0)), ((30473 ? -7 : var_0))))));
        }
        arr_12 [1] [i_0] = -7;
    }

    /* vectorizable */
    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
    {
        var_18 = ((var_5 ? 23063 : 62743));

        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            arr_18 [i_3] [i_4] = ((16 ? (arr_15 [i_3 + 3] [i_3 + 1] [i_3 + 1]) : (arr_13 [i_3 + 1])));
            var_19 = (arr_17 [i_3 + 1] [i_3 + 3]);
            var_20 = (min(var_20, 1));
        }
        arr_19 [i_3 + 2] [i_3 - 1] = (arr_6 [3] [i_3]);
    }
    for (int i_5 = 1; i_5 < 18;i_5 += 1) /* same iter space */
    {
        var_21 -= arr_8 [10];
        var_22 = ((((((arr_20 [i_5 + 1]) / (arr_22 [i_5 + 3] [i_5 + 3])))) ? 1 : ((((arr_4 [i_5] [i_5 + 2]) || (((var_8 ? (arr_15 [i_5] [6] [i_5]) : (arr_23 [i_5])))))))));
        var_23 ^= (((var_11 & var_5) ? var_12 : (((arr_23 [i_5 + 2]) | var_7))));
    }
    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
    {
        arr_26 [i_6 + 2] = ((-(((arr_23 [i_6 + 2]) - 9899))));
        var_24 = (min(var_24, (((((arr_16 [i_6 + 1] [i_6 - 1]) ? (arr_22 [i_6 + 2] [i_6 - 1]) : (arr_16 [i_6 + 1] [i_6])))))));
        var_25 = (min(var_25, (((((min(((min(-23063, 1))), ((4019 ? 1 : 1))))) ? var_1 : ((max((arr_24 [i_6]), 58121))))))));
    }
    for (int i_7 = 0; i_7 < 14;i_7 += 1)
    {
        var_26 = (min(var_26, ((min((min(var_0, (arr_6 [1] [i_7]))), var_7)))));
        arr_29 [i_7] [i_7] = var_3;
    }
    var_27 = (max(var_27, var_11));
    #pragma endscop
}
