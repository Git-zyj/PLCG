/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((~((var_0 ? var_9 : var_4)))) / (var_7 && var_7)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_11 |= (arr_3 [i_1 + 1] [i_0 + 1] [i_0 - 1]);
            var_12 = (max(var_12, var_1));
            arr_7 [i_1] [i_1 + 2] [i_1] = (arr_0 [i_0]);
            var_13 = var_8;
            arr_8 [i_0] [i_1] = var_3;
        }
        arr_9 [i_0 - 1] = ((~(!var_7)));
        arr_10 [i_0] [i_0] = ((((arr_1 [i_0]) | var_8)));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        arr_14 [i_2] = (((((-17 ? (arr_5 [i_2]) : 1))) ? ((((max(var_7, var_4))) ? ((var_8 ? var_2 : (arr_6 [i_2] [i_2]))) : ((min(var_3, (arr_12 [i_2] [i_2])))))) : (((-((32766 / (arr_12 [i_2] [1]))))))));
        arr_15 [i_2] |= ((var_7 << (((arr_6 [i_2] [i_2]) - 5313469117369445001))));
        var_14 = (((((+(((arr_6 [i_2] [i_2]) >> (var_8 - 3321143750)))))) ? ((min((var_9 < var_8), var_5))) : (arr_5 [i_2])));
        arr_16 [i_2] = min(var_0, (arr_5 [i_2]));
    }
    #pragma endscop
}
