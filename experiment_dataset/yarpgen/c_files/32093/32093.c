/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32093
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= var_7;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_12 = (((arr_1 [9] [i_0]) ? (min((arr_1 [i_0] [i_0]), 18)) : (((((arr_0 [i_0] [8]) && (arr_1 [i_0] [i_0])))))));
        var_13 = 32767;
        arr_2 [i_0] [i_0] = ((((((var_6 || (arr_1 [i_0] [i_0]))) || var_8)) ? (((((!(arr_0 [1] [i_0])))))) : (min(((((arr_1 [i_0] [i_0]) ? 23 : var_4))), (min(var_6, var_9))))));
    }
    var_14 = var_9;
    /* LoopNest 3 */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                {
                    var_15 = (arr_10 [2] [i_1 - 1]);
                    var_16 = 6;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 16;i_5 += 1)
        {
            {
                var_17 &= (((arr_17 [i_4] [i_5]) * (var_2 / var_7)));
                var_18 = ((((((((arr_14 [i_5] [i_5]) / var_6))) ? 65535 : (max(18446744073709551615, (arr_15 [i_4]))))) << (((arr_16 [11] [i_5 + 1] [1]) - 1041646801))));
                var_19 = (max(((((var_5 || var_2) ? (((-8192 - (arr_17 [i_4] [i_4 + 3])))) : ((10 ? var_5 : (arr_16 [i_4] [i_4] [i_4])))))), var_2));
            }
        }
    }
    #pragma endscop
}
