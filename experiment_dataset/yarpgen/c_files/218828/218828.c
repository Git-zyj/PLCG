/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_18;
    var_20 = ((var_10 ? (120 % var_18) : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1 - 4] [i_1 - 4] [i_0] = -119;
                    var_21 = ((var_10 - (min((8703 & 12169826053280492390), -86))));
                    var_22 = (((((12169826053280492411 && var_4) || var_5)) || ((max(1, 3)))));
                }
            }
        }
    }
    #pragma endscop
}
