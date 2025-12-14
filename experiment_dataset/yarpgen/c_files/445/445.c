/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/445
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = ((max(var_9, ((177 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0]))))));
        var_15 ^= (max((arr_0 [i_0]), ((max((arr_2 [i_0] [i_0]), var_13)))));
        var_16 = (min(var_16, (((((max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0])))) % ((max((max(var_12, var_12)), var_13))))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [6] &= var_9;
        var_17 = var_10;
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_18 += (((+-2147483628) < ((max(193, (2432355931698510429 == var_5))))));
        arr_14 [i_2] = (max((arr_2 [i_2] [i_2]), var_11));
        arr_15 [i_2] = (arr_5 [i_2]);
    }
    var_19 = var_13;
    var_20 = (max((((var_11 ? var_8 : var_11))), var_1));

    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_20 [i_3] [i_3] = (((((arr_5 [i_3]) ? -var_10 : 193)) >= (244 | var_1)));
            var_21 = (min(var_21, 248));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_24 [i_3] = 128;
            var_22 = (~193);
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            var_23 -= (((((arr_17 [i_3] [i_3]) != 255)) && var_10));
            var_24 = (arr_0 [i_3 + 1]);
        }
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            arr_29 [i_3] = var_13;
            arr_30 [i_3] [i_3] [i_3] = ((var_7 < (arr_17 [i_7] [i_3 - 1])));
        }
        arr_31 [i_3] = (((((var_1 ? (arr_27 [i_3]) : 1213535933)))) * ((((max(var_12, var_11)) == (arr_22 [i_3] [i_3])))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_25 = (max(var_25, (arr_28 [i_8])));
        var_26 &= var_13;
        arr_35 [i_8] = var_3;
    }
    #pragma endscop
}
