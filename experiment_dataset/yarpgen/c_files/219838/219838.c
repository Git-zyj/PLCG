/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!(((((min(94, 8768060520540451874))) ? var_1 : var_6))));

    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        var_13 &= ((min(var_0, -1)));
        var_14 = (min(var_14, ((min(11775366248416866579, 1)))));
        var_15 = ((((((arr_1 [i_0 + 4]) / (arr_3 [i_0])))) ? ((var_11 ? (arr_0 [i_0 + 3] [i_0]) : (arr_0 [i_0 - 1] [i_0]))) : ((min(1, 1)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_16 = (((((arr_6 [i_1] [i_1] [i_1]) ? var_5 : 12249571950300640309)) ^ (arr_9 [7] [i_3] [i_2] [7])));
                        var_17 = (((arr_8 [i_1]) ? (arr_8 [i_1]) : (arr_12 [i_4] [i_3] [i_1] [i_1])));
                    }
                }
            }
        }
        var_18 -= var_11;
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            {
                var_19 = ((~(((-(arr_19 [i_5] [i_6] [i_6]))))));
                var_20 += (min((arr_12 [i_5] [i_5] [i_5] [i_6]), (max((min(4271807597930800468, 0)), ((max(var_3, 63347)))))));
                var_21 = ((!(arr_17 [i_5] [i_6 - 1] [i_5])));
            }
        }
    }
    #pragma endscop
}
