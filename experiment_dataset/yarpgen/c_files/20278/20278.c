/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = ((~(max(0, 31372))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 3852533344;
        var_13 = (max(var_13, 3716209853));
        var_14 += (((arr_2 [i_0]) ? (!1) : (arr_0 [i_0])));
    }
    #pragma endscop
}
