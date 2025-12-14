/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246748
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (-80 ? 80 : -105);

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((-(min(240, 9223372036854775807))));
        arr_3 [5] [5] = ((var_8 ? (((((-2098322813 ? (arr_1 [i_0]) : 13))) ? ((var_0 ? (arr_1 [i_0]) : (arr_0 [i_0]))) : 16760832)) : (((-(~1561178509))))));
    }
    #pragma endscop
}
