/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25001
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_5 ? ((((var_7 || (((3115771625093816446 ? 14333016157394149459 : 1134907106097364992))))))) : var_3));
    var_13 += (min(((max(var_9, var_2))), (((~((var_0 ? var_7 : var_9)))))));
    var_14 = ((var_8 || ((max(((8024548587559079617 ? 14333016157394149459 : -37)), (min(1203030855, 1134907106097364992)))))));

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_15 = (min(var_15, ((max((arr_0 [i_0]), ((var_11 >> (((arr_0 [i_0 - 1]) - 12572064068733064664)))))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_16 = ((((max(17311836967612186624, 3115771625093816446))) ? ((var_4 ? (max((arr_6 [i_2] [5] [5]), var_2)) : ((min(var_10, var_4))))) : (arr_2 [1] [i_0])));
                        arr_9 [i_2] [12] = (((((arr_4 [i_0 - 2]) >= (~var_3))) || ((((arr_4 [i_0 + 2]) ? (arr_5 [i_2]) : (arr_6 [i_2] [i_2] [i_2]))))));
                        var_17 = (max(var_17, ((max(((((((arr_4 [i_0 - 3]) >> (arr_6 [1] [1] [1])))) & (((arr_7 [i_0] [8] [i_1] [1] [8]) ? (arr_3 [i_1]) : (arr_0 [15]))))), (((var_11 & var_2) & (arr_8 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [16] [i_0 + 2]))))))));
                        var_18 ^= (arr_5 [14]);
                        arr_10 [i_2] [i_0] [i_0] [i_1 - 1] [i_2] [i_3] = var_5;
                    }
                }
            }
        }
        arr_11 [17] = ((+(min((arr_7 [i_0] [i_0] [i_0 - 2] [i_0 + 2] [i_0]), (arr_6 [4] [i_0] [i_0])))));
    }
    var_19 = var_8;
    #pragma endscop
}
