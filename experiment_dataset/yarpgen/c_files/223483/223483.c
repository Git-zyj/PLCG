/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = (((var_5 - 239) + (1 + 4822016547498995190)));
                var_16 = (((((var_9 & (arr_5 [i_1] [i_0] [i_0])))) > ((13624727526210556426 >> (var_10 - 21420)))));
            }
        }
    }
    #pragma endscop
}
