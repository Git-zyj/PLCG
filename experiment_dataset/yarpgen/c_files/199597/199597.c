/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_12 = ((((max(((((arr_1 [i_0] [i_0 - 1]) >= (arr_0 [i_0])))), ((7217310415908219631 ? 33292288 : 1))))) ? (((((arr_1 [i_0 + 2] [i_0 - 3]) <= (arr_1 [i_0 - 2] [i_0]))))) : (max((((var_4 ? (arr_0 [i_0 - 4]) : -1668665142))), (((arr_1 [i_0] [i_0]) + (arr_1 [i_0] [i_0])))))));
        var_13 = (min(var_13, ((~(((arr_0 [i_0 - 1]) ^ (-1668665142 & 193)))))));
        var_14 = (min(var_14, (((~(min((29332 * var_11), (0 && -2935328609715494192))))))));
        var_15 = arr_1 [i_0 - 2] [i_0 + 2];
    }
    var_16 = 1;
    #pragma endscop
}
