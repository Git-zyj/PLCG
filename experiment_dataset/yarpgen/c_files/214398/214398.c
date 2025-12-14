/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214398
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = 64;
                    arr_10 [i_0] [i_1] = ((0 ? ((1023 ? ((min(4094, var_4))) : (arr_4 [i_0] [i_0] [i_0]))) : 192));
                    arr_11 [16] [16] [i_2] [i_2] = ((1 ? 55515 : 5));
                }
            }
        }
    }
    var_20 = (min(var_20, (((var_18 ? (((((16 ? 1008807353 : -993))) ? (min(140737488355327, 140737488355327)) : -805275747)) : ((((((1011 ? 18446603336221196288 : var_2))) ? 27062 : 16399))))))));
    #pragma endscop
}
