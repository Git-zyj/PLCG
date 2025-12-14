/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (min(((((max(var_0, var_12))) ^ var_9)), var_10));
                arr_6 [i_1] [i_1] [i_1] = (((-((var_6 ? var_5 : var_5)))));
                var_15 = (max(var_15, var_3));
            }
        }
    }
    var_16 = ((((62096 ? ((min(22631, 534))) : 42905)) * ((min(var_2, var_6)))));
    #pragma endscop
}
