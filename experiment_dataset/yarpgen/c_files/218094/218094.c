/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= ((+(min((~var_14), ((65529 ? 77 : -1))))));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_14 * (((arr_0 [i_0] [i_0 - 1]) ? 0 : (arr_1 [i_0]))))) == ((-(arr_0 [i_0 - 1] [12])))));
        arr_3 [i_0] = ((((((((var_5 ? (arr_1 [i_0]) : var_4))) ? var_8 : ((min((arr_1 [i_0 + 1]), (arr_0 [i_0 + 1] [i_0]))))))) ? (((!((max(var_14, var_16)))))) : (min((min(var_16, var_0)), ((min(var_2, 102)))))));
        arr_4 [i_0] = ((((var_17 ^ (arr_0 [i_0 + 2] [i_0 - 2]))) ^ ((max((arr_0 [i_0 + 2] [i_0 - 4]), (arr_0 [i_0 - 2] [i_0 - 1]))))));
        var_19 = (max(var_19, ((min((arr_0 [i_0] [i_0 - 3]), (max(((4611686018423193600 ? var_5 : (arr_0 [i_0 - 3] [4]))), ((var_12 % (arr_0 [13] [i_0]))))))))));
    }
    #pragma endscop
}
