/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((!(((var_5 & (((arr_3 [i_0] [12]) ? var_7 : (arr_4 [i_1])))))))))));
                var_11 = (min(var_11, ((~(arr_3 [i_0] [i_0])))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        arr_10 [i_2] = (min(var_4, (((max(0, 7767562965899020901)) / (arr_4 [i_2])))));
        arr_11 [i_2] = (((((var_3 ? (arr_1 [i_2]) : (arr_1 [i_2 - 1])))) ? ((((9223372036854775807 ? 142 : 10140)) - (((arr_6 [i_2]) ? var_3 : (arr_6 [i_2]))))) : (arr_9 [i_2] [i_2])));
        arr_12 [i_2] = max((arr_8 [i_2]), (((arr_5 [i_2 + 1]) != (arr_5 [i_2 - 1]))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        /* vectorizable */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                arr_21 [13] [i_3] [i_4] [i_5] = (((arr_20 [15] [15] [i_5]) % var_9));
                arr_22 [i_5] [i_4] [i_3] = var_1;
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {
                arr_25 [15] [i_4] [15] = ((arr_16 [i_3] [i_4] [i_6]) == (arr_4 [i_6]));
                arr_26 [i_3] = (arr_20 [i_3] [i_4] [i_6]);
            }
            arr_27 [i_3] [i_3] [i_3] = var_5;
        }
        var_12 = ((!(((arr_17 [i_3] [9] [i_3]) && var_5))));
        var_13 = arr_14 [i_3];
    }
    var_14 = var_1;
    var_15 = var_2;
    #pragma endscop
}
