/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_20 = -9;
        var_21 = ((((!(arr_1 [i_0] [i_0]))) ? (max(var_3, (arr_0 [i_0]))) : ((var_19 ? (min(var_3, var_12)) : (arr_1 [i_0] [12])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_22 = (max(var_22, 3902264875));
        var_23 = (arr_3 [i_1]);
        arr_4 [i_1] = (arr_2 [11]);
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    arr_14 [i_2] [7] [1] = (min((max((arr_10 [i_2] [i_3 + 1]), (arr_7 [i_2] [i_2]))), ((max(var_13, (arr_3 [i_3 - 1]))))));
                    var_24 = (max(var_24, ((max(473, (~var_1))))));
                }
            }
        }
        arr_15 [i_2] [i_2] = (max((((392702420 ? 983290273 : 8317534902650490391))), (max((arr_12 [i_2] [i_2] [i_2] [i_2]), ((var_10 ? (arr_0 [i_2]) : var_1))))));
    }
    var_25 |= var_13;
    #pragma endscop
}
