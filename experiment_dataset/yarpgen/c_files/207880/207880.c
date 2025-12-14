/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((37 >> (62 - 37)));
    var_17 = ((-61 ? 1 : -110));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = -103;
        arr_3 [i_0] = (max(-104, 3919050832));
    }
    #pragma endscop
}
