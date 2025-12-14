/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    var_12 = (((var_3 || var_3) ? var_4 : (min(8492670608426906563, -8492670608426906564))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0 - 1] = ((((min(var_4, (arr_0 [i_0 + 3]))) != ((((arr_1 [i_0] [14]) && (arr_1 [i_0] [i_0 - 2])))))) ? ((8492670608426906580 ? 8492670608426906563 : 8492670608426906563)) : ((max(var_2, (arr_0 [i_0])))));
        arr_3 [12] [12] = (((((arr_0 [i_0 - 1]) | (arr_0 [i_0 + 1]))) & ((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 2]))))));
    }
    var_13 = ((((((((var_1 ? var_6 : var_8))) ? (var_2 != 8492670608426906563) : var_6))) ? (((((var_10 + 9223372036854775807) >> (var_10 + 6416360036445091761))) ^ var_0)) : -var_7));
    #pragma endscop
}
