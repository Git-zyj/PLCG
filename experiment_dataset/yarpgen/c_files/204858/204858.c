/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (((((19636 ? var_6 : 32767))) ? ((5577317700131914411 ? var_0 : (arr_3 [i_0]))) : var_10));
                    var_11 = (arr_2 [i_0]);
                    var_12 = var_2;
                    arr_11 [i_0] [5] [i_0] [i_0] = (arr_0 [i_0 + 2] [3]);
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_13 = (((arr_5 [i_0 - 1]) ? var_3 : var_2));
                        var_14 = ((var_4 ? (arr_13 [i_5] [i_4 - 1] [i_0]) : (arr_13 [7] [i_4 - 2] [7])));
                        var_15 = (((arr_9 [i_0 + 1] [i_4 - 1]) ? (var_0 != var_8) : 5577317700131914411));
                        var_16 += (((arr_6 [i_4 - 2]) % (arr_18 [i_4 + 1] [i_3] [i_4] [i_5 - 1])));
                    }
                }
            }
        }
        arr_21 [i_0] = -17;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        arr_26 [i_6] [9] = var_9;
        var_17 = (max(var_17, ((((arr_25 [i_6]) ? 2097151 : ((~(arr_23 [i_6] [i_6]))))))));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_29 [i_7] = (var_6 < 197);
        var_18 = (((arr_28 [i_7]) | (arr_28 [i_7])));
    }
    var_19 = (max(var_19, (((var_7 ? ((min(5577317700131914411, var_5))) : (((~((max(var_5, var_5)))))))))));
    #pragma endscop
}
