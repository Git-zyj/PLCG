/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_13 = (arr_1 [4]);
        var_14 = 1;
        var_15 = (min((arr_1 [i_0]), (((arr_1 [i_0]) || ((251 < (arr_1 [i_0])))))));
        var_16 = (!255);
    }
    var_17 = min(1063047980, (min(127, 0)));
    var_18 = (min(var_18, 113));
    #pragma endscop
}
