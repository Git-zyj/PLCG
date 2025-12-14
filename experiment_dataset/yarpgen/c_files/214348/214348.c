/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214348
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 199744551;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_13 += (((((-(arr_5 [i_1])))) - 0));
                    arr_7 [i_0] [i_1] = var_10;
                }
            }
        }
        var_14 &= ((~(arr_6 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_11 [16] [i_3] = (arr_8 [i_3]);
        arr_12 [10] = 199744551;
        arr_13 [i_3] = (((arr_10 [i_3]) && -199744554));
    }
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            var_15 = (((arr_6 [i_4 - 1] [i_4] [i_4]) ? (var_9 > var_7) : (!var_12)));
            arr_19 [3] [i_4] = ((!(((((arr_18 [i_4] [i_4] [i_4]) ? -1745347765 : 254)) > var_1))));
            var_16 = (((-(arr_18 [i_4 + 2] [i_4] [i_4 - 1]))));
            var_17 += ((~((~(arr_16 [i_4 + 1] [i_5])))));
        }
        var_18 = (arr_15 [i_4]);
    }
    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_19 = (((((-(arr_0 [i_6])))) ? (((((max(var_12, 254)) != (arr_6 [i_6] [1] [i_6]))))) : (min((((arr_3 [i_6] [i_6] [i_6]) & var_3)), ((min(1, -1745347772)))))));
        var_20 = ((-(arr_22 [i_6])));
    }
    var_21 = (max(var_21, var_1));
    #pragma endscop
}
