/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 ^= -var_6;
        var_12 = (((min(-var_0, (arr_0 [i_0])))) ? ((-(2007992314 * 2286974988))) : var_7);
        var_13 += max(var_9, ((2256634165 ? 3003796282 : 3152388698)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_14 = ((var_3 / (arr_0 [i_1])));
        var_15 ^= ((((326597132 ? (arr_2 [i_1]) : var_0))) ? ((1077030673 >> (var_4 - 1961452362))) : var_8);
    }
    var_16 = 3152388715;
    #pragma endscop
}
