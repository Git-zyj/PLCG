/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    var_11 = (max(var_11, (((max(22328, var_5))))));
    var_12 = ((max((var_0 != 4294967295), var_0)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [0] [11] = (max(var_9, (arr_5 [9] [i_1] [9])));
                    var_13 += -1353156047062129779;
                    arr_11 [8] [i_1] [i_1] [i_2] = (((var_8 == 17204) >> (((arr_4 [i_0] [i_0]) - 93))));
                }
            }
        }
    }
    #pragma endscop
}
