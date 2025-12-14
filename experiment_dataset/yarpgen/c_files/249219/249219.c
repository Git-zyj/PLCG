/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = 6341746894408717578;

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = ((var_0 ? (min((arr_4 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_0] [i_1]))) : ((var_8 ? 12104997179300834028 : (((((arr_4 [i_1] [i_0] [i_0]) > (arr_3 [i_0] [i_1])))))))));
            arr_8 [i_0] [i_0] [i_0] = (((arr_4 [i_1] [i_0] [i_0]) ? (min((((var_11 == (arr_5 [i_0] [i_0])))), (max((arr_1 [i_0]), (arr_0 [i_1]))))) : (arr_3 [i_1] [i_0])));
            arr_9 [i_0] [i_1] = var_0;
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_12 [i_0] [i_0] [0] = (((((arr_6 [6]) ? ((((!(arr_5 [i_0] [i_0]))))) : (arr_5 [i_0] [i_0])))) ? ((((!((((arr_4 [i_0] [8] [i_2]) ? (arr_5 [i_0] [i_0]) : var_15))))))) : (arr_11 [i_0] [12] [i_0]));
            arr_13 [i_0] [10] = var_4;
        }
        arr_14 [i_0] = (min((((arr_6 [i_0]) ? (max((arr_10 [i_0] [i_0]), var_8)) : var_7)), (((((var_17 ? var_12 : var_0)) < var_15)))));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {
        arr_19 [14] = (((((var_6 ? (arr_18 [0]) : var_5))) ? (((-79 ? 1637718692 : 1637718692))) : (arr_18 [22])));
        arr_20 [14] = ((var_6 == (((arr_15 [i_3]) ? (arr_18 [12]) : (arr_16 [i_3] [i_3])))));
    }
    var_19 = var_1;
    #pragma endscop
}
