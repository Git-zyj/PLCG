/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48167
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_18 *= (min((min((arr_0 [i_0] [i_0]), (max((arr_0 [i_0] [i_0]), var_3)))), ((max((arr_1 [i_0]), var_6)))));
        var_19 = ((51 && (((((arr_1 [i_0]) && (arr_0 [i_0] [i_0]))) && var_8))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {
                    var_20 = ((((arr_1 [i_3]) ? 7647373968557984601 : ((min(-268435456, 1))))));
                    var_21 *= (((arr_3 [i_2]) >= (((((var_5 ? (arr_5 [i_1] [i_2]) : var_6))) ? (max(207274611, -6344608359371577027)) : ((max((arr_8 [i_1]), var_13)))))));
                }
            }
        }
        arr_9 [i_1] [i_1] = (((((((var_1 || var_5) >= (arr_4 [i_1] [i_1]))))) != ((((max((arr_6 [i_1]), 14))) ? ((min((arr_7 [i_1]), (arr_3 [i_1])))) : var_11))));
    }
    var_22 = (((max(var_6, (max(1, var_1)))) - (((((var_6 ? 16711680 : var_5))) ^ (var_4 / var_10)))));
    var_23 = (min(var_23, ((((((~var_5) - (var_13 * var_17))) <= ((var_4 ? var_12 : (var_10 && 5267182197056889090))))))));
    #pragma endscop
}
