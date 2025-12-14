/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((((((-780747911 ? 15776471548852534348 : ((var_16 ? var_13 : (arr_3 [i_0] [i_1])))))) ? ((((!(!var_4))))) : ((((min(var_15, var_2))) ? (min((arr_3 [i_1] [i_1]), var_11)) : var_7)))))));
                    var_21 = var_3;
                    var_22 += arr_8 [9] [9] [i_2] [9];
                    var_23 = (max(var_23, ((min((!-1879149270993039959), ((!((max(1, 2384375124804944824))))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_0] = (~2577753143);
                }
            }
        }
    }
    var_24 = (min((((~58720256) ? ((var_14 ? var_16 : var_5)) : (var_10 | var_16))), ((((var_8 || var_7) ? ((var_0 ? var_2 : var_4)) : (1072693248 && var_19))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    arr_16 [6] [i_4] [6] |= (((~1155173764221476301) ? var_14 : (!-1216575750)));
                    var_25 = (max(var_25, (((var_12 ? (min(var_3, ((var_12 ? (arr_10 [1]) : var_11)))) : (((-109 ^ ((min(var_12, 255)))))))))));
                }
            }
        }
    }
    var_26 |= 87;
    #pragma endscop
}
