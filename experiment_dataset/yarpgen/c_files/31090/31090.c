/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(1, 7034345491949192902));
    var_17 = ((((((min(-1894459731, 26931)) < (min(var_14, var_15))))) / var_12));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_18 = (arr_1 [i_0] [i_0]);
        var_19 |= (max(60231, 5282));
        var_20 = min(1, (4294967295 <= 0));
        var_21 = (min(((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) << 5323))), (max((arr_1 [i_0] [i_0]), ((((arr_0 [i_0] [i_0]) || var_3)))))));
        var_22 = (arr_0 [i_0] [i_0]);
    }
    #pragma endscop
}
