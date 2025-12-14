/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 && (((var_13 & ((10107093762186536506 << (803351280 - 803351226))))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((23 > 1) >> 31));
        var_19 = ((min((27106 + 1458), 0)));
        var_20 += ((!(((arr_0 [i_0] [i_0]) > 28))));
        var_21 -= var_9;
        var_22 += (((((arr_1 [i_0]) >> (((arr_1 [i_0]) - 12691)))) + ((((arr_0 [i_0] [i_0]) && ((max(var_10, var_14))))))));
    }
    #pragma endscop
}
