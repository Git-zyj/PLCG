/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_14 = (min(var_14, (((((((arr_0 [i_0 + 1]) != (arr_1 [i_0 - 1])))) <= ((((min(-13237, 16620840546223129391))) ? (!1) : (arr_0 [i_0 - 1]))))))));
        var_15 ^= ((((!((!(arr_0 [i_0]))))) || 38));
    }
    #pragma endscop
}
