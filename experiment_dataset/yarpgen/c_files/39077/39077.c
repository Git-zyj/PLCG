/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 += ((~((((arr_0 [i_0]) || -56)))));
        var_20 = (min(var_20, (((!((((!var_0) / 8192))))))));
        var_21 *= -1;
        arr_4 [i_0] = (((8192 ? (((2479398212 << (arr_0 [i_0])))) : (((arr_0 [i_0]) ? 1 : var_1)))));
    }
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        var_22 = (!-1);
        arr_9 [i_1] [19] = (((arr_5 [i_1 + 3]) ? ((((~1) >= (var_16 / var_6)))) : ((~((~(arr_5 [i_1])))))));
        var_23 = var_3;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_24 = (((((-56 ? var_14 : 29758))) ? (((((arr_13 [i_2] [i_2]) == (arr_10 [i_2] [i_2]))))) : var_18));
        var_25 = (arr_8 [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            {
                arr_20 [i_3] [i_4] = (((arr_8 [i_3 - 1]) <= (((((arr_18 [i_3] [i_3]) ? -4180 : var_1)) / ((var_7 ? 9223372036854775807 : -1))))));
                arr_21 [i_3] [i_3] = (min(((((5110 ? 8192 : 0)))), -1));
                var_26 = (!var_12);
                arr_22 [i_3] [i_4 - 1] = var_7;
            }
        }
    }
    var_27 *= (((((1 ? (var_9 >= 8171) : var_6))) ? ((min((min(var_10, var_13)), (var_2 > var_11)))) : ((min((var_11 > var_4), (894865398 || -118564654))))));
    #pragma endscop
}
