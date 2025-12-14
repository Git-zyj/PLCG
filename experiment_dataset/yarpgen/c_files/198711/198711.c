/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max((((var_8 ? var_12 : var_2))), var_0)) / var_9);

    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((((arr_0 [i_0 + 1] [i_0]) ? (arr_3 [i_0]) : (arr_0 [i_0 + 3] [i_0]))) * (arr_0 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = (max((arr_2 [i_0 + 2] [i_0 + 2]), ((((((arr_2 [i_0] [17]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0])))) ? (max((arr_3 [i_0]), (arr_0 [i_0 + 2] [i_0]))) : (max(0, 16))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((max((arr_1 [i_1]), (arr_2 [i_1] [i_1])))) ? (((arr_2 [i_1] [2]) ? (arr_0 [i_1] [i_1]) : (arr_2 [i_1] [i_1]))) : (arr_1 [i_1])));
        var_18 ^= (max(((((max((arr_7 [0]), (arr_1 [i_1])))) ? (arr_7 [i_1]) : (arr_7 [i_1]))), (((arr_7 [3]) ? (((arr_1 [i_1]) * (arr_1 [i_1]))) : (arr_1 [i_1])))));
        arr_9 [9] = (min(((((((max((arr_7 [i_1]), (arr_7 [i_1]))))) > (max((arr_0 [i_1] [i_1]), (arr_7 [i_1])))))), (min((arr_6 [2]), (arr_2 [i_1] [i_1])))));
        var_19 = (min(var_19, ((((((((((arr_6 [i_1]) | (arr_6 [i_1])))) ? (arr_7 [i_1]) : (((arr_7 [i_1]) ? (arr_7 [i_1]) : (arr_1 [i_1])))))) ? (((((arr_7 [i_1]) ? (arr_1 [i_1]) : (arr_2 [16] [i_1]))) ^ (((arr_2 [14] [i_1]) ? (arr_7 [i_1]) : (arr_1 [i_1]))))) : (((arr_0 [i_1] [i_1]) ? (arr_7 [13]) : (arr_2 [i_1] [i_1]))))))));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [i_4] [i_4] [2] = (((arr_7 [i_2]) - (arr_13 [i_1] [i_1] [i_1])));
                        arr_17 [i_1] [i_1] [i_3] [i_4] = ((((106 ? 18154275572823173184 : 7))) ? (max((max((arr_2 [i_1] [i_1]), (arr_13 [i_1] [4] [i_1]))), (max((arr_6 [3]), (arr_3 [i_1]))))) : (((max((arr_10 [i_2 - 1] [i_2 - 2] [i_2 + 2]), (max((arr_6 [i_1]), (arr_7 [i_1]))))))));
                        arr_18 [i_3] [i_3] [i_3 + 3] [i_3] = (max((arr_6 [i_1]), (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        arr_23 [i_5] = ((((min((arr_6 [i_5]), (arr_15 [i_5] [2] [i_5] [4])))) ? (max((max((arr_7 [i_5]), (arr_20 [i_5] [12]))), ((((arr_1 [i_5]) ? (arr_10 [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_5] [i_5])))))) : ((((min((arr_6 [i_5]), (arr_14 [i_5] [i_5] [i_5])))) ? ((-9 ? 7987036149111123030 : 27)) : (arr_2 [i_5] [i_5])))));
        var_20 -= ((17452727172926216902 ? 102 : 0));
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = (((((-39 ? 96 : 17975874293380236229))) ? (max((arr_13 [13] [5] [5]), ((((arr_15 [i_6] [i_6] [i_6] [i_6]) + (arr_26 [i_6])))))) : (min((arr_19 [i_6]), (arr_21 [i_6])))));
        var_21 = (min(var_21, (((((((arr_26 [i_6]) | (arr_26 [i_6])))) ? ((max((arr_1 [i_6]), (arr_1 [i_6])))) : (((arr_2 [i_6] [i_6]) ? (arr_2 [i_6] [0]) : (arr_26 [i_6]))))))));
        var_22 += (((((113 ? 0 : 96))) ? (((70 ? -55 : 10))) : (((arr_12 [12] [i_6] [12]) ? (((arr_19 [i_6]) & (arr_20 [0] [i_6]))) : (arr_12 [i_6] [i_6] [i_6])))));
    }
    var_23 -= (((((-17 ? ((-11 ? -52 : -101)) : var_3))) ? var_10 : var_0));
    #pragma endscop
}
