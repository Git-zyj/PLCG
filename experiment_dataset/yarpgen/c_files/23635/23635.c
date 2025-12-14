/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23635
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 = ((-29104 ? (max(((~(arr_0 [i_0] [i_0]))), ((~(arr_0 [i_0] [i_0]))))) : ((min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_18 = (max(var_18, 9));
    }
    var_19 = var_5;
    var_20 = (min(var_20, (var_10 && -9223372036854775780)));
    #pragma endscop
}
