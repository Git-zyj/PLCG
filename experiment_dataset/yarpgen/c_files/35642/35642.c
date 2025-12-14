/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_0 [i_0]) : (min(((((arr_1 [i_0] [i_0]) == (arr_2 [i_0])))), (arr_0 [i_0])))));
        var_18 += (arr_0 [i_0]);
        var_19 *= (min((arr_2 [i_0]), (arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] = ((((min((arr_0 [i_1]), (arr_1 [i_1] [i_1])))) != (((max((arr_0 [i_1]), (arr_0 [i_1])))))));
        arr_8 [i_1] = ((((max(((max((arr_4 [i_1]), (arr_4 [i_1])))), (((arr_6 [i_1] [i_1]) / (arr_1 [i_1] [i_1])))))) ? ((((min((arr_4 [i_1]), (arr_1 [i_1] [i_1])))) ^ (min((arr_5 [i_1]), (arr_4 [i_1]))))) : (max((arr_0 [i_1]), (min((arr_0 [i_1]), (arr_5 [i_1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_12 [i_1] [i_2] |= (((arr_5 [i_1]) / (arr_5 [i_1])));
            arr_13 [i_2] = (i_2 % 2 == zero) ? ((((((arr_10 [i_2]) + 9223372036854775807)) >> (((arr_1 [i_1] [i_2]) - 819134921))))) : ((((((((arr_10 [i_2]) - 9223372036854775807)) + 9223372036854775807)) >> (((arr_1 [i_1] [i_2]) - 819134921)))));
            arr_14 [i_2] = ((!(arr_0 [i_2])));
            arr_15 [i_2] [i_2] [i_1] = (((arr_11 [i_1]) >= ((((arr_0 [i_1]) && (arr_0 [i_2]))))));
        }
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_18 [i_3] = (min(((((max((arr_17 [i_3]), (arr_16 [i_3] [i_3])))) ? (arr_17 [i_3]) : (arr_17 [i_3]))), (((((arr_17 [i_3]) ? (arr_16 [i_3] [i_3]) : (arr_16 [i_3] [i_3]))) - (((!(arr_17 [i_3]))))))));
        arr_19 [i_3] [i_3] = ((((max(((min((arr_17 [i_3]), (arr_17 [i_3])))), (((arr_16 [i_3] [i_3]) << (((arr_16 [i_3] [i_3]) - 17314))))))) ? (arr_16 [i_3] [i_3]) : (((!(arr_16 [i_3] [i_3]))))));
    }
    var_20 = var_16;
    var_21 += ((var_11 ? ((((-var_12 > ((max(var_17, var_8))))))) : ((var_16 ? var_16 : ((var_16 ? var_6 : var_1))))));
    #pragma endscop
}
