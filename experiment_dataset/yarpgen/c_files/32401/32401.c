/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (((var_6 ? ((min(var_3, var_5))) : 7816652548529503232)));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = (min(0, 1));
        arr_4 [i_0] [i_0] = (((((min(var_4, var_5)) ? (arr_0 [23]) : 4294967295))));
    }
    #pragma endscop
}
