/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_2));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = (arr_2 [i_0] [i_1] [i_1]);
                    var_15 = -1664;
                }
            }
        }
    }
    var_16 = var_12;
    var_17 = ((min(var_4, (var_4 ^ var_12))));
    var_18 = (!((min((((var_2 >> (205 - 175)))), (~8700405671533525801)))));
    #pragma endscop
}
