/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [5] = (26060 > 2319385446);
        var_11 = (min((min(var_6, ((((arr_0 [21] [3]) || (arr_0 [i_0] [4])))))), ((((((arr_1 [i_0] [i_0]) / 4294967284)) + (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_12 = (((((((1975581849 ? var_8 : (arr_5 [1])))) - (min((arr_6 [i_1] [i_1]), 1975581822)))) <= (arr_1 [8] [i_1])));
        arr_7 [i_1] = ((min((arr_5 [i_1]), (((arr_4 [i_1] [i_1]) ? 2319385457 : 1)))));
        arr_8 [i_1] = (((((min(255, 1))) ? ((9380 ^ (arr_0 [i_1] [i_1]))) : ((-1024 ? 1 : (arr_0 [i_1] [i_1]))))));
        var_13 = ((((((arr_0 [i_1] [i_1]) / var_10))) ? (((arr_0 [13] [13]) >> (((arr_0 [i_1] [i_1]) - 1487388871)))) : (((var_0 << (((arr_0 [i_1] [i_1]) - 1487388895)))))));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_14 = (min(var_14, ((((var_2 ? (arr_11 [i_2]) : 0))))));
        var_15 = (((((arr_3 [i_2]) + 2147483647)) << (((var_8 / 148) ? (1 / -1487255612) : var_2))));
        var_16 = var_2;
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_19 [i_2] [i_2] [5] [5] &= (min(((255 ? 126 : (arr_10 [i_2]))), (((((var_10 << (2319385447 - 2319385431)))) & ((10 ? 2305843008139952128 : var_2))))));
                    var_17 = ((((min((arr_10 [i_2]), (1 <= 1)))) ? 309506722 : var_6));
                    arr_20 [i_4] [i_4] [i_4] [i_2] = (var_2 + 1975581848);
                    var_18 ^= 1;
                    arr_21 [i_2] [i_4] [i_4] = (((((-(arr_4 [i_2] [16])))) ? ((((-2305843008139952143 + 2147483647) << (((arr_13 [i_2] [5] [5]) - 6592))))) : ((((max((-127 - 1), var_0))) ? (((21767 * (arr_5 [i_2])))) : (min((arr_11 [i_2]), 2319385447))))));
                }
            }
        }
        arr_22 [i_2] = (max((((min(2305843008139952149, 24)))), (~64424509440)));
    }
    var_19 = ((((min((min(var_1, var_3)), (~var_9)))) <= (((var_7 >= var_9) ? (max(var_7, 2319385424)) : (var_8 != 2319385424)))));
    #pragma endscop
}
