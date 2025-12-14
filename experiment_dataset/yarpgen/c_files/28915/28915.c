/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [17] [i_2] [i_1] [i_0] = (((((((((arr_0 [19]) < var_5))) / ((min((arr_3 [i_2 - 2] [i_1 + 1]), var_6)))))) ? (arr_6 [i_0 - 1]) : ((min(1236989710, (-20 + var_7))))));
                    var_13 = (min(var_13, ((min((arr_1 [i_0 - 4]), (arr_4 [i_0]))))));
                }
            }
        }
    }
    var_14 = ((var_7 & (var_5 & var_6)));
    var_15 *= var_1;
    var_16 = var_0;
    #pragma endscop
}
