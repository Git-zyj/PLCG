/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (var_17 - var_0);

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((((arr_0 [i_0 - 1]) ? (arr_0 [i_0 - 1]) : -3492398987173058930)));
        arr_3 [18] = (((((var_6 ? ((((arr_1 [i_0] [i_0 + 1]) ? var_0 : (arr_0 [i_0])))) : (arr_1 [i_0] [i_0])))) ? var_15 : (min((arr_1 [i_0] [i_0]), (max(3492398987173058930, -3492398987173058930))))));
        arr_4 [i_0] [i_0] = ((~((-var_13 * ((-(arr_0 [i_0])))))));
        arr_5 [i_0] [i_0] = ((((((-4278786720153460127 ? 1377589809 : 3347113945)) - var_19)) - (arr_1 [i_0 + 1] [i_0])));
    }
    #pragma endscop
}
