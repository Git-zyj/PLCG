/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_7, (!var_15)));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_4 [0] = ((~((max(var_5, var_3)))));
        var_18 = (min(var_18, ((((((((~(arr_3 [4])))))) - (~262206324))))));
        var_19 = ((max((max(2147483647, (arr_2 [5])), (arr_3 [i_0])))));
    }
    var_20 = ((((65535 ? ((4294967295 ? var_4 : var_14)) : (min(13442, 2147483647)))) % var_11));
    #pragma endscop
}
