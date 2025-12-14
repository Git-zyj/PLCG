/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((!(((min(var_11, var_4))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_10 [i_2] = (((((var_1 ? var_4 : var_3))) >= (arr_1 [9])));
                    arr_11 [11] [11] [11] [i_0] = 242;
                    var_15 = (arr_3 [i_0] [i_0]);
                }
            }
        }
    }
    var_16 = (min(var_16, var_0));
    #pragma endscop
}
