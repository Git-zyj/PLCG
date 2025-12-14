/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192424
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_18 = arr_2 [i_0];
        var_19 += ((((max(36569, 2790795208662051495))) ? (min((min(var_6, (arr_1 [i_0]))), (arr_1 [i_0 - 1]))) : (((arr_1 [i_0 - 1]) ^ (arr_0 [i_0 - 1])))));
        arr_3 [i_0 + 1] = (!32245);
    }
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_8 [i_1] = ((((~(arr_6 [i_1 - 3])))) ? ((((arr_6 [i_1 - 1]) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1 - 3])))) : (min((arr_7 [i_1 + 1]), var_15)));
        var_20 = (arr_6 [i_1]);
        var_21 = (62485 | -3);
    }
    var_22 = ((-4863085375312932677 ? 3 : ((~(var_1 / var_10)))));
    #pragma endscop
}
