/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 ? (min(var_3, var_4)) : (max(var_2, 4060041250))));
    var_11 += 1;
    var_12 = ((var_0 << (-24373 + 24395)));
    var_13 = (max((max(var_8, 1)), (((var_4 << (var_5 - 14250996809538517172))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_14 = (((arr_3 [i_0 - 1] [i_2 + 2]) << (arr_3 [i_0 + 1] [i_2 + 2])));
                    var_15 *= (((((13481 ? 1 : -1340253652))) ? var_6 : (arr_0 [i_0] [9])));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    arr_10 [i_1] [i_1] [i_1] [i_1] = (max((arr_1 [i_0 + 1]), ((((min(var_1, var_3))) ^ (min((arr_0 [i_0] [i_1]), 32766))))));

                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_1] [i_1] = var_4;
                        var_16 = (max(var_16, ((((var_8 ? (((max(35842, 101)))) : (((arr_11 [i_0] [i_0] [i_3] [i_3] [8] [i_4]) + (arr_13 [i_0] [i_1] [i_3] [i_4] [i_3])))))))));
                    }
                    for (int i_5 = 3; i_5 < 11;i_5 += 1)
                    {
                        var_17 -= -1;

                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_22 [i_3] [i_1] [6] [i_1] [i_6] = ((52032 ? (47838 - 4060041251) : 1));
                            arr_23 [i_0] [i_1] [i_3] [i_0] [i_1] = ((arr_19 [i_1]) * var_0);
                        }
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_5] [i_1] = (((max((arr_0 [i_7 + 1] [i_7 + 2]), (((65535 ? (arr_1 [i_0 - 1]) : 8843714227490604076))))) + ((((((var_5 ? (arr_5 [i_1] [i_1]) : var_9))) ^ (((arr_7 [i_0] [i_1] [i_0]) ? (arr_2 [i_0]) : 234926022)))))));
                            var_18 = (var_5 + 4060041273);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_19 ^= ((((((arr_25 [i_0] [i_0] [i_1] [i_5] [i_1] [i_3]) && var_6)) ? (-25011 ^ 1) : (max(var_2, (arr_2 [i_0]))))) | 1);
                            var_20 -= ((((max(var_2, (arr_3 [i_0 - 2] [i_5 + 2])))) ? -1485582835 : var_4));
                        }
                    }
                    arr_30 [i_3] &= (max((-1485582835 == 13), ((var_5 - ((max(var_4, (arr_1 [i_3]))))))));
                    arr_31 [i_1] = (((arr_4 [i_0]) + ((max(var_1, var_5)))));
                    arr_32 [i_0] [i_0] [i_1] = (min(((1152921504573292544 - ((64 ? 63 : 281474976710652)))), (min((arr_21 [i_0] [i_1] [i_1] [i_1] [i_3] [i_3] [i_3]), (~var_0)))));
                }
                for (int i_9 = 1; i_9 < 12;i_9 += 1)
                {
                    arr_36 [i_1] = ((((((arr_29 [i_9 + 1] [i_1] [i_1] [i_1] [i_0 - 2] [i_0 + 1] [i_0]) ^ 28))) ^ var_0));
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 12;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_21 = 1008;
                                var_22 = (min(var_22, ((min((((arr_37 [i_10 + 1] [i_0] [i_10 - 2] [i_10] [i_0] [i_0]) ^ -1)), ((var_9 ? (arr_37 [i_11] [i_0] [i_10 - 2] [i_10] [i_0] [i_9]) : (arr_37 [0] [i_0] [i_10 + 1] [i_0] [i_0] [i_1]))))))));
                            }
                        }
                    }
                    var_23 ^= ((597549898 ? (max((arr_5 [i_0] [i_9 - 1]), (arr_13 [i_0] [i_0] [i_9 - 1] [i_0 + 1] [i_0]))) : (((((1 ? var_4 : (arr_42 [i_0 - 2] [i_1] [7] [i_0] [i_1] [i_0]))) - ((4060041247 ? 2147483623 : 193)))))));
                }
                var_24 -= (min(7795213804022176437, ((((max(var_7, var_0))) ? (((arr_34 [i_1] [i_0] [i_0] [i_0]) % var_5)) : (((var_2 << (var_2 - 714908277))))))));
            }
        }
    }
    #pragma endscop
}
