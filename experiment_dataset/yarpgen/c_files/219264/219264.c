/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (!((((min(var_7, var_8))) && ((max(var_2, -22))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 = (arr_6 [i_2] [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_14 = (arr_4 [i_1 - 1] [i_2 - 3]);
                        var_15 = arr_2 [14] [i_2];
                        var_16 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_17 = (min(var_17, ((((arr_2 [i_1 - 2] [i_2 + 1]) ? (arr_2 [i_1 - 1] [i_2 + 1]) : (min((arr_1 [i_1 - 2] [i_1 - 2]), (arr_12 [i_2 - 2] [i_1 - 1] [i_0] [17] [i_4 + 1]))))))));
                        var_18 = ((((((arr_8 [i_1 - 2]) - var_5))) ? (((arr_8 [i_1 + 1]) ? (arr_8 [i_1 - 2]) : (arr_8 [i_1 + 3]))) : (arr_8 [i_1 + 3])));
                        var_19 = ((((min(32751, (max((-127 - 1), (arr_11 [i_2] [i_4 + 1])))))) ? (((((var_1 ? (arr_6 [i_4 + 1] [i_1] [i_0]) : (arr_1 [i_2 - 2] [23])))))) : (((arr_11 [12] [10]) ? (((arr_12 [i_0] [i_0] [i_2 - 3] [i_4] [i_4]) ? var_11 : (arr_0 [i_0]))) : (((arr_6 [i_0] [i_1] [i_2]) ? (arr_1 [23] [i_4]) : var_3))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
