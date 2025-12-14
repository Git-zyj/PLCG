/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = (var_9 != var_8);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 = ((((max(var_5, (arr_0 [i_0])))) ? (((arr_1 [i_0]) & (((152 >> (((arr_0 [i_0]) - 106))))))) : (max((min((arr_0 [i_0]), var_7)), (((var_3 ? var_6 : 104)))))));
        var_16 = (((((arr_1 [i_0]) + (min(var_2, var_1)))) < (((!39) ? ((((arr_1 [i_0]) & 9223372036854775807))) : 8639607914649272654))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_10 [17] [i_1] [i_1] [0] [9] [i_1] = (arr_6 [i_0] [i_1] [i_0]);
                        var_17 = (((max((((var_3 ? var_6 : var_6))), ((var_5 ? var_12 : (arr_1 [i_1]))))) & var_10));
                        var_18 = (-127 - 1);
                        var_19 = (min(var_19, ((min((arr_3 [i_0] [5] [i_0]), (((((var_12 + (arr_9 [i_2] [i_2] [i_2] [i_2])))) ? (min(var_7, 11526)) : (arr_7 [i_3 + 3] [i_3] [i_3] [i_0] [i_3]))))))));
                    }
                }
            }
        }
        var_20 = (max((((max(var_8, var_2)))), (~9223372036854775807)));
    }
    #pragma endscop
}
