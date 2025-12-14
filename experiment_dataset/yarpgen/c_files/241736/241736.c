/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241736
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (min(var_20, ((min(var_14, ((min((~var_11), (((var_3 ? var_12 : 0)))))))))));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_21 = (arr_2 [1]);
        arr_3 [i_0] = ((~(max((((arr_2 [i_0]) >> (((arr_1 [i_0] [i_0]) - 29468)))), (((65535 ? 65535 : (arr_1 [3] [i_0 - 1]))))))));
    }
    #pragma endscop
}
