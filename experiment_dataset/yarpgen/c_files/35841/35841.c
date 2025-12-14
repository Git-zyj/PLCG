/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = var_6;
    var_15 = max(var_1, var_11);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_1 [i_0] [i_0];
        var_16 = (((((arr_0 [i_0]) && (arr_1 [i_0] [i_0]))) ? (((arr_0 [i_0]) / -19)) : (arr_0 [i_0])));
        arr_3 [6] [i_0] = (max((((var_6 != var_4) ? ((((arr_0 [i_0]) ? 186 : 0))) : (arr_0 [i_0]))), ((((((arr_1 [i_0] [i_0]) ? (arr_1 [1] [i_0]) : var_11))) ? (var_0 >> 1) : (max((arr_1 [i_0] [i_0]), (arr_0 [1])))))));
        arr_4 [i_0] = (max(((((-(arr_1 [i_0] [i_0]))))), (1 / 12328)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_8 [i_1] = (((max((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))) << ((var_2 ? (arr_7 [i_1] [i_1]) : 2142562546)));
        var_17 = (arr_6 [i_1]);
        var_18 = (((max((arr_5 [i_1]), (arr_6 [i_1]))) / ((((arr_6 [i_1]) ? (arr_5 [i_1]) : -2792)))));
        var_19 = ((-(max(15, ((max(var_5, -2142562542)))))));
    }
    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            var_20 = 2039524614;

            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                var_21 = (arr_10 [i_3 + 1] [i_2 - 1]);
                arr_17 [i_3] [i_3] = 4294967291;
                var_22 = ((+((((arr_9 [i_3]) || (arr_9 [i_2 - 1]))))));
            }
            for (int i_5 = 2; i_5 < 21;i_5 += 1)
            {
                var_23 = ((((min((arr_10 [i_2 + 2] [i_3 + 1]), (arr_18 [i_5] [i_3] [i_2] [i_2])))) - ((var_10 ? 3 : ((min(36597, 1)))))));
                var_24 = (max((arr_14 [i_5 - 2]), ((30786325577728 ? (var_12 != -66) : ((var_0 ? (arr_19 [i_2] [i_2] [i_5]) : (arr_19 [1] [1] [i_2])))))));
            }
            arr_20 [i_3] = var_3;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            var_25 = 4095;
            arr_24 [i_2] [i_6] = (((var_3 * 0) <= 63));
        }
        arr_25 [i_2] = (((arr_9 [i_2]) ? var_9 : (((arr_15 [i_2 + 1] [i_2] [0]) ? (((var_8 ? (arr_10 [i_2] [i_2]) : 1))) : 10))));
        var_26 = (((((~((max((arr_10 [i_2] [i_2]), (arr_14 [i_2 - 1]))))))) + (((((arr_23 [i_2]) || (arr_15 [i_2] [i_2 + 1] [22]))) ? ((((arr_22 [i_2]) ? 0 : var_5))) : (((arr_14 [i_2]) / (arr_22 [i_2 + 1])))))));
    }
    var_27 = (((((var_0 ? ((var_8 ? var_7 : var_9)) : var_3))) ? (!1571178595209707141) : -269565294));
    #pragma endscop
}
