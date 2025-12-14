/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((((((var_7 ? var_0 : var_0))) ? var_8 : (~var_2)))) ? ((((((6279320697885191985 ? -1 : 102))) ? (max(13588, 0)) : var_13))) : (((((var_7 + 9223372036854775807) >> var_3)) & (~var_1)))));
    var_15 = var_9;
    var_16 = (min(var_11, (((~6437676391833077983) ^ var_9))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (min(var_17, ((((((4294967295 ? (arr_3 [i_0] [i_0]) : (-127 - 1)))) ? (((var_4 ? (arr_1 [i_0]) : 65509))) : (arr_3 [i_0] [i_0]))))));
        arr_4 [i_0] = (!6279320697885191973);
    }
    #pragma endscop
}
