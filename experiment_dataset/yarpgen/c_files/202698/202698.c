/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 += (max(((min((min(var_2, var_1)), (((1 >> (var_1 - 1081156417))))))), (((arr_5 [i_0] [i_1 + 3] [i_1 + 3]) ? (arr_8 [i_1 + 2] [20]) : (max(var_8, var_4))))));
                    var_12 = (((((~(1 & var_3)))) && ((min(1, (max(var_9, 12524995152196081297)))))));
                    var_13 *= var_4;
                }
            }
        }
    }
    var_14 *= ((((max(-1, (var_4 || var_8)))) ? var_1 : ((var_1 ? (var_5 || 1) : (!var_4)))));
    var_15 = -111;
    #pragma endscop
}
