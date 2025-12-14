/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((~-6913498799355313293), (-127 - 1)));
    var_11 = ((((min(var_5, (~-7950499460196765191)))) ? (min(4046215401035662584, ((max(var_1, var_2))))) : var_9));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_12 = (min((max(var_6, (min(-6087262686660063498, -6913498799355313293)))), (((min(7950499460196765180, 3768489081)) % -13273))));
        var_13 = (((arr_1 [i_0]) & (((((min(105, 1)))) & (~4611686018427256832)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (min((~32756), (arr_2 [i_1])));
        var_15 = (((min(32726, (arr_3 [i_1] [i_1]))) > (((arr_3 [i_1] [i_1]) - (arr_3 [i_1] [i_1])))));
    }
    #pragma endscop
}
