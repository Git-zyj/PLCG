/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = (((arr_1 [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])));
            arr_5 [i_0] [i_0] = (((arr_3 [i_0] [i_0]) - (arr_3 [i_0] [i_1])));
            var_16 = (max(var_16, ((((arr_2 [i_0] [12]) / (arr_2 [i_0] [10]))))));
        }
        var_17 *= (((((1 ? (arr_0 [2]) : 18761))) ? 18767 : (((18753 > 2124331258) ? (-40 * -18762) : ((min(-40, 18767)))))));
    }
    var_18 = var_2;

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [i_2] = (min((min((min((arr_3 [i_2] [i_2]), (arr_2 [i_2] [i_2]))), ((min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))))), ((((!(arr_0 [i_2])))))));
        arr_10 [i_2] = min((min((((arr_6 [i_2] [i_2]) ? (arr_1 [i_2]) : (arr_7 [i_2]))), (arr_7 [i_2]))), (((arr_8 [i_2]) ? (((arr_4 [1] [i_2]) ? (arr_6 [i_2] [i_2]) : (arr_7 [i_2]))) : (arr_0 [i_2]))));
        var_19 = (min(((((min((arr_3 [i_2] [i_2]), (arr_2 [i_2] [i_2])))) ? ((min((arr_3 [i_2] [i_2]), (arr_0 [i_2])))) : (arr_3 [i_2] [i_2]))), (min((((arr_4 [i_2] [i_2]) ? (arr_0 [i_2]) : (arr_6 [i_2] [i_2]))), (((arr_8 [i_2]) ? (arr_4 [i_2] [i_2]) : (arr_1 [i_2])))))));
        var_20 = (((((min((arr_1 [i_2]), (arr_2 [i_2] [i_2]))) | (arr_1 [i_2]))) | ((((arr_2 [i_2] [i_2]) & ((min((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))))))));
    }
    var_21 -= ((var_14 >= (var_5 - var_0)));
    #pragma endscop
}
