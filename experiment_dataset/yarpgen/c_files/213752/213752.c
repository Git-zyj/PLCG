/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_3, var_0));
    var_11 = (~var_7);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_1 [i_0] [i_0])));
        var_13 |= (max((~-31280), (((31280 || (arr_1 [i_0] [i_0]))))));
    }
    var_14 &= var_5;
    var_15 = ((-(max((max(31275, var_2)), (((31283 ? -31280 : 31271)))))));
    #pragma endscop
}
