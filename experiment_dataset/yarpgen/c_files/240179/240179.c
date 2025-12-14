/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240179
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((var_0 ? 2139095040 : 10)))) ? var_7 : 2147483647));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) && (arr_1 [i_0] [i_0])));
        arr_3 [2] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((-316022887 ? var_16 : (arr_1 [i_0] [5])));
        arr_5 [i_0] = 239;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        var_18 = ((min(var_16, (arr_0 [i_1]))) ^ ((~(~221))));
        arr_8 [i_1] = (max((((arr_0 [i_1]) ? var_3 : (arr_7 [i_1]))), (arr_7 [i_1])));
        var_19 = (min((1150928576 == var_7), (arr_0 [i_1])));
        var_20 ^= (min(var_6, (((min(-6251481070200707422, 809254612)) / ((((arr_1 [i_1] [i_1]) / (arr_1 [i_1] [10]))))))));
        var_21 = (+(((220 + 73) ? var_16 : var_1)));
    }
    #pragma endscop
}
