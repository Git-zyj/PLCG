/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((17104219322490424253 ? (228125675 && var_8) : var_6))) ? var_1 : (max(var_7, (-6535259839506104988 / var_12))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_4 [6] = ((((min(var_11, var_8))) ? (((0 ? (arr_1 [i_0]) : (arr_3 [i_0])))) : (max((arr_3 [i_0]), var_3))));
        arr_5 [i_0] [i_0] = (max(16384, (max((max(32752, var_10)), ((max(var_15, var_14)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_17 [i_1] [i_2] [8] [i_4] [i_1] = ((-((var_13 + (((arr_9 [i_4]) + var_13))))));
                        arr_18 [i_1] [i_2] = (((((!(arr_9 [i_2 - 3])))) << (((arr_7 [i_1]) - 37))));
                    }
                }
            }
        }
        arr_19 [i_1] = (((((~(~32762)))) ? 115 : (min(((max(var_5, -102))), ((0 << (var_5 - 3702)))))));
        arr_20 [i_1] = ((((max(10, 24546))) + (((arr_16 [i_1]) ? (arr_16 [i_1]) : (arr_16 [i_1])))));
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1)
    {
        var_17 = (arr_1 [i_5]);
        var_18 = 17104219322490424230;
    }
    #pragma endscop
}
