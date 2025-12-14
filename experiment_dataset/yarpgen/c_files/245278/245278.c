/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -3798578023996590409;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                var_18 = ((!(951407444 % 367719316)));
                var_19 = ((!(var_13 <= 1228755547)));
            }
        }
    }
    #pragma endscop
}
