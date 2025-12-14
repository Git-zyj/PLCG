/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_15 = (max(var_15, ((((((-5871407906181766874 & (arr_2 [i_0 - 2])))) ? (((arr_1 [i_0 - 3] [i_0 - 3]) - (((arr_1 [i_0] [i_0 + 1]) ? (arr_2 [i_0]) : var_11)))) : ((((min((arr_2 [i_0]), 5871407906181766856))))))))));
        arr_3 [i_0 - 1] = (arr_1 [i_0 - 2] [i_0 - 1]);
        var_16 = var_7;
        var_17 += (max(var_11, var_1));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (max(-5871407906181766877, 11830129462746998351));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_11 [i_2] [i_2] = -5871407906181766874;
            var_18 = (!var_5);
            var_19 = (min(var_19, ((~((((((arr_5 [i_1] [20]) % (arr_7 [i_1] [1] [i_1])))) ? (arr_9 [i_1] [2] [1]) : (arr_7 [i_1] [8] [2])))))));
        }
        var_20 = (min(var_20, (5871407906181766876 ^ 114)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        arr_15 [i_3] [i_3] |= ((var_1 ? (arr_13 [i_3]) : (arr_13 [i_3])));
        var_21 = (~var_2);
    }
    var_22 = (min(var_22, var_4));
    #pragma endscop
}
