/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((27886 ? (max(9196137786550212163, 29899)) : ((min(-29914, 33554424)))));
                    arr_10 [i_0] [6] [13] [i_2] = (arr_6 [i_0] [i_0] [i_0 + 1] [i_0]);
                    arr_11 [i_2] [i_0] = -29912;
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
