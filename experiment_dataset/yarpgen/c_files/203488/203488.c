/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += var_2;
    var_20 = var_9;
    var_21 = var_12;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (arr_1 [7]);
        var_23 = ((-17923 ? ((max((arr_1 [i_0]), 17923))) : ((min(var_0, 17923)))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_4 [i_1] = (min(((~(arr_0 [i_1]))), (arr_0 [i_1])));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    var_24 *= (arr_9 [i_1] [11] [i_3 + 1] [i_3 + 1]);
                    var_25 = ((((((arr_10 [i_1] [i_1] [i_1]) ? (arr_10 [i_3] [i_3] [i_3]) : ((max((arr_6 [i_1] [i_2]), var_13)))))) ? (arr_3 [i_3]) : ((~((min(47612, 47612)))))));
                    var_26 = (max(var_26, ((max(((max((arr_9 [i_3 + 2] [1] [i_3] [i_2]), var_6))), ((47612 ? 1 : 60930)))))));
                }
            }
        }
        var_27 = (max(var_7, var_12));
        var_28 = (arr_7 [i_1] [9] [i_1]);
    }
    #pragma endscop
}
