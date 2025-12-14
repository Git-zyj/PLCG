/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [7] [i_2] [i_1] [i_0] = -15697;
                    var_17 = (min(var_17, (((min(var_1, (arr_4 [i_0] [4] [i_1])))))));
                    arr_10 [10] [i_0] [i_2 - 1] [i_0] = 1903780495;
                }
            }
        }
    }
    var_18 = ((-(max(var_14, 23245323480665032))));
    #pragma endscop
}
