/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225026
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = min((!var_3), (max((~var_9), 2095104)));
    var_11 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = ((((min((arr_4 [1] [1] [1]), (arr_4 [i_0] [i_1] [i_2])))) ? (arr_0 [i_0]) : (((((-(arr_0 [i_0])))) ? (min((arr_5 [i_0] [4] [i_1] [i_2]), var_7)) : (((arr_3 [i_0] [16] [i_0]) ? (arr_0 [18]) : 4220142609))))));
                    var_13 = 19850;
                }
            }
        }
    }
    var_14 = ((!((max((!var_9), var_2)))));
    var_15 = -var_7;
    #pragma endscop
}
