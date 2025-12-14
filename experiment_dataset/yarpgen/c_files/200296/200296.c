/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((arr_0 [i_0 - 1]) & 64106))) ? (((arr_0 [i_0 + 1]) ? var_1 : (arr_0 [i_0 + 1]))) : (((arr_0 [i_0 + 1]) | (arr_0 [i_0 - 1])))));
                var_12 = (max(var_12, ((((((1432 > 64106) ? (((arr_2 [6]) ? (arr_2 [1]) : (arr_2 [22]))) : (((var_6 ? var_4 : (arr_3 [i_0] [i_1])))))) != (arr_1 [i_0] [i_1]))))));
            }
        }
    }
    var_13 ^= ((64106 ? (((((1 ? var_7 : var_11))) ? (!var_3) : (185 | var_7))) : (max(((max(var_10, 1429))), -var_6))));

    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_14 *= ((((((arr_6 [i_2 + 1]) >> (((arr_6 [i_2 + 1]) - 12))))) ? (((arr_7 [i_2] [i_2 + 1]) ? (arr_7 [i_2] [i_2 + 1]) : (arr_7 [i_2] [i_2 + 1]))) : 1429));
        arr_8 [i_2] [i_2] = ((~((1417 ? (arr_0 [i_2 + 1]) : ((196 ? (arr_4 [0] [0] [i_2]) : 0))))));
    }
    for (int i_3 = 3; i_3 < 11;i_3 += 1)
    {
        var_15 = max((((arr_3 [i_3 + 4] [i_3]) && ((((arr_9 [i_3]) ? (arr_0 [i_3 - 3]) : 71))))), 1);

        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            arr_13 [i_3] [1] = ((((max((arr_11 [i_3 - 2] [i_3 + 2]), (arr_11 [i_3 - 2] [i_3 + 2])))) ^ (arr_11 [i_3 - 2] [i_3 + 2])));
            var_16 = ((((~(arr_11 [i_3 + 4] [i_3 + 1]))) - 1));
            var_17 &= (arr_11 [i_3 - 2] [i_4 - 2]);
        }
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        var_18 ^= var_4;
        var_19 = (max(var_19, ((max((((max(-19, (arr_15 [i_5]))))), (((-184 + 2147483647) >> ((((arr_7 [i_5] [11]) || (arr_7 [i_5] [i_5])))))))))));
        var_20 ^= (min(((-(arr_2 [i_5]))), ((((((var_5 ? 45640 : (arr_1 [i_5] [i_5])))) ? var_5 : (max(var_6, (arr_7 [i_5] [i_5]))))))));
        var_21 = (max(var_21, (((arr_7 [0] [10]) ? (((arr_16 [i_5] [i_5]) ? ((((arr_2 [i_5]) ? -36 : -1))) : 17352198893967106923)) : var_5))));
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        arr_19 [i_6] = (1 * var_9);
        arr_20 [i_6] = (arr_10 [i_6] [i_6]);
        var_22 *= (arr_17 [i_6]);
        var_23 = (min((((-(arr_6 [i_6])))), (((arr_3 [i_6] [i_6]) ? (arr_3 [i_6] [i_6]) : (arr_3 [i_6] [i_6])))));
        arr_21 [i_6] [i_6] = (~1);
    }
    var_24 = var_9;
    #pragma endscop
}
