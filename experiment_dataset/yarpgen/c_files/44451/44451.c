/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_21 = (max(var_21, ((((arr_0 [i_0 + 2]) ? (((arr_1 [i_0] [i_0 + 2]) + -105)) : (var_6 != 5348464470481583103))))));
        var_22 = (max(var_22, ((((arr_0 [i_0]) && (23899 / 13098279603227968499))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_4 [i_1] = ((((((arr_2 [i_1]) >> (var_13 - 65)))) ? ((8192 + (arr_2 [i_1]))) : (arr_2 [i_1])));
        var_23 = var_7;
    }
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        var_24 = (min(var_24, (arr_6 [i_2])));
        var_25 = (((max(1105185511, 65528)) + -57343));
    }
    var_26 = var_9;
    var_27 = 2356989972;
    #pragma endscop
}
