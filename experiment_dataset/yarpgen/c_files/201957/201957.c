/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(84, 1330061266));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = ((((((((max(var_7, (arr_5 [i_0] [i_1] [i_2])))) != (min(6360574911317676312, var_6)))))) / (((-3567750793009707419 ? 13547838394786421305 : var_10)))));
                    arr_11 [i_2] [i_2] [i_2] = (max(((-((min((arr_2 [i_0] [1] [i_2]), 3031))))), ((max(var_7, var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
