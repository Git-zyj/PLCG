/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_19 = arr_0 [i_0] [i_0 - 1];
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = (max(var_20, ((((((((min((arr_4 [i_1]), -32756))) ? (((32762 > (arr_1 [i_1] [i_2])))) : ((-(arr_1 [i_1] [i_2])))))) ? ((max((arr_9 [i_1] [i_1 - 1]), 0))) : ((32760 / (arr_10 [i_2] [i_1 + 2] [i_2]))))))));
            var_21 = (((-127 - 1) ? 33467 : 32766));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            var_22 = (min(var_22, (((((((!(arr_5 [i_3 + 1] [1]))))) - (min(121, (arr_5 [i_3 + 1] [10]))))))));
            arr_15 [i_3] [i_3] [i_1] = (arr_1 [i_1] [i_3 + 1]);
            var_23 += min(((!(arr_6 [i_1] [i_3 + 2]))), (((arr_9 [i_1 - 1] [i_3 + 1]) >= (arr_6 [i_1 - 1] [i_3 + 1]))));
        }
        for (int i_4 = 4; i_4 < 13;i_4 += 1)
        {
            var_24 -= (min(((max((min((arr_18 [6] [6]), var_2)), ((max(1, -32762)))))), -9223372036854775805));
            var_25 -= 32756;
            var_26 |= (((~(((-32767 - 1) ? var_14 : (arr_8 [i_1]))))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_27 = (min(1128115125, ((((((arr_11 [i_1 - 1] [i_1 + 1] [i_5]) - var_5))) ? (-127 - 1) : (arr_14 [i_1 + 2])))));
            var_28 = 8817459417014132532;
            var_29 = (max(var_29, (arr_10 [i_1] [i_1] [i_5])));
        }
        arr_22 [10] |= (arr_13 [i_1] [i_1] [i_1]);
    }
    var_30 = ((!(((max(-74, var_2))))));
    var_31 = (max(var_31, ((((((17 - var_6) | 1492293921198964300)) + var_5)))));
    #pragma endscop
}
