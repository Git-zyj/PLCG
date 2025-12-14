/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (!((((arr_2 [i_0]) - (arr_0 [i_0] [i_0])))));
        var_18 = ((~(max(var_8, ((((arr_3 [i_0] [i_0]) < var_2)))))));
    }
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        var_19 = ((!(arr_2 [i_1 + 2])));

        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            var_20 = ((((min(((min((arr_3 [i_1] [i_1]), (arr_4 [i_2])))), (arr_1 [i_1 + 2])))) ? (((arr_5 [i_1 + 3]) + (((arr_5 [i_2]) / var_5)))) : (var_14 / var_8)));
            var_21 = (((arr_3 [i_1 + 1] [i_1 + 1]) ? (((arr_3 [i_1 - 2] [i_1 - 2]) ? (arr_3 [i_1 + 3] [i_1 + 3]) : (arr_0 [i_1 + 3] [i_1 + 3]))) : ((min((arr_3 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 + 2] [i_1 + 3]))))));
        }
        for (int i_3 = 1; i_3 < 11;i_3 += 1)
        {
            var_22 *= (min((((!(arr_2 [i_1])))), (~var_7)));
            arr_13 [i_1] [i_3] = (((((((max((arr_6 [i_1 - 2]), (arr_6 [i_1 + 1])))) ? (min(8388600, 3584)) : ((max((arr_4 [i_1 + 3]), var_15)))))) - (((arr_10 [i_3] [i_1] [i_1]) ? (((arr_8 [i_3] [i_3 - 1]) ? (arr_1 [i_3 - 1]) : (arr_8 [i_3] [i_3]))) : ((((arr_9 [i_1 + 3] [i_3] [i_1]) ? (arr_5 [i_1 + 1]) : (arr_7 [i_3]))))))));
            var_23 = (((arr_9 [i_1 + 3] [i_3] [i_3]) - ((((arr_9 [i_1 + 3] [i_3] [i_3]) < (arr_9 [i_1 + 2] [i_3] [i_3]))))));
        }
    }
    var_24 = var_14;
    #pragma endscop
}
