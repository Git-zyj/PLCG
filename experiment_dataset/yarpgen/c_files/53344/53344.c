/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_14));
    var_18 = (((((240 ^ 16) ? (~11) : (((126 ? 32 : 158))))) | (((1 ? 1 : 240)))));
    var_19 = (max(var_19, (((((min(((0 ? 92 : -2039019371943754868)), -4202275307679628003))) ? ((var_7 ? ((2761615405 ? 4294967279 : var_16)) : var_4)) : var_15)))));
    var_20 = ((var_10 * ((((min(var_4, 10246))) ? ((54 ? 65535 : 14)) : var_4))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_21 = (((((max(33188, (arr_2 [i_0]))))) ? ((-373106575491440454 ? (min(18446744073709551615, var_8)) : 3861426145961584823)) : (((((arr_1 [i_0]) == 77))))));
        arr_4 [6] &= ((var_4 | ((((min(1006, var_0))) ? (((arr_2 [i_0]) ? 4294967279 : var_11)) : ((((1 < (arr_1 [4])))))))));
    }
    #pragma endscop
}
