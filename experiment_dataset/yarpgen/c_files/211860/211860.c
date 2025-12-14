/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211860
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_7;
    var_15 += ((var_7 ? ((var_10 ? (((max(var_3, var_12)))) : ((0 ? var_11 : var_4)))) : (((~var_4) & var_12))));
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_0] = 18446744073709551604;
                    arr_9 [i_2] [17] [8] [i_0] = (min((((~var_1) % 18446744073709551615)), (((((arr_6 [3] [i_0]) ? 18446744073709551615 : var_8))))));
                    var_17 = (((arr_1 [7]) >> 1));

                    for (int i_3 = 3; i_3 < 19;i_3 += 1) /* same iter space */
                    {
                        var_18 = (((((~((-101 ? (arr_10 [i_3]) : (arr_1 [i_0])))))) || (((~61) == ((var_10 ? var_9 : var_6))))));
                        arr_12 [i_3] [i_3] = (min(31, (((!(((var_9 ? -101 : (arr_11 [i_3])))))))));
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_1] [9] = (((((max(var_12, var_0)) ? ((118 ? (arr_0 [i_2]) : var_7)) : var_13))));

                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_19 = (max(var_19, var_2));
                            arr_20 [i_2] [i_2] [i_2] [11] = (min((((((-(arr_19 [i_0] [i_4 + 1] [i_1] [i_4] [i_1])))) ? (max(18446744073709551606, 5262935629840699082)) : (((arr_14 [i_4] [i_4] [i_4] [15] [i_4] [i_4]) - (arr_3 [i_0] [12] [12]))))), var_5));
                        }
                        arr_21 [i_0] [i_0] [i_2] [i_0] = (max(((((((var_5 ? var_7 : 7822465484422118854))) ? (101 <= 0) : (((arr_6 [7] [i_1]) ? var_2 : -114))))), (arr_7 [6] [i_2] [6])));
                    }
                    var_20 = (min(var_20, -29));
                }
            }
        }
    }
    #pragma endscop
}
