/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 += ((((max(2020042542, var_11))) ? var_10 : 13175985623616165372));
                var_17 = (max(var_17, ((((((!(arr_0 [i_0 + 1] [i_0 - 1])))) | (arr_1 [0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
