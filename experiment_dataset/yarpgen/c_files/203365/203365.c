/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_20 &= (((var_0 / -2147483642) | (((max(0, 1))))));
                arr_7 [i_0] [i_0] = (min((max((arr_3 [i_0] [i_0]), (!226))), (((-(((!(-9223372036854775807 - 1)))))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_21 = ((9223372036854775807 + (1 - var_18)));
                    var_22 ^= (!-var_11);
                    arr_16 [i_3] [i_3] [i_2] [i_2] = ((((248 ? (!var_17) : ((var_5 ? 18446744073709551615 : -9223372036854775790)))) | ((((((var_3 ? var_16 : 1))) ? 1 : (-22656 | -22656))))));
                }
            }
        }
    }
    var_23 |= var_17;
    #pragma endscop
}
