/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -4693214913751556423;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_15 = ((((((-(arr_2 [i_0 + 3]))) + 2147483647)) >> ((((-(arr_4 [i_2] [i_0 - 1]))) - 3407941161))));
                    arr_8 [i_0 + 3] [i_1] [i_0 + 3] [i_2] = (((arr_2 [i_0 - 2]) / 4693214913751556423));
                }
            }
        }
    }
    #pragma endscop
}
