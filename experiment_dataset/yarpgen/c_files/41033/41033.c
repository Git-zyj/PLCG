/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41033
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41033 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41033
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(-16288, 32357))) ? 8796093022207 : (((~(~var_1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_15 = ((((13479894014094153565 <= (arr_0 [i_0] [i_0]))) ? 30208 : 18446735277616529430));
        arr_2 [i_0] = 60;
        arr_3 [i_0] &= ((0 ? 63394 : (arr_0 [i_0 + 1] [i_0 - 1])));
    }
    var_16 = (max(var_16, ((max(30274, var_10)))));
    var_17 *= max(1, (min(-var_1, (!-5744987528799051441))));
    #pragma endscop
}
