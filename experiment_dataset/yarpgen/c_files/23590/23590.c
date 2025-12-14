/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (((!-8912225684294299113) <= (((arr_0 [i_1]) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
                var_20 = (min((((!(var_6 - var_7)))), 8912225684294299109));
                var_21 -= -4154875778973550050;
                arr_6 [13] [i_0] = ((min((22309 || var_17), var_7)));
            }
        }
    }
    #pragma endscop
}
