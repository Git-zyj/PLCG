/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((-(0 < -32749)));
                arr_7 [i_1] [i_1] [i_1] = ((+((max((max((arr_3 [i_1]), var_2)), -27121)))));
            }
        }
    }
    var_15 = -39;
    var_16 = ((((!-1) && ((max(var_9, var_4))))));
    #pragma endscop
}
