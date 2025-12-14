/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += (max(var_0, (max((min(var_4, var_11)), ((max(var_9, var_5)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (max((arr_1 [i_0 + 1]), (max(((max(38, 208))), (arr_3 [i_0] [6] [i_1])))));
                arr_5 [i_0] = var_4;
                arr_6 [i_0] [i_1] = (min((arr_2 [i_1] [i_1] [i_1]), ((min(var_9, (max(-2060455434, var_4)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_14 [i_0 + 1] [i_0] [1] [i_2] [i_0] = max((max(((max((arr_4 [i_0] [i_0]), (arr_7 [i_1] [i_2] [i_1])))), var_1)), (arr_11 [i_1] [i_1] [1] [i_1] [i_2]));
                            arr_15 [i_0 - 1] [i_2] = var_5;
                            var_17 = (max((max((arr_2 [0] [i_2] [i_0]), (arr_9 [i_0] [i_0]))), ((max((arr_13 [i_0 + 1] [i_1] [i_2] [3]), (max((arr_8 [i_0] [i_0] [i_2]), var_9)))))));
                            arr_16 [2] [2] [2] [i_2] = var_13;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
