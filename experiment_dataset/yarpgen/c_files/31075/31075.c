/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, 959665941));
                    arr_10 [6] [i_1] [1] [i_1] = (arr_9 [0] [i_1] [i_1]);
                    var_14 = (arr_9 [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    var_15 = (max(var_15, var_10));
    var_16 = (min(var_0, var_2));
    #pragma endscop
}
