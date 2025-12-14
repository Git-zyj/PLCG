/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, 4611685949707911168));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_13 = (min((((arr_1 [i_0] [i_0]) * (arr_1 [5] [i_0]))), 26));
        var_14 -= 0;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_15 -= ((-(!var_1)));
        arr_5 [i_1] = (arr_3 [i_1]);
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_16 ^= (!(arr_2 [22] [22]));
        var_17 = (((min(12443004786736472015, -var_0)) & (arr_2 [4] [20])));
    }
    #pragma endscop
}
