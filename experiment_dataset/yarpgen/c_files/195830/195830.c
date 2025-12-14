/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(var_1, (max((arr_0 [i_0 + 2]), (arr_0 [i_0 + 2])))));
        var_19 *= (~-var_1);
        var_20 = (min((((~var_12) ? (((arr_0 [i_0]) ? var_16 : var_1)) : var_14)), ((~(((arr_0 [i_0]) ? var_9 : (arr_1 [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 *= (max((min((((arr_3 [i_1]) ? (arr_3 [i_1]) : var_15)), ((((arr_3 [i_1]) ? (arr_3 [i_1]) : (arr_2 [10] [i_1])))))), (((!((min((arr_3 [i_1]), var_15))))))));
        arr_4 [i_1] [i_1] = min(((var_4 ? (arr_3 [i_1]) : (arr_2 [i_1] [i_1]))), ((var_11 ? (arr_2 [i_1] [20]) : var_3)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((~((var_16 ? -4605944614375913302 : -219970981)))) << (((min((max((arr_5 [i_1]), (arr_5 [i_3]))), (arr_6 [i_1] [i_1] [i_4]))) - 53560363455185409)))))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] [i_4] = ((~(arr_12 [i_1] [i_2] [i_3] [i_4])));
                    }
                }
            }
            var_23 = (min(var_23, ((max(((-(arr_3 [i_2]))), (arr_9 [i_1] [i_1] [i_2]))))));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_24 = (~(max(((min((arr_9 [i_1] [i_1] [i_5]), (arr_11 [i_1] [i_1] [i_1])))), ((-(arr_17 [i_1] [i_1] [5]))))));
            var_25 *= (max(((~(arr_7 [i_1] [i_5] [i_5] [21]))), (min((arr_7 [i_1] [1] [i_5] [i_5]), (arr_7 [i_1] [i_1] [i_1] [i_5])))));
        }
        var_26 *= (min((((arr_11 [i_1] [i_1] [i_1]) & (((arr_3 [i_1]) | (arr_5 [i_1]))))), ((max((arr_17 [i_1] [i_1] [i_1]), (arr_16 [i_1]))))));
    }
    #pragma endscop
}
