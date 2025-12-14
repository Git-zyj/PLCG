/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;
    var_19 = ((var_7 ? ((max(var_9, var_16))) : ((((!(!var_3)))))));

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_20 = ((var_0 & ((((!(arr_0 [i_0 + 1])))))));
        arr_3 [i_0] = (arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (var_14 | var_1);
        arr_7 [17] = ((((arr_5 [i_1]) ? var_10 : (arr_5 [1]))) >= var_17);
        arr_8 [1] = ((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_22 = (844861848 / 4294967284);
            arr_11 [i_2] [1] [i_1] = (((((arr_5 [i_2]) || var_7)) && ((!((((arr_9 [i_1] [i_1] [i_2]) ? (arr_5 [3]) : (arr_5 [13]))))))));
            arr_12 [i_1] = ((((!(arr_10 [i_2] [i_1]))) ? (min((arr_10 [16] [i_1]), 11)) : (arr_10 [i_1] [i_1])));
            var_23 = 844861859;
        }
        var_24 = (max(var_24, ((-(arr_4 [i_1])))));
    }
    var_25 = var_7;
    var_26 = var_10;
    #pragma endscop
}
