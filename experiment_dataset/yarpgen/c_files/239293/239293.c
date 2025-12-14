/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239293
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
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] = (max((max((max((arr_8 [i_2] [i_2]), (arr_4 [i_1] [i_1] [i_1]))), (max((arr_1 [i_0]), (arr_7 [i_0] [i_0] [i_0] [i_0]))))), (((+((min((arr_0 [i_0]), (arr_2 [i_0])))))))));
                    var_12 += (arr_0 [i_2]);
                }
            }
        }
    }
    var_13 = (((-(var_6 || var_8))));
    #pragma endscop
}
