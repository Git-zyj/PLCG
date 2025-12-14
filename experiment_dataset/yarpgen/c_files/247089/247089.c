/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247089
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_11 = (min((((arr_1 [i_0]) ^ (arr_1 [i_0]))), ((max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_12 = (~-var_10);
    }
    var_13 = var_6;

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (((((min(0, 1551817044))) ? (24094 & var_7) : (max((arr_5 [i_1]), var_9)))));
        var_14 = (min(-1, (min((arr_5 [i_1]), (arr_5 [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        var_15 = var_8;
        var_16 = ((6539290766155894107 ? (arr_7 [i_2]) : ((((arr_8 [i_2]) ? var_2 : var_6)))));

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                var_17 = (!var_7);
                var_18 = (max(var_18, (((var_4 ? 2743150252 : 60)))));
                var_19 = ((1 ? 1 : (arr_12 [i_3 + 3])));
            }
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                var_20 = (((1 & var_7) && (arr_9 [i_3 - 2] [i_3 + 2])));
                var_21 = var_2;
                var_22 = 1551817071;
            }
            var_23 = ((-(var_9 != 99)));
        }
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_24 = (((((-(arr_9 [i_2] [i_6])))) ? (arr_8 [i_2 + 1]) : 42557));
            var_25 = (arr_15 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 1]);
        }
        var_26 &= (!-5);
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1)
    {
        var_27 = var_7;
        var_28 = -var_8;
    }
    var_29 = (min(var_5, ((((min(196, var_1))) * ((5741268282030583803 ? var_8 : var_7))))));
    var_30 = (~var_0);
    #pragma endscop
}
