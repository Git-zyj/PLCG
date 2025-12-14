/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((316428479 ? 316428456 : -6884003346029531657));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_14 = (min(var_14, 4451899145153940343));
            var_15 = (min(var_15, var_10));
        }
    }
    var_16 -= ((-(~var_12)));
    #pragma endscop
}
