/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = (((arr_0 [i_0]) % -1565160967));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 *= (((arr_5 [i_0] [i_1] [i_0] [i_1]) ? (((arr_6 [i_0] [i_0] [i_0] [i_0]) | 1565160967)) : (var_8 + 14574)));
                    var_14 = (arr_1 [i_1]);
                }
            }
        }
        arr_7 [i_0] = ((arr_4 [8] [i_0] [i_0]) ? var_8 : (arr_4 [8] [i_0] [i_0]));
        var_15 = (arr_4 [2] [i_0] [i_0]);
    }
    for (int i_3 = 3; i_3 < 19;i_3 += 1)
    {
        var_16 = (min(((min((arr_9 [i_3 + 1]), (var_7 - 43805)))), (min((((var_7 + (arr_9 [i_3])))), var_6))));
        var_17 = (((((arr_8 [i_3 + 3]) && (184 && var_9))) ? (arr_8 [i_3]) : (((!var_6) ? (arr_9 [i_3 - 2]) : ((var_3 ? (arr_8 [i_3]) : (arr_10 [i_3])))))));
        var_18 = (max(var_18, var_6));
    }

    /* vectorizable */
    for (int i_4 = 1; i_4 < 7;i_4 += 1)
    {
        var_19 = (arr_4 [8] [8] [i_4]);
        var_20 = (((arr_9 [i_4 + 4]) + (arr_0 [i_4 + 4])));
    }
    var_21 = (max(var_21, ((max((((var_11 ? var_7 : var_11))), (var_2 >= var_8))))));
    var_22 = var_1;
    #pragma endscop
}
