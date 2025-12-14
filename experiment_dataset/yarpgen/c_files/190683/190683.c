/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((var_1 + var_11) >= ((min(var_11, (arr_1 [i_0 + 1]))))));
        var_13 = (((((arr_0 [i_0 - 1] [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 + 1] [i_0 + 1]))) * (arr_0 [i_0 + 1] [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_10 [i_1] = 28;
            var_14 = (max(var_14, var_11));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            arr_13 [i_1] = (((arr_11 [i_1] [i_1] [i_1]) - (((arr_7 [i_3]) * -2445088416406947855))));
            var_15 *= ((-((~((var_1 ? (arr_9 [i_1] [i_3]) : (arr_5 [21])))))));
        }
        var_16 = (min(var_16, (((-(min(1, (min((arr_12 [i_1] [i_1] [i_1]), var_12)))))))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                var_17 = (min(var_17, (((var_0 ? (min(34299, ((~(arr_6 [i_1] [i_1]))))) : (arr_11 [i_5] [i_4] [i_1]))))));
                var_18 = (min(var_18, (((-(((!(arr_11 [i_1] [i_1] [i_1])))))))));
                var_19 = (((((((((~(arr_7 [i_4]))) + 2147483647)) >> (((~var_5) + 147))))) | (((((~(arr_15 [i_4] [i_5])))) ? (((arr_6 [i_1] [i_4]) ? (arr_3 [i_1]) : var_4)) : (((var_7 ^ (arr_18 [i_5]))))))));
            }
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                var_20 *= ((((!(!var_2)))));
                var_21 += (arr_18 [i_4]);
                var_22 = ((-(!1)));
            }
            var_23 = (max(var_23, 112));
        }
    }
    var_24 = (min(1, var_2));
    #pragma endscop
}
