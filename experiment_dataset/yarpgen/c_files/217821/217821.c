/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_10 = (((arr_1 [i_0] [i_0]) ? ((((-1479482307 == (arr_2 [i_0] [i_1] [i_0]))))) : (max((max(var_4, (arr_4 [i_0] [i_1] [10]))), 1))));
                    arr_7 [i_2] [i_2] = -7156;
                }
            }
        }
    }
    var_11 = var_6;
    var_12 = ((var_1 ? var_7 : ((1 ? var_9 : (((var_3 ? 59460 : var_7)))))));

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        arr_11 [i_3] = var_7;
        arr_12 [i_3] [i_3] = ((((min(((var_0 ? var_4 : (arr_9 [i_3] [i_3]))), ((min(7156, 0)))))) ? ((max((arr_9 [i_3 - 1] [i_3 - 1]), var_2))) : ((((max(var_3, var_6))) ? 0 : (arr_10 [i_3])))));
    }
    #pragma endscop
}
