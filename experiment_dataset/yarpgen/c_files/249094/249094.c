/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_15;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 &= (max((arr_1 [i_0]), (min(((((arr_1 [i_0]) >= (arr_1 [i_0])))), (((arr_0 [1] [i_0]) ? -1 : (arr_1 [i_0])))))));
        arr_2 [i_0] = max((((-1816842095 ? 1816842091 : 54728))), 31);
    }
    var_22 |= var_8;
    #pragma endscop
}
