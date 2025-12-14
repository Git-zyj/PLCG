/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((-311875626 * var_11) | 158))) ? (!var_11) : ((((var_5 != (arr_4 [i_0] [i_1] [i_1]))) ? (((((arr_4 [i_0] [i_1] [i_1]) < var_4)))) : (30 | var_2)))));
                var_18 = ((((max((((arr_1 [i_1]) >> (((arr_1 [i_0]) - 735241581)))), -var_15))) || ((((arr_2 [i_1]) ^ (((arr_3 [i_1]) ? 1 : (arr_3 [i_0]))))))));
                arr_7 [19] [i_0] [i_1] = (!-6351980197152678209);
                var_19 = (min(var_19, (((((((arr_5 [i_1]) ^ var_7))) ? ((((-1431401908 + 2147483647) >> 24))) : (~0))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_17 [i_3] [i_3] = ((-(((!(!40153))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_20 += (((arr_22 [i_2] [i_3] [i_4] [i_5]) ? (((3932864553 != (max(var_12, -6351980197152678209))))) : (((816693829 && 4367988590663694917) >> (((!(arr_19 [i_6] [i_2] [i_2] [i_4] [i_2] [i_2]))))))));
                                var_21 = ((((!(((-(arr_12 [i_4])))))) ? ((((var_9 * 0) >= ((var_0 ? 54 : var_4))))) : ((((((arr_12 [i_2]) != (arr_11 [i_2])))) & (54 & 1)))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_3] [i_4] = (max((arr_12 [i_2]), (((arr_13 [i_3] [i_4]) | var_7))));
                    var_22 = 1;
                }
            }
        }
    }
    var_23 = (max(var_1, var_3));
    #pragma endscop
}
