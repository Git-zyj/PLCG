/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_0] [5] = (max((arr_2 [i_0]), ((+(((-4881921880651539649 + 9223372036854775807) << (((var_4 + 5245524063740252774) - 27))))))));
                var_15 = (+(max((var_13 && var_6), (arr_5 [i_0 + 2]))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_16 += ((!((((!16711680) ^ 1)))));
                var_17 = ((-((~(~var_0)))));
            }
        }
    }
    #pragma endscop
}
