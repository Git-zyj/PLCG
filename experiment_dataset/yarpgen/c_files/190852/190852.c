/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(2054943581, 387252188);
    var_21 = -774;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (((2054943579 ? 4294967295 : 4294967276)));
        arr_3 [i_0] = (((max(var_16, ((max(1305811989, (arr_0 [i_0] [i_0])))))) - 1879048192));
    }
    #pragma endscop
}
