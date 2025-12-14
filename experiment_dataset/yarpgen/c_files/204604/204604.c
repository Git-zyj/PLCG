/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = (arr_8 [i_0 + 1]);
                    arr_10 [2] [i_0] [i_2] [i_2] = (((((var_9 ? (arr_3 [i_0 + 1] [i_0 - 2]) : (arr_6 [i_0] [i_0] [i_1 + 4] [i_1 + 2])))) ? (min(var_7, (arr_0 [i_0 - 2] [i_1 - 1]))) : (((min(1, 1))))));
                }
            }
        }
    }
    var_10 = (((var_5 ? (max(234, var_6)) : ((-1 ? var_6 : 0)))));
    #pragma endscop
}
