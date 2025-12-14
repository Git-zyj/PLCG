/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_13 = (min((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))), (min((max(-46, (arr_0 [i_0]))), (1 >= 1)))));
        arr_2 [i_0] = ((!(((-((((arr_0 [i_0]) > var_12))))))));
        var_14 = (!1);
        var_15 = ((((((((48721 ? 254 : var_7))) ? (((977582850 ? 1 : 1))) : ((var_8 ? (arr_0 [i_0]) : 0))))) ? ((+(((arr_0 [i_0]) ? 1455354873 : 98)))) : ((((!(((3317384446 ? var_1 : 1)))))))));
        var_16 = ((-(((arr_0 [i_0]) / 24576))));
    }
    var_17 = var_10;
    #pragma endscop
}
