/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 144115188075331584;
    var_12 = (((((var_3 != ((max(-778681590, 778681590)))))) - (max(((-778681585 ? 0 : var_2)), ((min(var_1, 127)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((!((((max((arr_1 [i_0]), 778681589)) * (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_14 = (((((arr_12 [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [4]) - (arr_12 [i_2 - 1] [i_2 + 2] [i_2 + 1] [i_2 - 1] [1])))) ? (((arr_4 [i_1]) ? (((arr_11 [i_0] [i_0] [16] [i_3] [i_3]) ? 100663296 : (arr_12 [i_0] [1] [16] [i_2] [i_3]))) : (((min((arr_0 [i_0]), (arr_9 [i_0] [10] [i_0] [13] [i_0]))))))) : ((max(((37 ? (arr_0 [2]) : 1)), -1098133211))));
                        var_15 = (((((-1 ? (min(18302628885634220031, (arr_1 [i_3]))) : (((-778681590 ? 1 : 22598)))))) ? ((max((min((arr_7 [i_0] [i_1] [19] [i_0]), -121)), (((-15 || (arr_5 [i_0] [i_1] [i_2] [i_3]))))))) : ((((arr_0 [i_2 - 1]) || (arr_0 [i_2 + 2]))))));
                    }
                }
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
