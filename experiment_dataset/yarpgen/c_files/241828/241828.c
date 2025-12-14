/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((((((min(1, 1))) <= var_4))) <= var_1);

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 += (((arr_1 [i_0] [i_0]) ? (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) : (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))));
        var_12 = (min(((((-(arr_2 [i_0]))) / (var_1 / var_1))), ((((max((arr_0 [i_0]), (arr_2 [0])))) ? (arr_0 [i_0]) : (arr_0 [i_0])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            var_13 = (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_0 [i_0]) >> (163 - 101)))));
            arr_5 [9] [9] = (0 >> 1);
            arr_6 [i_0] [7] [i_1] = (((arr_2 [i_1]) - (arr_1 [i_0] [i_1])));
            arr_7 [i_0] [11] [11] = (((arr_4 [i_0] [i_1]) && (arr_4 [i_0] [i_0])));
        }
        arr_8 [i_0] [i_0] = (max((((((~(arr_3 [i_0] [9] [i_0]))) != (arr_1 [i_0] [i_0])))), (((max((arr_3 [i_0] [i_0] [i_0]), 1)) >> var_0))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            var_14 = ((!((!((!(arr_1 [i_3] [i_3])))))));
            arr_13 [i_3] = ((((max(1, (1 - 0)))) ? ((((((min(-1981, 152))) && var_6)))) : 12654876225563479375));
        }
        arr_14 [i_2] [i_2] = ((!(arr_0 [i_2])));
        arr_15 [i_2] = (((~(((arr_9 [i_2] [i_2]) | (arr_11 [i_2]))))));
    }
    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
    {
        var_15 |= (((arr_4 [i_4] [i_4]) ? (arr_4 [i_4] [i_4]) : (min((arr_4 [i_4] [i_4]), (arr_2 [i_4])))));
        arr_18 [i_4] [7] = ((((~(arr_1 [i_4] [i_4])))) ? (min((~var_6), (arr_4 [i_4] [i_4]))) : (((((arr_11 [i_4]) != (((max((arr_17 [i_4]), var_1)))))))));
        arr_19 [i_4] |= (arr_11 [1]);
    }
    var_16 = (((var_9 | var_5) > (var_7 * var_6)));
    #pragma endscop
}
