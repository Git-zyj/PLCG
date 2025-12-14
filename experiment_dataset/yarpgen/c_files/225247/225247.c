/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225247
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = (max((min(var_14, var_9)), (((!((((arr_1 [i_0]) ^ (arr_1 [i_0])))))))));
        arr_4 [i_0] = (max((arr_1 [i_0]), (((arr_1 [i_0]) ? (arr_1 [i_0]) : var_7))));
        var_19 = (max((max((arr_1 [i_0]), (arr_0 [i_0] [i_0]))), (-1 ^ 64)));
        var_20 = (arr_0 [i_0] [i_0]);
        var_21 &= arr_1 [i_0];
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [i_1] = var_5;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_22 = (((((max(14942211129633944497, 1)))) ? (max(3504532944075607098, 2147483647)) : 3504532944075607127));
            var_23 &= ((((min((!var_2), (max((arr_8 [i_1]), var_11))))) ? ((((((arr_10 [i_1]) ? (arr_10 [i_1]) : var_3))) & (max((arr_9 [i_1] [i_2] [i_2]), var_6)))) : (((arr_10 [i_1]) / (3504532944075607109 >> 33)))));
            arr_11 [i_1] = (((min((arr_6 [i_1]), (arr_6 [i_2]))) << (((arr_10 [i_1]) - 20581))));
            var_24 = (max(var_24, ((((((min(var_7, var_12)))) > (max((arr_5 [i_1]), var_6)))))));
            var_25 = (min(var_25, ((max(((!(arr_10 [i_1]))), ((((min(var_8, var_3))) < var_13)))))));
        }
        arr_12 [i_1] = ((((!(var_6 || var_12)))) > (arr_5 [i_1]));
    }
    var_26 = (!var_7);
    var_27 &= (max(((max(var_5, var_15))), (var_5 / var_8)));
    var_28 = (max((((max(var_15, var_16)))), var_6));
    #pragma endscop
}
