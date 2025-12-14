/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190961
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 -= 0;
        var_13 = (((((((arr_1 [i_0]) == 3690630576))) != 39)));
        var_14 = (max(((371725051 ? 3 : (((((arr_2 [i_0 + 1] [i_0]) && var_9)))))), ((min((((arr_0 [i_0]) & var_3)), ((8128 & (arr_1 [i_0]))))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            {
                arr_7 [i_1] [i_1] [i_1] = (((((arr_4 [i_1]) << (((max(32766, -951234561)) - 32764)))) << ((((((max(-28, 59))) >> 1)) - 112))));
                var_15 = (max(var_15, (arr_4 [i_2])));
            }
        }
    }
    #pragma endscop
}
