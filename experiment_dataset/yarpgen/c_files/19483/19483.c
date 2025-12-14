/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19483
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_16 = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (arr_0 [i_0] [i_0])));
                    var_18 = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
        var_19 = (min(var_19, (arr_6 [i_0] [i_0] [i_0] [12])));
    }
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_9 [11] = (min(((min((min(106, (-127 - 1))), (arr_5 [i_3] [i_3] [i_3])))), (max(1638812252295955501, 1203268179))));
        var_20 = (max((min(((max((arr_3 [i_3 - 1] [i_3 - 1] [i_3 - 1]), (arr_4 [i_3])))), (arr_0 [13] [i_3]))), (max((min((arr_0 [i_3] [i_3]), (arr_3 [i_3] [i_3] [i_3 - 1]))), (min((arr_0 [0] [0]), (arr_1 [i_3])))))));
        var_21 = (arr_8 [1]);
        var_22 = (max(var_22, ((min(((min((max((arr_3 [i_3] [i_3] [i_3]), (arr_0 [17] [17]))), (arr_6 [i_3] [i_3 - 1] [i_3] [9])))), (min((arr_4 [i_3 - 1]), (arr_8 [i_3]))))))));
    }
    var_23 = var_9;
    var_24 = var_7;
    var_25 = var_0;
    #pragma endscop
}
