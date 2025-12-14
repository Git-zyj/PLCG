/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_20 = (((136 ? 3 : 111)));
                    arr_10 [5] [3] [9] = ((-((-(arr_0 [i_2 + 1] [i_2 + 3])))));
                }
            }
        }
    }
    #pragma endscop
}
