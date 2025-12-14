/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_10 *= ((((((arr_0 [i_0 - 2]) ? (-1619235859 != 31256) : ((1 | (-2147483647 - 1)))))) + ((3889252292755641254 << (((arr_1 [2]) - 566492821923434942))))));
        arr_2 [i_0] [i_0] = (((min(((min(0, 1))), (min((arr_0 [i_0]), (arr_0 [i_0]))))) & 2147483647));
    }
    var_11 = var_7;
    #pragma endscop
}
