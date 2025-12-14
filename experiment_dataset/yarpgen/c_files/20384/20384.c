/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_14 = (((max(var_0, ((var_11 | (arr_1 [i_0] [i_0]))))) <= (arr_1 [i_0] [i_0])));
        arr_4 [i_0] = (((((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0]))) | (max((arr_3 [i_0]), var_11)))) <= (15893 && var_11)));
    }
    var_15 = (((((max(var_11, var_5)) != var_9)) ? var_13 : ((var_11 ? (max(var_6, var_11)) : var_13))));
    var_16 = (min(var_16, var_3));
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 14;i_3 += 1)
            {
                {
                    var_17 |= (~((~(arr_6 [i_1 - 1]))));
                    arr_12 [i_3] [i_2] [i_1] |= (max((max((((!(arr_5 [i_1] [i_2])))), var_1)), ((((arr_6 [i_3]) == var_11)))));
                    arr_13 [i_1] [i_3] = (arr_8 [i_1] [i_2] [i_3]);
                }
            }
        }
    }
    var_18 = (((((9223372036854775807 == 251) ? (~35422) : var_1)) > ((max(((235 ? -96 : 59909)), ((0 ? -1 : var_12)))))));
    #pragma endscop
}
