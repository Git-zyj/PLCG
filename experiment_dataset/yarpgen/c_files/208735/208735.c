/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(255, (max(var_8, 1)))))));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (((32749 && (arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((!var_4) ? 52376 : (arr_1 [i_0]));
        var_19 = (max(var_19, (((-32767 ^ ((~(arr_0 [i_0]))))))));
        arr_5 [i_0] [i_0] = (((arr_0 [i_0]) * ((var_3 ? 1753397234 : (arr_2 [i_0] [i_0])))));
        arr_6 [i_0] = (max(var_5, ((~(arr_2 [i_0] [i_0])))));
    }
    #pragma endscop
}
