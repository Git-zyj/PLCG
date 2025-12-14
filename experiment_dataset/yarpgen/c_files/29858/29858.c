/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= -var_8;

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_1] = (((((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 2]))) + 2147483647)) >> (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3]))) + 1672507200))));
            arr_8 [i_0] [i_0] = min(((((arr_2 [i_0] [i_1]) ? -4294967293 : ((3619291228 ? -7414375922734409959 : 4))))), (min(((var_15 ? 9222809086901354496 : 252)), (arr_2 [6] [6]))));
        }
        arr_9 [i_0] [i_0 + 1] = (max((arr_0 [8]), ((3640467053712902187 + ((min((arr_1 [i_0 - 2]), 2248975631)))))));
    }
    #pragma endscop
}
