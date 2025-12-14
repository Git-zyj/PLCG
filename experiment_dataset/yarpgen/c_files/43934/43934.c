/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 - 2] = (((((arr_3 [i_0 + 1]) ? 4291 : (arr_3 [i_0 - 1])))) ? ((((-9223372036854775807 - 1) ? 28318 : 268435456))) : (min(var_2, var_4)));
        var_11 = (max(var_11, (arr_2 [i_0 - 1] [i_0 + 2])));
    }
    var_12 = min(37205, 8193367614279040385);
    #pragma endscop
}
