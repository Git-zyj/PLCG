/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_18 = ((min(10667227641383621130, (5 - 0))));
                arr_5 [i_0] [i_0] [i_1] = ((min(4294967285, 19)));
                arr_6 [i_0] [i_1] = ((!(((((max(var_7, var_3))) ? var_12 : 18)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2 + 2] [12] [i_1] [i_1] [i_2] = (min(((((1724684107 ? (arr_7 [i_0]) : 133)))), ((-(arr_12 [i_0] [i_2 + 2] [i_4 - 1] [i_3] [i_2 + 2] [i_0] [i_1])))));
                                arr_15 [i_3] [i_2] [i_3] [i_2] [i_2 - 1] [i_3] = (max((max(19691, (min(11878297349333238886, 123)))), (arr_4 [i_4] [i_3])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 = (min((max(var_8, (var_1 ^ 0))), (((((min(-1, 1724684117))) ? (min(19, var_8)) : (~-1724684107))))));
    var_20 = var_9;
    #pragma endscop
}
