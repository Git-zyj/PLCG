/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((var_8 + 2147483647) << (var_9 - 2049472418)));

    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        var_20 = (min((min(245, ((4294967295 & (arr_1 [i_0 + 1]))))), 1));
        var_21 = (min(var_21, 1));
        arr_2 [8] = (!-704533985);
    }
    var_22 = ((+(max((4294967286 ^ var_12), ((min(var_8, var_17)))))));
    var_23 = (((((var_14 + var_7) << (27321055 - 27321042))) < ((((max(var_11, var_10))) ? 0 : (var_2 || var_10)))));
    #pragma endscop
}
