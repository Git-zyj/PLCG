/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0 + 1]);
        arr_4 [i_0 + 2] = (arr_0 [3]);
        arr_5 [i_0] = (((~var_2) ? (((arr_0 [i_0]) ? ((-(arr_1 [i_0]))) : 198)) : 8217296870552749762));
        var_11 = ((((((arr_1 [i_0 - 3]) >= (arr_1 [i_0 + 1])))) >> (((max((arr_1 [i_0 + 1]), 1)) - 3753492840419641454))));
        var_12 += 5718984171570865;
    }
    var_13 = var_7;
    var_14 = (max(var_0, 8217296870552749781));
    var_15 |= (((max(4294967265, var_3)) == var_0));
    #pragma endscop
}
