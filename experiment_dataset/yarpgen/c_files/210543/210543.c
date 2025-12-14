/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_0);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0 + 1] [i_0] = (var_4 ? -var_2 : var_6);
        arr_4 [i_0] [i_0 - 1] = (var_3 ? ((81 >> (var_3 - 10258236567844937889))) : var_8);
        arr_5 [i_0] = (!2048);
        var_13 ^= (((~var_5) >> ((977342895 ? 16 : 240))));
    }
    #pragma endscop
}
