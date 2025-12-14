/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= (((((min(60185, var_13)))) ? ((var_3 << (((~var_9) + 56076)))) : 20616));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 22;i_2 += 1)
            {
                {
                    var_15 = (i_0 % 2 == 0) ? ((((((arr_3 [i_0]) << (var_8 - 105))) << ((((var_1 | (((arr_3 [i_0]) - (arr_0 [i_0 - 1]))))) - 2127380282961946524))))) : ((((((arr_3 [i_0]) << (var_8 - 105))) << ((((((var_1 | (((arr_3 [i_0]) - (arr_0 [i_0 - 1]))))) - 2127380282961946524)) - 7800032817088991204)))));
                    arr_9 [i_0] [i_1] [i_2] &= (((arr_3 [i_2]) ? (((!(arr_6 [i_2 - 4] [i_2 - 4] [i_2 - 2] [i_2 - 4])))) : ((var_9 ? (((arr_1 [i_0] [i_2]) ? var_3 : var_2)) : ((min(27368, 27353)))))));
                    var_16 = ((min(-353564538, var_10)));
                }
            }
        }
    }
    #pragma endscop
}
