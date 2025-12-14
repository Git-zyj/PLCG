/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48629
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, ((((var_15 && 1) ? 1 : 1)))));
    var_19 = (((((((var_0 - (-32767 - 1)))) / var_14)) < ((((min(44580, -4096)))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_20 = 0;
        var_21 |= ((((!(arr_0 [i_0]))) ? (((!(arr_0 [i_0])))) : ((min((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_22 = (((((57313 && 34910) && (arr_1 [i_0] [i_0]))) && ((min(((((arr_0 [i_0]) && -14447))), (arr_0 [i_0]))))));
        arr_2 [i_0] = var_9;
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_5 [i_1] = ((-((-(var_3 - var_1)))));
        var_23 = (arr_4 [8]);
        var_24 = (max(var_24, ((min((((!(!-32759)))), ((((var_15 ? (arr_3 [i_1]) : var_6)) + ((var_13 ? (arr_3 [i_1]) : (arr_4 [i_1]))))))))));
    }
    #pragma endscop
}
