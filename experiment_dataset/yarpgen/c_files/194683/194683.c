/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = ((var_8 ? (max((!var_9), ((1706759230 ? var_4 : -1706759231)))) : var_1));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (1706759214 > 1706759219);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_2] = 4294967268;
                    var_14 = (((arr_4 [i_0]) / (arr_6 [i_0] [i_0 + 1] [i_0 - 1])));
                }
            }
        }
        arr_11 [i_0] [i_0] = (arr_1 [i_0 + 1]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        var_15 = (arr_14 [i_3]);
        arr_15 [i_3] = (arr_13 [13]);
        var_16 = (arr_12 [i_3] [5]);
        var_17 = (((((arr_14 [4]) ? (arr_13 [i_3]) : (arr_13 [i_3]))) != (arr_13 [i_3])));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        arr_18 [0] = ((28 ? (((!(arr_17 [i_4])))) : (arr_17 [i_4])));
        var_18 = arr_17 [i_4];
        arr_19 [i_4] = (arr_16 [i_4] [i_4]);
    }
    var_19 = var_10;
    var_20 = (!-6097415087349525862);
    #pragma endscop
}
