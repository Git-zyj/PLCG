/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_4, var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((~(arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((arr_8 [i_1 - 1]) ? 18446744073709551611 : (arr_6 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                    var_12 = (((arr_4 [i_2]) <= (((arr_1 [i_1]) ? var_4 : 32767))));
                }
            }
        }
    }
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {
        var_13 |= -32767;
        var_14 = (((var_2 <= var_4) ? (((((arr_13 [i_3 + 1]) > (arr_13 [i_3 - 3]))))) : (arr_13 [i_3 - 3])));
        arr_14 [i_3] [i_3] = ((((min((arr_12 [i_3 - 1]), (arr_12 [i_3 - 1])))) ? (((arr_4 [i_3 - 2]) - (var_1 >= var_1))) : ((-(arr_1 [i_3 - 3])))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_17 [i_4] = var_0;
        var_15 = ((arr_5 [i_4] [1] [i_4]) + (arr_5 [i_4] [0] [i_4]));
        var_16 = (min(var_16, var_5));
        var_17 = (arr_5 [i_4] [4] [4]);
    }
    var_18 = (max(var_18, var_9));
    var_19 = (max(var_8, (min((max(var_4, var_3)), var_1))));
    #pragma endscop
}
