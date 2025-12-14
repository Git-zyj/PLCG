/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((!(((-(arr_3 [i_1]))))));
                var_11 = ((-((max((arr_2 [i_1]), (arr_2 [i_1]))))));
            }
        }
    }
    var_12 = var_6;
    #pragma endscop
}
