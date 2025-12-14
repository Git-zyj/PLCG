/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46482
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46482 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46482
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((64501 ? -32765 : 20180));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((!(~var_9)));
        arr_5 [i_0] [i_0] = (max(((-11731857013241027289 | (((8599 ? 8599 : 12963))))), (var_9 - var_8)));
    }
    #pragma endscop
}
