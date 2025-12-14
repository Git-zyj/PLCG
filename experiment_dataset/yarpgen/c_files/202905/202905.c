/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        var_19 |= (((min((arr_0 [i_0]), 0)) > (!0)));
        var_20 = (max(var_20, (((4294967266 >> (((((min(var_5, -7))) != (((-32767 - 1) ^ -1))))))))));
        arr_2 [i_0] = 1;
    }
    var_21 = var_5;
    #pragma endscop
}
