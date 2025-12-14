/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30792
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((var_8 ? var_7 : var_2))) % var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((var_9 ? (arr_2 [i_1] [i_1]) : ((min(((-110477907 ? var_9 : var_9)), 110477891)))));
                var_14 = ((-28619 ^ (((min((arr_1 [9] [i_0]), -110477882))))));
            }
        }
    }
    var_15 = var_4;
    #pragma endscop
}
