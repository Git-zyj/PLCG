/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_0 ? 16520712409109488977 : var_1));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_21 = (max((8286545867840971924 <= 108), (((arr_0 [i_0 - 1]) ? 7439924665401687839 : 1926031664600062639))));
        var_22 = ((~(!402653184)));
    }
    var_23 = ((var_12 ? var_7 : (((max(var_17, 10))))));
    var_24 = var_19;
    #pragma endscop
}
