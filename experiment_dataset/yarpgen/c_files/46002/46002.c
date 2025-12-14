/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0 - 2] = ((((105 ? 110 : 145)) * ((var_2 ? var_6 : (arr_1 [i_0 - 2])))));
        var_11 = (arr_1 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_6 [5] = (arr_5 [i_1] [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_2] = ((var_9 << (((arr_8 [i_3]) + 21726))));
                    arr_14 [1] [i_2] [i_2] = ((((var_8 ? var_6 : var_4)) == (((arr_5 [13] [9]) ? var_9 : 7971))));
                    var_12 += -279223176896970752;
                }
            }
        }
    }
    var_13 = ((((min(var_6, var_4))) ? (((min((min(var_6, var_9)), -127)))) : (max(var_10, ((max(139, var_3)))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            {
                arr_19 [i_4] = (arr_16 [i_4]);
                arr_20 [i_4 + 1] [i_4] = var_1;
                arr_21 [1] &= (((arr_7 [i_4 + 1] [i_4 + 1]) ? (248 < 248) : (((arr_7 [i_4 + 1] [i_4 + 1]) & (arr_17 [i_4 + 1] [i_4 + 1])))));
                var_14 = ((!((min(1, 125)))));
            }
        }
    }
    var_15 = 124;
    #pragma endscop
}
