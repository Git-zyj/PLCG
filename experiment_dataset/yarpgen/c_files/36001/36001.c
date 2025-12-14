/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_11 += (min(65528, 2073103942329081962));
        arr_3 [i_0] = (((((15391542571954222193 ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 - 3])))) || -3890));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_6 [9] = 9264;
        var_12 = (max(var_12, 3840));
    }
    var_13 = (!var_0);
    #pragma endscop
}
