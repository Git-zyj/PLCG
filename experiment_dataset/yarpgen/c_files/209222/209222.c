/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209222
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = ((-(min((arr_0 [15]), (((arr_1 [6] [2]) ? var_1 : (arr_1 [i_0] [i_0])))))));
        var_16 = (((((((59047 ? -669033819 : 6488))) ? 6502 : 12530659625072635036)) != ((min((((1 ? 59047 : 1))), (min(59047, -7809547595007261175)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_17 = (!91);
        var_18 = (min(var_18, 128999186501135626));
    }
    var_19 = min((((max(24027, 622946220)))), (max(((min(13696, var_8))), ((var_13 >> (var_13 - 7386977033741205415))))));
    #pragma endscop
}
