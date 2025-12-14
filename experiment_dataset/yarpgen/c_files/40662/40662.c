/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    var_14 = var_3;
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0] [i_0]), ((32160 ? (arr_1 [i_0]) : -21614))));
        arr_3 [i_0] [i_0] = ((31960 <= (((arr_0 [16] [i_0]) ? (arr_0 [i_0] [i_0]) : 32167))));
        arr_4 [i_0] [i_0] = (min(-4022009565734424099, ((min(-27632, 32160)))));
    }
    var_16 ^= var_8;
    #pragma endscop
}
