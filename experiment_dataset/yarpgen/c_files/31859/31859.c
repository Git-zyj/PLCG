/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_20 -= ((((min(1013924985, 1432956510))) ^ (min(var_2, 4937011165255350735))));
                    var_21 -= (((arr_1 [i_2]) & (((min((arr_5 [i_2] [i_1]), var_3))))));
                }
            }
        }
    }
    #pragma endscop
}
