/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51777
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, -117));
    var_13 = (min(var_4, 18393505036733693623));
    var_14 = (max(32985348833280, -1));
    var_15 = (min(((min(27091, -2048))), (min(6459067814956829417, 24418))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 += 22623;
        var_17 += 37478;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 += (max((max(3445527113, ((min(-27092, 1055699646))))), 22616));
        arr_6 [i_1] = (max((max(-5364738597236260677, (-9223372036854775807 - 1))), ((max(((max(22630, 255))), (max(1, 1457834791)))))));
        var_19 += (max((min(5364738597236260676, 2147483647)), -1850));
        var_20 = 1055699657;
    }
    #pragma endscop
}
