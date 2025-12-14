/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_7;
    var_16 = var_0;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = (arr_2 [i_0 + 2] [14]);
        arr_4 [i_0] [3] = ((((max((arr_2 [i_0] [i_0 - 1]), (arr_2 [i_0] [i_0 + 3])))) ? ((min((arr_2 [i_0] [i_0 + 2]), (arr_2 [i_0] [i_0 + 2])))) : (((arr_2 [i_0] [i_0 - 1]) ? 51800 : 112))));
        arr_5 [i_0] = (max((~var_13), ((max(25, (arr_1 [i_0] [i_0 + 1]))))));
    }
    #pragma endscop
}
