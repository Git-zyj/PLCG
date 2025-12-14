/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    var_20 = var_0;
    var_21 = var_4;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = -5149781143749940266;
        var_22 = 204;
    }
    #pragma endscop
}
