/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_12 *= ((((((arr_0 [i_2 + 1]) ? ((var_8 ? var_11 : var_5)) : ((max(var_6, var_11)))))) ? (((var_2 - (arr_2 [15] [i_0])))) : (var_8 * var_4)));
                    var_13 += (((((var_4 ? (max(var_4, var_9)) : (var_2 * var_5)))) ? ((var_8 ? 18446744073709551615 : var_0)) : ((max(-3106402744800773247, var_7)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 11;i_4 += 1)
        {
            {
                var_14 = (~(((((min((arr_9 [i_3]), var_5))) && var_9))));
                var_15 = var_7;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            {
                arr_19 [i_5] [i_5] = ((((min(var_3, var_6)) >> (var_4 - 8546961308438688188))));
                var_16 = ((var_1 * (((arr_15 [i_6] [i_5]) ? var_9 : 10636615044066740206))));
            }
        }
    }
    #pragma endscop
}
