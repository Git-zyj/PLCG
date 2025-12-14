/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 *= (((((arr_1 [i_0 - 2]) == (arr_0 [i_0] [i_0]))) ? (((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_0 [i_0 - 2] [i_0 - 1]))) : ((1 ? 101 : 241))));
        var_14 = min(var_6, (min((min(var_9, var_9)), ((min(111, -111))))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_15 = ((((~(var_3 % 110))) <= -var_10));
        var_16 = (((((((104 ? var_4 : var_1))) ? ((var_7 ? (arr_3 [i_1]) : 21175)) : ((max(var_10, var_6)))))) && var_7);
        var_17 = (((((arr_2 [i_1]) ? (arr_3 [i_1]) : (arr_2 [i_1]))) ^ -106));
        arr_4 [i_1] [i_1] = (max(98, (((min(var_3, var_8))))));
    }
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        var_18 = (max(var_18, ((((((var_1 ? (((arr_3 [12]) ? (arr_3 [i_2]) : 4141564994)) : (((max(110, (arr_3 [i_2])))))))) == (((arr_2 [15]) ? (var_7 + var_3) : (((-(arr_3 [i_2])))))))))));
        var_19 &= (min(8191, var_8));
    }
    for (int i_3 = 1; i_3 < 23;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_20 ^= (((((var_11 ? var_10 : -91))) ? (((((var_11 ? var_11 : 1)) <= ((~(-127 - 1)))))) : (((var_3 >= ((260046848 ? var_12 : var_4)))))));
            var_21 ^= ((min((arr_8 [i_4] [i_3 + 1]), (arr_8 [i_3 - 1] [i_3 - 1]))) != (!var_5));
            arr_14 [i_3] [i_4] = ((((((arr_8 [i_3] [i_3 - 1]) ? (arr_8 [7] [i_3 - 1]) : 15360))) ? ((var_5 * (arr_8 [11] [i_3 + 1]))) : (arr_8 [i_3] [i_3 + 1])));
            var_22 = (max(var_22, (arr_13 [i_3])));
        }
        var_23 = ((!(((9515055687883620586 ? (arr_8 [i_3 + 1] [i_3 + 1]) : (arr_8 [i_3 + 1] [i_3 + 1]))))));
        /* LoopNest 3 */
        for (int i_5 = 2; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 0;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            var_24 = (((((max(-107, var_10))) == 110)) ? (min(((1 ? 0 : 0)), (arr_18 [i_5 - 2] [i_3 + 1] [i_6 + 1]))) : ((var_7 ? (((var_0 == (arr_23 [i_8] [i_3])))) : 1)));
                            var_25 = (min(var_25, (((65535 ? -16 : 4)))));
                            arr_25 [i_7] [i_5] [8] [i_7] [i_8] = 59353379;
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 24;i_9 += 1) /* same iter space */
                        {
                            arr_28 [1] [i_5] [i_6] [i_9] [i_9] [i_5] [i_9] |= var_11;
                            var_26 = (((arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1]) ? (arr_18 [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1])));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
                        {
                            var_27 = (max(var_27, (arr_26 [i_10] [i_5] [i_5] [12] [i_7] [0])));
                            var_28 |= ((1701816509 ? (min((max((arr_11 [i_3] [i_3]), (arr_8 [i_7] [i_3 + 1]))), (arr_26 [i_10] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]))) : (arr_16 [i_3] [i_3 + 1] [i_3])));
                            var_29 = (min(((min(-110, var_10))), (~2593150770)));
                            var_30 = (min(var_30, (((~(((max((arr_21 [1] [1] [i_6] [i_6] [i_7] [i_7]), (arr_24 [i_6]))))))))));
                            var_31 = ((((max((arr_27 [i_3] [i_3] [i_5] [i_6 + 1] [i_6] [i_6]), var_10))) ? (arr_21 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_6 + 1]) : (min((arr_15 [i_3 - 1] [i_5 - 1]), (arr_15 [i_3 - 1] [i_5 - 2])))));
                        }
                        for (int i_11 = 0; i_11 < 24;i_11 += 1) /* same iter space */
                        {
                            var_32 -= (((arr_30 [21] [i_5] [i_6] [i_7] [i_11] [i_3]) % ((((arr_29 [i_3] [i_11] [i_3] [10] [i_3 - 1] [i_3] [i_3 - 1]) != (arr_30 [i_5] [i_5] [1] [i_5 - 2] [i_5] [i_6 + 1]))))));
                            var_33 = (max(var_33, ((((((min(-91, (arr_16 [i_6 + 1] [i_5 + 1] [i_3 - 1]))) + 2147483647)) << (((((min((arr_15 [i_3] [i_3]), (((13659 != (arr_8 [i_7] [i_6])))))) + 1031087205)) - 3)))))));
                        }
                        arr_34 [i_3 + 1] [i_7] = (arr_15 [i_6] [i_3]);
                    }
                }
            }
        }
    }
    var_34 ^= ((3 ? (((((min(1023, var_0))) << ((((var_12 ? var_8 : var_11)) - 237))))) : ((((min(var_11, var_4))) ? var_8 : ((87 ? var_4 : var_10))))));
    #pragma endscop
}
