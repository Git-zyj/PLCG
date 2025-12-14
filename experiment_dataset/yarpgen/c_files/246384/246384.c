/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = (((min(((var_6 * (arr_1 [i_0] [i_0]))), (~var_15))) * (arr_2 [i_0])));
        var_21 = ((!(10554 >= 54993)));
    }
    #pragma endscop
}
