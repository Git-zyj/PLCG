/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= 42688;
    var_17 = ((var_2 < ((930267221 ? ((176 ? 2942 : var_7)) : ((var_15 ? 182 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((((max(187, 3)))) ? ((((max(183, 86))) & (~var_8))) : ((max((arr_4 [7] [i_0] [7]), (arr_8 [i_0]))))));
                    var_19 = ((~(((1482367731 % var_10) ? ((((!(arr_8 [11]))))) : 92))));
                }
            }
        }
    }
    #pragma endscop
}
