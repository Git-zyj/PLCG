/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= var_1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0]) > (max(((4294967295 ? var_14 : var_14)), (((!(arr_0 [i_0]))))))));
        var_18 = ((((min(4294967295, 4294967281))) ? (max(13282422821146640387, 12)) : (min(13282422821146640384, (arr_0 [i_0])))));
        arr_2 [i_0] = (var_2 < 109);
        var_19 = max((((((max(var_3, (arr_0 [i_0])))) <= var_14))), (arr_0 [i_0]));
    }
    #pragma endscop
}
