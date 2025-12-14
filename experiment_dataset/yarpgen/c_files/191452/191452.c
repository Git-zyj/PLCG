/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_18 = ((~((1 ? var_4 : ((max(var_9, 1)))))));
                    var_19 = ((((((arr_4 [i_0] [i_1] [i_0]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_1])))) ? ((var_10 ? var_5 : -90)) : ((min(38, var_14)))));
                    var_20 = ((var_7 + (arr_1 [i_0] [i_0])));
                    var_21 = (min(((((arr_4 [i_0] [i_1] [i_2]) | (arr_1 [i_0] [i_0])))), var_0));
                }
            }
        }
    }
    var_22 |= (max((!var_15), (max(((var_9 ? var_7 : var_13)), (((-117 + 2147483647) >> (var_1 + 105)))))));
    #pragma endscop
}
