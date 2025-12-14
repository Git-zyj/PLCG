/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233502
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((max((min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))), ((max((arr_1 [i_0] [i_0]), (arr_2 [i_0])))))) + ((((((arr_1 [i_0] [1]) != (arr_2 [i_0]))) ? ((min((arr_1 [i_0] [1]), (arr_1 [i_0] [i_0])))) : (arr_2 [i_0]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_17 = ((((((arr_3 [i_0] [i_0]) ? (((arr_3 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) : (((arr_1 [i_0] [12]) ? (arr_1 [i_0] [i_1]) : (arr_5 [i_0] [i_0])))))) == (max((((arr_7 [i_1] [i_0]) & (arr_1 [i_0] [i_1]))), ((((arr_6 [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_6 [i_1]))))))));
            arr_8 [i_0] = ((((((min((arr_0 [i_0]), (arr_0 [i_0]))) ^ (arr_0 [i_0])))) ? (((arr_2 [i_0]) ? (arr_7 [i_0] [i_0]) : ((((arr_2 [i_0]) * (arr_3 [i_0] [i_0])))))) : (((((arr_5 [i_0] [i_1]) <= (((arr_7 [i_0] [i_0]) + (arr_2 [i_0])))))))));
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_18 = (((arr_10 [i_0]) ? (min(((((arr_0 [i_2]) || (arr_7 [i_0] [i_0])))), (arr_10 [i_2]))) : (arr_9 [i_0] [i_0])));
            var_19 = (((arr_9 [i_0] [i_0]) ? (arr_2 [i_2]) : ((((((arr_5 [i_0] [i_2]) % (arr_1 [i_0] [i_2])))) ? (((arr_2 [i_0]) ? (arr_10 [i_2]) : (arr_6 [i_0]))) : (((min((arr_9 [i_0] [i_0]), (arr_1 [i_0] [i_2])))))))));
        }
        var_20 = (max(var_20, (arr_1 [10] [i_0])));
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = (min(((max(((max((arr_13 [i_3 + 1]), (arr_11 [i_3 - 1])))), (((arr_11 [i_3]) % (arr_11 [i_3])))))), ((((((arr_11 [i_3]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 - 1])))) % (max((arr_12 [i_3]), (arr_11 [i_3])))))));
        var_21 = (((((((min((arr_12 [i_3]), (arr_14 [6] [i_3])))) ? ((((arr_12 [i_3]) ? (arr_11 [i_3 + 1]) : (arr_13 [i_3 + 2])))) : (min((arr_14 [i_3] [i_3]), (arr_12 [i_3])))))) || (arr_14 [i_3] [4])));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_21 [i_4] [i_5] = ((((arr_11 [11]) < (arr_13 [21]))) || ((((arr_16 [i_4] [i_4]) ^ (arr_12 [18])))));
            var_22 = (arr_14 [i_4] [i_4]);
        }
        for (int i_6 = 4; i_6 < 15;i_6 += 1)
        {
            arr_24 [10] = (max(((((((arr_19 [i_4] [i_4] [i_6]) - (arr_12 [i_6 + 2])))) + (((arr_23 [i_4] [i_6]) - (arr_19 [i_4] [i_6] [i_6 - 2]))))), (arr_17 [i_4] [i_6 + 2])));
            var_23 = (((((min((arr_14 [6] [6]), (arr_12 [i_4]))) <= ((((arr_17 [i_4] [12]) ? (arr_14 [i_6] [i_6]) : (arr_20 [i_6 + 1])))))) ? (((min((min((arr_14 [i_6] [2]), (arr_17 [i_4] [i_4]))), ((((arr_23 [10] [8]) != (arr_11 [i_4])))))))) : (min((((arr_23 [i_4] [i_6]) ? (arr_13 [i_4]) : (arr_18 [i_4]))), (arr_19 [i_4] [4] [i_6])))));
            var_24 = (min((arr_16 [i_4] [i_4]), (arr_23 [i_4] [i_4])));
        }
        var_25 = (max(((((((arr_11 [i_4]) & (arr_18 [i_4])))) ? (((arr_23 [i_4] [1]) | (arr_19 [i_4] [i_4] [i_4]))) : (((arr_14 [i_4] [i_4]) / (arr_22 [i_4] [i_4]))))), (arr_14 [13] [i_4])));
    }
    var_26 = (((((var_10 / var_15) ? ((max(var_10, var_6))) : ((var_2 ? var_7 : var_16)))) >= ((((min(var_11, var_7))) ? (((var_9 ? var_11 : var_15))) : ((var_4 ? var_16 : var_11))))));
    #pragma endscop
}
