/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (-1274263290 == -17949);
        arr_4 [i_0] [i_0] = 1274263266;
        arr_5 [i_0] = 1274263292;
        arr_6 [i_0] = -1274263285;
    }
    #pragma endscop
}
