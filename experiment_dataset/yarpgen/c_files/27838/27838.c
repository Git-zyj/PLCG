/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (!287104476244869120);
    var_12 = 167;
    var_13 = -var_6;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_14 = (min(var_3, 81));
                var_15 = (min(var_15, (arr_0 [i_0])));
                arr_4 [i_0] [i_0] [i_1] = ((0 ? (var_5 - 1) : (84 ^ 16)));
                arr_5 [i_0] = -var_8;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_16 = var_2;
                var_17 = ((!((min((!16), (~32))))));
                var_18 = (((1 ? 1 : 81)));
            }
        }
    }
    #pragma endscop
}
