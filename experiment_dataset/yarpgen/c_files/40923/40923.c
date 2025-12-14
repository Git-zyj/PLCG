/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((var_13 ? var_1 : 0)));
    var_15 &= 4280747787;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((var_6 != (((max(var_5, var_3))))));
                    var_17 = var_5;
                    var_18 = ((((!(((var_5 ? 94 : var_5))))) ? var_1 : (arr_1 [i_0])));
                    arr_8 [i_0] [i_0] = var_4;
                }
            }
        }
    }
    var_19 = ((var_13 ? (((!var_2) ? var_9 : var_5)) : ((((var_3 != var_13) ? ((min(var_1, var_12))) : (var_3 & var_1))))));
    var_20 = var_7;
    #pragma endscop
}
