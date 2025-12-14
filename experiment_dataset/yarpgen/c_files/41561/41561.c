/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 14541220237241679559));
    var_15 = var_7;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] [12] = (arr_1 [4] [i_0]);
        arr_3 [i_0] [i_0] = (i_0 % 2 == zero) ? (((arr_1 [i_0 - 2] [i_0]) << (((arr_1 [i_0 - 2] [i_0]) - 9266531823390722497)))) : (((arr_1 [i_0 - 2] [i_0]) << (((((arr_1 [i_0 - 2] [i_0]) - 9266531823390722497)) - 1276189510021594305))));
        var_16 = (min(var_16, (~-20746)));
        var_17 = (max(var_17, (arr_1 [i_0 + 1] [14])));
    }
    #pragma endscop
}
