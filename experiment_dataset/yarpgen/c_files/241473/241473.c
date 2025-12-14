/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_12 = ((54371 - (((-247 + 2147483647) << (((-2384587845812940811 + 2384587845812940812) - 1))))));
                    var_13 ^= ((var_8 ? (arr_4 [i_2]) : ((((20385 < (115 - var_2)))))));
                    var_14 = var_0;
                    var_15 = ((((var_10 % (((arr_0 [i_1]) | 110))))) ? (((((max((arr_3 [i_0] [i_1 - 2]), var_8)) >= var_6)))) : (((arr_1 [i_1 - 2] [i_2 - 1]) + var_2)));
                    var_16 -= ((((arr_5 [i_2 - 1] [i_2] [i_2 + 1]) % ((27869 ? 758524831839676578 : var_1)))) > var_9);
                }
            }
        }
    }
    var_17 |= ((var_0 ? -2147483647 : (((((0 ? 864449513200561142 : 89))) ? 117 : (64 && 29141)))));
    var_18 = var_3;
    var_19 = 25448;
    #pragma endscop
}
