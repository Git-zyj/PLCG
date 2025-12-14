/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (!var_12);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = (!var_6);
        arr_2 [i_0] [i_0] = (-(arr_0 [i_0]));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_19 = (arr_1 [i_1] [i_1]);
        arr_5 [i_1] &= (arr_4 [i_1]);
        var_20 = ((~(max((min(14303771261422783012, 4142972812286768574)), (arr_4 [i_1 + 2])))));
        arr_6 [i_1] = (min(((((arr_4 [i_1 + 1]) ^ var_1))), (min((var_2 | var_1), var_1))));
    }
    #pragma endscop
}
