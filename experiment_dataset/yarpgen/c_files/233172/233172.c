/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((-127 ? 15 : 21)), -84));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] = 121;
                    arr_9 [i_0] [i_1] [i_0] = ((((((min(var_4, (-127 - 1)))) + (arr_7 [i_0] [i_0] [i_0 + 4] [i_0]))) & ((((arr_2 [i_0 + 1]) <= (arr_5 [i_0 + 1]))))));
                    arr_10 [i_0 + 2] [i_0 + 2] [i_2] |= (min((((var_0 <= -109) ? -55 : ((115 % (arr_5 [i_1]))))), ((var_7 ? var_3 : (arr_1 [i_1] [i_1])))));
                    arr_11 [i_0] [i_1] [i_1] [i_1] = var_12;
                    arr_12 [i_0] [i_1] [i_1] = var_10;
                }
            }
        }
    }
    var_19 = min(((max(var_10, var_2))), var_6);
    #pragma endscop
}
