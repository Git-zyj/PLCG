/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_12 || (max((!var_13), (0 || 173)))));
    var_15 += var_6;
    var_16 = (min(var_16, var_6));
    var_17 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_18 = (-((-2066084055 / ((-430737532 ? var_2 : -2066084053)))));
                    var_19 = ((!(~8423630419399307574)));
                }
            }
        }
    }
    #pragma endscop
}
