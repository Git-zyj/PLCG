/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_11 = (max((max(((var_9 ? var_4 : var_10)), ((min(var_3, (arr_7 [i_1] [i_1] [i_2] [i_0])))))), ((-(~2519451289250244813)))));
                        var_12 = (min((arr_0 [i_0] [i_2]), (min((arr_0 [i_0] [i_0]), (max(84894065108806528, var_10))))));
                    }
                    arr_8 [i_0] [i_0] [i_0] [i_0] = arr_1 [i_1];
                    var_13 = (((((~(min(var_3, (arr_4 [i_0] [i_1] [i_1] [i_0])))))) ? ((-(((arr_4 [i_2] [i_2] [i_2] [i_0]) ? (arr_2 [i_0] [i_0] [i_0]) : (arr_0 [i_2] [i_1]))))) : (arr_5 [i_0] [i_1] [i_1])));
                    var_14 = (min((arr_1 [i_0]), (arr_2 [i_0] [i_1] [i_0])));
                }
            }
        }
        var_15 = (max(var_15, ((((!(((-(arr_2 [i_0] [i_0] [0]))))))))));
    }
    var_16 = 84894065108806528;
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            {
                var_17 = (arr_13 [i_4] [i_4]);
                var_18 = (min(((((arr_13 [i_4] [i_4]) == ((min(0, (arr_11 [i_4] [i_4]))))))), ((~(min((arr_11 [i_4] [i_4]), (arr_9 [i_4])))))));
            }
        }
    }
    #pragma endscop
}
