/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = 1898377665959771844;
                    arr_7 [i_0] [i_1] [4] = (arr_0 [i_2 - 1]);
                    var_17 ^= ((~((5270935607314726082 ? (arr_5 [i_1] [i_2 - 1] [14] [10]) : 11499))));
                }
            }
        }
    }
    var_18 = ((var_6 ? var_12 : (max((~-11499), (~31)))));
    #pragma endscop
}
