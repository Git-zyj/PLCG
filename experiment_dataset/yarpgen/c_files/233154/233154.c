/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_10 += 5856055085344691602;
                var_11 = 1008057972;
            }
        }
    }
    var_12 = (min((!22), ((min(var_7, var_6)))));
    var_13 = (var_1 == (((-32767 - 1) ? 2145857170486997978 : 9249569833314089227)));
    #pragma endscop
}
