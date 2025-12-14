/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_9, var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] [i_0] = (((((1 ? var_10 : (arr_1 [i_1])))) ? (-4320176494989999012 && 16383) : ((16394 ? -16383 : (-32767 - 1)))));
                arr_5 [i_1] [i_0] [i_0] = -2181667837;
                arr_6 [i_0] = ((3158 ? (max(var_15, (arr_0 [i_1]))) : ((min(-485451091, 16383)))));
                arr_7 [i_0] [6] [i_1] = (((var_8 ? (arr_3 [i_0] [i_1]) : -16384)) % var_14);
                arr_8 [8] [i_1] [i_1] = ((max(1, 16383)));
            }
        }
    }
    #pragma endscop
}
