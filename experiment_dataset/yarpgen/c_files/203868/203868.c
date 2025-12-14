/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_10 += (((((var_6 ^ (arr_3 [i_1])))) ? (min((min(-15515, 12774563803596290412)), var_9)) : ((((!(arr_6 [i_0] [i_0])))))));
                    var_11 = 14394;

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_12 = (((!var_7) ? (((((arr_6 [i_1] [i_1]) && var_1)) ? ((var_9 ? var_0 : var_1)) : (((var_9 ? (arr_4 [i_0]) : var_8))))) : (var_7 && 1589667077)));
                        var_13 += (var_8 && var_7);
                        var_14 = ((var_1 ? (arr_5 [i_0] [i_1] [i_2] [i_3]) : ((min(((max((arr_2 [i_3]), 13640))), (arr_7 [i_3] [i_3] [i_2] [i_0] [i_0]))))));
                        var_15 = (min(((var_6 ? var_9 : var_4), (-26635 & 26663))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        var_16 = ((var_6 || ((((arr_0 [i_4]) ? (arr_4 [i_0]) : 51896)))));
                        var_17 = (!-1662826411);
                    }
                }
            }
        }
    }
    var_18 = (((((-(min(var_1, var_2))))) ? (((((((var_5 ? var_4 : var_8))) && var_9)))) : var_0));
    var_19 |= (max(var_3, ((max(var_9, var_9)))));
    #pragma endscop
}
