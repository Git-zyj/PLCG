/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, (((min((max(-1150502601020495772, 23199)), var_16))))));
    var_19 = var_9;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 |= (48673 / 1);
        var_21 = ((~(arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_22 = (((-var_13 + 2147483647) << (((arr_3 [i_0]) - 634646602687288551))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = (((arr_4 [i_2] [i_2 + 1] [i_3]) * (var_11 & 0)));
                                var_23 = ((2292545096457439057 >= (arr_8 [i_2 - 2] [i_2] [i_2] [i_2])));
                                var_24 = (((arr_11 [i_2] [i_1] [i_1]) + (arr_11 [i_2] [i_3] [i_4])));
                                var_25 = (((arr_0 [i_2 - 1]) ? (arr_0 [i_2 + 1]) : (arr_9 [i_2 - 1] [i_2] [i_2 - 1])));
                            }
                        }
                    }
                }
            }
        }
        var_26 *= ((-0 ? (((arr_5 [i_0] [i_0] [i_0]) ? var_6 : (arr_11 [i_0] [i_0] [i_0]))) : (8619715216408186971 + 63)));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_16 [i_5] = ((-11349 * (((!(((arr_15 [i_5]) && 14152632685164746367)))))));
        var_27 = ((var_4 ? (((arr_14 [i_5] [i_5]) ? (arr_14 [i_5] [6]) : (arr_14 [i_5] [i_5]))) : ((672781361 ? (((-12881 ? (arr_15 [i_5]) : 1))) : var_1))));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_28 = (~1);
        var_29 = (max((1 | 1), (arr_18 [i_6])));
        var_30 = (max(var_30, ((((((arr_18 [1]) - (arr_17 [2] [i_6]))) + (((arr_17 [i_6] [i_6]) + var_12)))))));
    }
    #pragma endscop
}
