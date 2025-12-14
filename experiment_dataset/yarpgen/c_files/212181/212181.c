/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 ? (((((var_14 ? var_12 : var_3))) ? ((max(1, var_5))) : ((var_10 ? var_15 : var_0)))) : (((((var_14 ? var_9 : var_12))) ? 1 : var_4))));
    var_17 = (max((max((min(var_7, 1)), ((max(var_11, var_4))))), var_8));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_4;
        arr_3 [i_0] = 0;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((~((1 ? 24 : (arr_8 [10])))));
                    arr_10 [i_0] [i_1] = ((2055291657 ? (arr_0 [i_0 - 3] [i_0 - 3]) : (arr_0 [i_0 - 4] [i_0 - 4])));
                    arr_11 [i_0] [i_0] [i_0] = ((~((6251903638967126572 ? 24215 : 36028797018963967))));
                    arr_12 [2] [2] [i_2] [i_2] = (((((702766980129856058 ? (arr_4 [i_0] [i_1]) : 8668730249457709985))) ? var_0 : (arr_5 [i_1] [i_1])));
                }
            }
        }
        arr_13 [i_0] [i_0 - 1] = var_15;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        arr_18 [i_3] = ((var_12 ? ((var_2 ? (((arr_15 [15] [i_3]) & 9778013824251841637)) : (arr_17 [13]))) : (((65535 ? (((1 ? (arr_15 [13] [13]) : (arr_15 [4] [4])))) : (arr_16 [i_3]))))));
        arr_19 [i_3] = ((((((min(702766980129856058, (arr_14 [21])))) ? (arr_14 [i_3]) : (arr_16 [i_3])))) ? (arr_15 [i_3] [i_3]) : ((+(max((arr_17 [i_3]), var_1)))));
    }
    #pragma endscop
}
