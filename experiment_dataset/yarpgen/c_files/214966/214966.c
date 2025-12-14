/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 |= ((((((arr_0 [i_0] [i_0]) && (arr_1 [i_0])))) * ((min((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_17 = (min((arr_1 [i_0]), (max((min(var_15, (arr_1 [i_0]))), (arr_1 [i_0])))));
        var_18 += (((((((-(arr_1 [i_0]))) / (arr_0 [12] [i_0])))) ? (min(((2258354368919560544 - (arr_0 [i_0] [i_0]))), (arr_0 [i_0] [1]))) : (!41803)));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = ((arr_2 [i_1]) & (arr_0 [1] [i_1]));
        var_20 = (max(var_20, (((((((max(var_0, (arr_4 [7])))) + (min(var_0, var_3)))) - ((-(arr_0 [i_1] [i_1]))))))));
        var_21 = (((min(var_3, (arr_2 [i_1]))) * (((!((max((arr_1 [i_1]), (arr_4 [i_1])))))))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 11;i_3 += 1)
            {
                {
                    var_22 = ((var_11 < ((min((arr_9 [7] [i_2 - 1] [i_2 - 1] [i_2 - 3]), (max((arr_5 [i_1] [i_2] [i_1]), var_1)))))));
                    var_23 *= ((var_0 ? var_3 : (arr_10 [i_3])));
                    arr_12 [i_1] [i_1] = (arr_11 [i_3] [i_2]);
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        var_24 = (max(var_24, (((((((max(-32767, var_14))) ? ((var_9 ? (arr_13 [i_4] [i_4]) : 18446744073709551596)) : (((-(arr_0 [i_4] [i_4]))))))) ? ((-(arr_14 [4]))) : (arr_1 [i_4])))));
        var_25 ^= (((((42316 ? (arr_0 [i_4] [i_4]) : ((17023379221713438394 >> (((arr_13 [i_4] [11]) - 1226094579))))))) ? var_8 : (((var_10 + 2147483647) >> (var_5 - 7706)))));
        var_26 = (((((!(arr_13 [i_4] [i_4]))) ? ((min(var_2, var_12))) : ((max((arr_1 [i_4]), (arr_1 [i_4])))))));
        var_27 = (arr_13 [0] [i_4]);
    }
    var_28 = (min(var_2, (((!var_11) ? (var_3 ^ var_6) : (!var_2)))));
    #pragma endscop
}
