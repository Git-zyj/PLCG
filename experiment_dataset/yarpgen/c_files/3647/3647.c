/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -var_2;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0 + 1] [19] [i_1] [i_0] = (i_0 % 2 == 0) ? ((max(((((max(-2048, (arr_5 [i_0] [i_2])))) ? var_7 : (max(18446744073709551615, var_5)))), (max(((6784624144659305419 ? var_2 : (arr_1 [i_0] [i_0]))), ((((var_2 + 9223372036854775807) << (((arr_1 [i_0] [i_0]) - 9911378775750883877)))))))))) : ((max(((((max(-2048, (arr_5 [i_0] [i_2])))) ? var_7 : (max(18446744073709551615, var_5)))), (max(((6784624144659305419 ? var_2 : (arr_1 [i_0] [i_0]))), ((((var_2 + 9223372036854775807) << (((((arr_1 [i_0] [i_0]) - 9911378775750883877)) - 15016303698251617496))))))))));
                    arr_9 [i_0] [i_2] [i_2] &= -28883;

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_12 = ((119 ? var_0 : var_7));
                        var_13 ^= ((arr_7 [i_0 - 4] [i_3 + 2] [i_3 + 1]) % (arr_11 [i_0] [i_2] [i_0 - 3] [i_0] [i_0]));
                    }
                    for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
                    {
                        var_14 = ((((min((((~(arr_7 [i_0 - 4] [i_2] [i_4])))), -3977110645031577187))) ? (arr_4 [i_0] [i_4 + 1]) : (max(var_7, ((var_2 ? var_4 : -28883))))));
                        arr_14 [i_0] = ((min(var_10, -28883)));
                        var_15 = (arr_10 [i_0] [i_1]);
                        arr_15 [i_0] = (max(((~(arr_6 [i_1] [i_4 - 1] [i_4]))), ((+((var_7 ? (arr_1 [i_0] [i_0]) : (arr_7 [i_0] [i_1] [i_2])))))));
                    }
                    for (int i_5 = 2; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_0] [i_1] [i_1] [i_5 - 1] = (((((var_1 << (((((arr_5 [i_0] [i_1]) | 0)) + 25950))))) ? 21 : (max(((var_3 ? var_5 : var_3)), ((max(24, 24)))))));
                        var_16 = (min(var_16, (((~((((max(var_2, (arr_7 [19] [19] [19])))) ? ((min((arr_12 [i_1] [i_5] [i_5]), (arr_2 [i_0] [i_5])))) : (min(var_2, (arr_17 [i_0 - 4] [i_0 - 4] [i_0 - 4] [i_5]))))))))));
                        var_17 += (min((((var_5 & var_10) / (arr_1 [i_5 + 1] [i_2]))), (((-(min(var_8, var_9)))))));
                        arr_19 [i_0] [i_0] [i_2] [i_2] [i_5] [i_0] = (max((max(9499, (arr_3 [i_0 - 2] [i_1] [i_5 - 2]))), ((((arr_3 [i_1] [i_2] [i_5 - 2]) || (arr_3 [i_0 - 1] [i_1] [i_2]))))));
                    }
                    for (int i_6 = 2; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_18 ^= var_1;
                        arr_24 [i_0 + 2] [i_1] [i_0] [i_6] = (i_0 % 2 == 0) ? ((max((((var_5 >> ((((~(arr_12 [i_0 - 2] [i_0] [i_2]))) + 20364))))), ((~(arr_2 [i_0 - 2] [i_0])))))) : ((max((((var_5 >> ((((((~(arr_12 [i_0 - 2] [i_0] [i_2]))) + 20364)) - 36634))))), ((~(arr_2 [i_0 - 2] [i_0]))))));
                    }
                    arr_25 [i_0] [i_1] [i_2] = ((((!(25081 ^ 5286974))) || ((((arr_4 [i_1] [i_2]) | ((888044800233710663 ? var_3 : 0)))))));
                    var_19 = var_9;
                }
            }
        }
    }
    #pragma endscop
}
