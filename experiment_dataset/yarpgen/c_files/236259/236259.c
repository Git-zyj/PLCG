/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_18 -= (((((4842 ? 13835058055282163712 : ((min(1783, var_6)))))) ? 63753 : ((1 ? 65535 : (65535 / 224)))));
        var_19 = (max(var_19, (arr_0 [4])));
        var_20 = ((9 >= (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0])))))));
        arr_2 [i_0] = (((((arr_0 [i_0]) == (arr_1 [i_0]))) ? ((((arr_0 [i_0]) ? 30 : (arr_1 [i_0])))) : ((var_2 ? 65527 : -1152921504606846976))));
        var_21 = (max(((((var_10 || (arr_0 [i_0]))) ? ((1086471066 ? 562949684985856 : 1783)) : (0 >= 65535))), ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
    }
    var_22 = (-2 && var_11);
    #pragma endscop
}
