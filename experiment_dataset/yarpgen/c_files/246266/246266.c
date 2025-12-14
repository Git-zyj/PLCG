/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, (((((-((var_5 ? var_13 : var_10)))) ^ var_14)))));
    var_16 = (((((var_6 ? ((var_2 ? var_9 : var_7)) : ((9223372036854775807 ? var_0 : var_10))))) ^ ((var_3 ? (-9223372036854775807 | 9105471123454023024) : (23 << var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 = ((10796425669653782736 < ((min((((arr_3 [i_2]) ? 767612358 : var_9)), ((min(0, (arr_3 [i_2])))))))));
                    var_18 = 5120726921109608942;
                    arr_9 [i_0] &= ((((((((var_14 >> (((arr_7 [i_1]) - 4047241905))))) ? (var_0 || 9105471123454023024) : (~var_12)))) ? ((~(1536 && -119))) : ((((arr_0 [8] [i_1]) && (arr_6 [i_0] [8] [i_2 + 1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((((((((arr_13 [i_0] [i_0] [i_2 - 2] [i_3]) ? var_0 : var_6))) | (((arr_2 [i_4]) ? var_3 : var_2))))))));
                                arr_16 [i_0] [i_0] [i_2] [i_0] [i_3] = (((min(((min(var_5, (arr_5 [i_0])))), ((var_4 >> (((arr_11 [7] [i_1] [5] [i_3] [3] [i_4]) - 269395839)))))) == (((((!(arr_1 [i_4])))) + ((((arr_10 [i_0] [i_3] [i_0] [i_0]) == -2050099964)))))));
                                var_20 = ((!(((-((var_12 ? -95 : (arr_2 [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
