/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = ((((((~-91979370) | var_5))) == (max((arr_7 [i_0] [i_1]), (-24306 + -24314)))));
                    var_15 = (max(var_15, (((~((1 << (((arr_5 [i_0] [i_1] [i_2]) + 216496733)))))))));
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = ((~((var_10 * (var_6 && var_6)))));
    var_18 = ((var_7 == (var_6 != var_9)));
    #pragma endscop
}
