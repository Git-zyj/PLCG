/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;
    var_20 = (((((1 | var_15) ? 38 : ((var_17 ? 330370086 : 29412))))) ? var_3 : var_13);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [i_1] [i_1] = (min((max(((max((arr_4 [i_0]), (arr_4 [i_0])))), 686363412476826159)), ((max((arr_3 [i_1] [i_0]), 37390)))));
                    var_21 = (max(var_21, (((~(((!(arr_1 [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
