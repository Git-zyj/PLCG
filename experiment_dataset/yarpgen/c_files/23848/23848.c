/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (max((min(((max(var_1, (arr_2 [i_0] [i_0])))), var_16)), ((min((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((~(((arr_1 [i_0] [i_0]) ? var_0 : (arr_0 [i_0])))));
    }
    var_18 *= ((2 ? -2 : 36));
    #pragma endscop
}
