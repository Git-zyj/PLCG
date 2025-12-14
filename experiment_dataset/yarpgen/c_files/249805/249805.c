/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -32758;
    var_16 = var_2;
    var_17 = 37444;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(var_18, var_2));
                    arr_9 [i_0] [i_1] [i_2 - 1] = (arr_1 [i_2]);
                    var_19 = (min(var_19, var_3));
                    var_20 = 11;
                }
            }
        }
    }
    #pragma endscop
}
