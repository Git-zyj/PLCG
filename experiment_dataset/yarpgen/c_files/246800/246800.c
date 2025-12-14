/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_2] |= ((((((arr_8 [i_2 + 1] [i_2 + 2]) ? var_2 : (arr_4 [i_0 - 1])))) ? (min(((var_13 ? var_3 : (arr_2 [i_2]))), var_4)) : (arr_2 [i_2 + 2])));
                    var_16 = (((((((max((arr_0 [i_0 + 1]), (arr_8 [i_0 - 1] [i_0 - 1])))) ? 13508368690197050858 : ((13130 ? 1 : var_2))))) ? ((((!(arr_1 [i_2]))))) : (((((18446744073709551586 ? 21040 : 173))) ? (max(var_8, (arr_0 [2]))) : (max(253, 3307883143))))));
                    var_17 = (!var_10);
                }
            }
        }
    }
    var_18 = var_10;

    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        arr_14 [i_3 + 1] [i_3] = -22010;
        arr_15 [i_3] = (i_3 % 2 == 0) ? ((((((arr_2 [i_3 + 1]) == (arr_1 [i_3 - 1]))) ? (((!((((var_12 + 2147483647) >> (14397 - 14379))))))) : (((((((arr_1 [2]) + 2147483647)) << (((arr_8 [i_3] [6]) - 606090429)))) >> (((arr_10 [i_3] [i_3]) + 5522684483492599815))))))) : ((((((arr_2 [i_3 + 1]) == (arr_1 [i_3 - 1]))) ? (((!((((var_12 + 2147483647) >> (14397 - 14379))))))) : (((((((arr_1 [2]) + 2147483647)) << (((arr_8 [i_3] [6]) - 606090429)))) >> (((((arr_10 [i_3] [i_3]) + 5522684483492599815)) - 5248159911684105789)))))));

        /* vectorizable */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_19 = ((((((arr_5 [i_3 + 2] [i_4]) ? 11054 : var_4))) ? (((arr_7 [i_3] [i_3] [i_4] [i_3 - 1]) - (arr_11 [i_3]))) : var_2));
            arr_18 [i_3] = var_4;
        }
    }
    var_20 = ((~(((!((min(var_2, 20527))))))));
    var_21 = ((var_11 < ((var_3 ? (var_8 || var_10) : (var_2 ^ var_11)))));
    #pragma endscop
}
