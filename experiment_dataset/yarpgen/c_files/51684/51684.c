/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    var_18 = (min(var_18, ((((var_7 < var_12) ? (max(((var_16 ? var_10 : var_12)), ((var_4 ? var_15 : var_4)))) : var_4)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 = (((max(((max(var_15, 50312))), (var_16 + 8717474266696807196))) | (((((arr_0 [i_0] [i_0]) && (arr_0 [i_0] [0])))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 -= 0;
                        var_21 = (arr_10 [i_2]);
                        var_22 *= ((var_7 < (max(((((arr_6 [i_0] [i_3] [i_3] [i_3]) & var_14))), var_6))));
                        var_23 += (((-2147483647 - 1) > (min((arr_9 [i_0] [i_3] [i_3]), (arr_4 [i_3])))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_24 = ((var_3 << (((arr_1 [i_0]) / (arr_1 [i_0])))));
                        var_25 += (arr_1 [2]);
                        var_26 = (min(var_26, (arr_11 [i_5])));
                        var_27 = (min(var_27, (((-(!-8717474266696807194))))));
                        var_28 = (i_0 % 2 == zero) ? ((((((((((arr_11 [i_0]) ? var_16 : var_2)) & ((1 ? (arr_16 [21] [i_0] [i_5] [i_6]) : (arr_16 [i_0] [i_0] [i_5] [i_6]))))) + 9223372036854775807)) >> (((min((((arr_13 [i_0]) << (1 - 1))), ((8717474266696807216 ? -8717474266696807215 : (arr_12 [i_0]))))) + 8717474266696807263))))) : ((((((((((arr_11 [i_0]) ? var_16 : var_2)) & ((1 ? (arr_16 [21] [i_0] [i_5] [i_6]) : (arr_16 [i_0] [i_0] [i_5] [i_6]))))) + 9223372036854775807)) >> (((min((((((arr_13 [i_0]) + 9223372036854775807)) << (1 - 1))), ((8717474266696807216 ? -8717474266696807215 : (arr_12 [i_0]))))) + 8717474266696807263)))));
                    }
                }
            }
        }
        var_29 = (var_5 ? var_0 : ((((((arr_17 [i_0] [i_0] [i_0]) % var_5))) ? (arr_13 [i_0]) : 35046933135360)));
    }
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {

        for (int i_8 = 1; i_8 < 23;i_8 += 1)
        {
            var_30 = (max(var_30, (((~(arr_21 [i_8 - 1] [i_8] [i_8 - 1]))))));
            var_31 = (max(var_31, (((-((((arr_18 [20]) < (arr_18 [6])))))))));
        }
        var_32 = (arr_19 [i_7] [i_7]);
        arr_23 [i_7] = (min((max(35046933135354, -14867)), ((((arr_21 [i_7 + 4] [i_7] [i_7 + 2]) % var_10)))));
    }
    var_33 = (max(var_33, (((((((~var_1) ^ (8717474266696807208 || var_1)))) * (max((var_2 | 5076886756990243274), var_14)))))));
    #pragma endscop
}
