/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((-1796657690 == (((((var_15 ? (arr_4 [i_0]) : var_0)) < ((-(arr_1 [i_0]))))))));
                arr_6 [i_1] [i_1] [5] = (max((max((max(var_16, -3883)), 1796657687)), ((((((arr_1 [i_0]) ? var_6 : var_18)) > (((-(arr_1 [16])))))))));
                var_19 = (arr_3 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_14 [i_1] = (((((((1796657690 ? -816262277 : var_3)) | (~-816262277)))) || ((max(var_7, (arr_11 [i_2] [i_2 - 2] [5] [i_1]))))));
                            var_20 = (i_1 % 2 == zero) ? (((~((~((var_12 >> (((arr_13 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_1]) - 564059666103430337))))))))) : (((~((~((var_12 >> (((((arr_13 [i_1] [i_1] [i_2 + 1] [i_3] [i_3] [i_1]) - 564059666103430337)) + 4410169692189514104)))))))));
                            arr_15 [i_1] = -100;
                            var_21 *= ((((((((1796657663 ? var_11 : (arr_2 [i_2])))) ? (var_5 + -1796657672) : (arr_13 [i_0] [i_3] [i_2] [i_1] [16] [i_0])))) ? (((arr_7 [1] [i_1] [i_2] [i_2 + 2]) + (arr_7 [i_0] [i_1] [7] [i_2 - 3]))) : ((-var_2 - (((arr_1 [i_2 - 1]) ? (arr_10 [16] [i_1] [i_0] [4]) : var_5))))));
                            var_22 *= ((!((((arr_8 [i_0] [i_0] [i_2 - 2]) % (arr_9 [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_2]))))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_21 [12] [8] &= (max((((arr_19 [i_4] [i_5]) ? var_14 : (max((arr_19 [i_4] [i_5]), var_15)))), (~-var_5)));
                var_23 = (arr_18 [i_4] [i_4] [i_4]);
                var_24 = (max(var_24, (((((-1796657672 < ((var_8 ? var_4 : var_1)))) && (((-((var_4 ? var_7 : (arr_19 [i_4] [i_5])))))))))));
            }
        }
    }
    var_25 ^= (min((var_15 / var_16), ((min((!var_17), (var_5 && var_15))))));
    var_26 = (max(var_26, -1796657700));
    #pragma endscop
}
