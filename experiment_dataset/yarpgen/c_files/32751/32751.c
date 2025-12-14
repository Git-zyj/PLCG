/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32751
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((max(var_15, var_17)))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((-(((arr_2 [i_0]) >> (arr_2 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = (min((((!-7236533419869394976) ? (((arr_6 [i_1] [i_1]) ? (arr_6 [i_1] [i_1]) : (arr_7 [i_1] [i_1]))) : (~var_4))), (((var_16 + var_18) ? ((var_4 ? (arr_5 [i_1]) : var_13)) : ((((arr_6 [i_1] [i_1]) < (arr_7 [i_1] [1]))))))));
        arr_9 [i_1] = (((arr_5 [i_1]) * ((((arr_5 [i_1]) <= (arr_5 [i_1]))))));
        arr_10 [i_1] [i_1] = var_14;
        arr_11 [i_1] [i_1] = ((2824715623 ? (((!(arr_7 [i_1] [i_1])))) : (max((((!(arr_7 [i_1] [i_1])))), 64619))));
    }
    #pragma endscop
}
