/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_18 = var_17;
        arr_2 [8] = (!2);
        arr_3 [i_0] = (arr_0 [i_0]);
        arr_4 [i_0] = ((-(max(11340311478822443480, (max(11340311478822443482, -113))))));
        var_19 = ((((1059650228 ? ((~(arr_0 [i_0]))) : (arr_1 [9]))) != (arr_0 [i_0])));
    }
    var_20 = var_5;
    #pragma endscop
}
