/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33311
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (-26568 * 0);
        arr_4 [i_0] = ((var_0 >> (var_14 <= var_2)));
        var_16 = var_9;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_17 = ((((var_3 ? var_8 : (arr_6 [i_1]))) | (((min((arr_6 [i_1]), var_9))))));
        var_18 ^= (((221 == 65529) ? var_7 : var_7));
        var_19 ^= ((-(arr_6 [i_1])));
        var_20 = (max(var_20, ((min((((arr_5 [i_1] [i_1]) << (((var_10 ^ var_3) - 4056576386)))), (((((var_6 ? var_0 : (arr_5 [i_1] [8])))) ? (((min(35, 6)))) : var_5)))))));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_21 = (max(var_21, ((min((max(((179 ? 64 : 1)), -26567)), -var_2)))));
                        arr_17 [i_5] [i_4] [i_4] [3] = (max((((arr_14 [22] [i_3] [i_4] [i_4] [i_5]) * (arr_13 [i_4 + 1] [i_4 + 1] [i_4] [14]))), (((!(var_5 | var_12))))));
                        var_22 = (min(var_22, ((((((min(255, -1)))) ? ((1 ? var_7 : (arr_7 [i_4 + 1]))) : ((((arr_13 [i_2] [i_3] [i_4] [i_5]) < (arr_15 [i_2] [i_4] [i_3] [4] [i_2])))))))));
                        var_23 = (((((((((-32767 - 1) ? var_2 : (arr_15 [i_4] [9] [9] [i_4] [1])))) & (var_2 + var_8)))) || (~0)));
                        var_24 = (max(var_24, var_13));
                    }
                }
            }
        }
        var_25 *= (((arr_7 [i_2]) == ((((arr_7 [i_2]) >= (arr_8 [i_2] [i_2]))))));
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 16;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {
                var_26 = ((min((arr_13 [i_6] [2] [i_7] [3]), -26558)));
                var_27 = (max(var_27, -32756));
                var_28 = (max(var_28, ((max((var_4 >= 13004941057427896746), var_5)))));
            }
        }
    }
    #pragma endscop
}
