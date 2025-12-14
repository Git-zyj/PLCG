/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_0;
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_11 [i_1 + 1] [i_1 + 2] [i_0] = (i_0 % 2 == zero) ? ((((((max(var_7, (arr_7 [i_0] [i_1 - 1] [i_1] [i_2]))))) || ((((arr_0 [i_0] [i_1]) ? ((((arr_9 [i_0] [i_1] [i_1 + 2]) << (((arr_6 [i_0] [i_0]) - 10594))))) : 62478914)))))) : ((((((max(var_7, (arr_7 [i_0] [i_1 - 1] [i_1] [i_2]))))) || ((((arr_0 [i_0] [i_1]) ? ((((arr_9 [i_0] [i_1] [i_1 + 2]) << (((((arr_6 [i_0] [i_0]) - 10594)) - 2777))))) : 62478914))))));
                    arr_12 [i_0] [i_1 + 1] [i_1] = (~((((arr_0 [i_0] [i_0]) && 1174922367))));
                    arr_13 [i_0] [i_0] = (arr_8 [i_0]);
                }
            }
        }
    }
    var_22 *= 4294967284;
    #pragma endscop
}
