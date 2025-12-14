/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = ((((1158631774 ? 32761 : -1102627603)) <= 1));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_12 = (max(var_12, ((max((arr_1 [i_0 - 1] [i_0 - 1]), (min(var_9, (arr_1 [i_0] [i_0 - 1]))))))));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
    }
    #pragma endscop
}
