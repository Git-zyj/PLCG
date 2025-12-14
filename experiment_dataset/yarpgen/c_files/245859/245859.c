/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((!var_11), (min(var_12, -1252564384))));
    var_15 += (min((min((((var_11 ? -2125690067 : 22438))), (max(var_7, var_2)))), var_12));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (((((22438 >> (var_0 - 48864))))) ? (max(22438, (((arr_0 [i_0]) ? var_1 : (arr_1 [i_0] [15]))))) : (max(var_11, (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 22438)))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] = (max((min(((1 ? 43098 : 1)), (arr_0 [i_0]))), (((min((arr_0 [i_1]), var_4))))));
            arr_5 [i_0] [7] [5] = (((((min(13363, (arr_1 [24] [i_1])))) & ((43079 ? 1 : (arr_0 [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_1] [1] [i_0] = (min(var_5, (((arr_8 [i_3] [23] [i_2] [i_1] [i_0] [20]) ? ((127 ? 1 : 1)) : 17033))));
                        var_17 = arr_3 [i_0] [i_0];
                        var_18 = (max(var_18, (((!(arr_6 [i_0] [i_1] [i_1] [i_0]))))));
                    }
                }
            }
            arr_11 [i_0] [i_0] [i_0] = (min((((!((min((arr_3 [1] [i_0]), var_10)))))), ((((52412 >> (((arr_0 [i_0]) - 52)))) >> ((((min(-8192, (arr_8 [2] [i_1] [i_1] [2] [i_0] [6])))) + 8214))))));
        }
    }
    var_19 = ((((1 >> 1) ? (((226209917 ? var_8 : 1))) : (min(var_6, var_11)))));
    var_20 = ((((min(6405, var_2)))) ? ((min((max(-31898, 43097)), (min(13109, 22438))))) : var_1);
    #pragma endscop
}
