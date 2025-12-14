/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44876
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((((var_12 ? 7532451094489400712 : 0))) && var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_20 = (max(var_20, var_18));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1 - 1] [i_1 - 1] [i_3] [i_4] = 1;
                            var_21 = ((~(((arr_4 [i_0] [i_2] [i_0] [i_4]) ? var_16 : (arr_0 [7] [i_1])))));
                            var_22 = (max(var_22, (arr_10 [i_1 + 1] [i_1 - 1])));
                        }
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_23 = (((371338152 ? 2043367303 : (!61837))));
                            var_24 = 23045;
                        }
                        arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] |= 48;

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            var_25 *= (~45753);
                            var_26 = ((127 ? (arr_8 [i_6 + 3] [i_6 + 3] [i_0] [i_6 + 3] [i_6 + 2]) : var_9));
                            var_27 *= (((((1917687407 ? (-2147483647 - 1) : var_12))) ? (((-2147483647 - 1) ? var_3 : 852047837281068452)) : (!2147483630)));
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_22 [i_0] [2] [i_2] [i_0] [i_7] = (((((max(var_11, (arr_2 [1] [i_1]))))) ? (max(48, (arr_3 [i_2] [i_0]))) : 7746));
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_7] = ((-((0 ? (arr_0 [i_0] [i_1 + 2]) : 15822471748612191972))));
                        }
                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_28 ^= 2097151;
                            var_29 = (max(var_29, ((((max(852047837281068452, (arr_21 [i_0] [i_3]))) | ((((arr_21 [i_0] [i_8]) ? (arr_7 [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 1]) : (arr_8 [i_0] [i_1 - 1] [i_8] [i_1 + 2] [i_1 + 1])))))))));
                        }
                        arr_26 [i_0] [i_0] [i_2] [i_2] [i_2] [i_0] = (max((((11 || (212 / 218870358)))), (min(((19 ? (arr_3 [i_0] [i_0]) : (arr_6 [i_0] [i_0] [i_2] [5] [i_3] [i_3]))), (215 > var_2)))));
                    }
                    var_30 = var_2;
                }
            }
        }
    }
    #pragma endscop
}
