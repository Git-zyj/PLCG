/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_15 = (arr_2 [i_0] [i_0]);
        var_16 = ((5177194834301414691 ? ((119 / (arr_3 [i_0 + 2] [i_0 + 2]))) : ((-114 ? -114 : 119))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_17 = (max(var_17, (((((((arr_3 [i_1] [i_1 - 1]) ? (arr_0 [i_1 + 2]) : (arr_6 [12] [11])))) ? (((var_10 >= (((arr_1 [7]) ? 1 : (arr_6 [i_1] [i_2])))))) : ((1375 ? var_2 : (arr_4 [i_1 - 1] [i_2]))))))));
            var_18 = (((arr_1 [i_2]) >= ((min((arr_4 [i_1] [i_2]), 40709)))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 = (max(((min(-114, ((426 ? 1 : (arr_2 [2] [2])))))), (arr_8 [12] [i_3])));
            var_20 = (max((min(102, -1124159688)), ((min((arr_2 [i_1 + 2] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 + 2]))))));
        }
        var_21 = 6;
    }
    var_22 = (min(var_22, (max((1 & var_6), ((max(-103, var_3)))))));
    #pragma endscop
}
