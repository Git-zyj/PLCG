/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (max(var_12, ((((max(((((arr_9 [i_3 - 2] [i_3 - 2] [i_4] [i_1] [i_0]) < var_7))), (max((arr_0 [i_4]), var_6))))) ? (min(var_3, (((arr_1 [i_3]) >> (var_8 + 1774553458))))) : (max((arr_13 [i_3 - 1] [i_3 + 1] [i_3 - 3] [i_3] [i_3 - 2]), (min(var_1, var_8))))))));
                                var_13 = ((-((var_5 ? (max(-10969, -3832066937701527593)) : (arr_1 [i_0 - 1])))));
                                var_14 = (arr_7 [i_1] [i_2] [i_2]);
                            }
                        }
                    }
                }
                arr_14 [i_1] [i_0] [i_1] = (((((var_4 - ((65535 ? (arr_7 [i_1] [12] [i_1]) : (arr_2 [i_0])))))) ? ((((((arr_2 [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_7 [i_1] [i_1] [i_1])))) ? (!4095) : (704153314 - var_3))) : (((!(((19065245984075663 ? 59232 : (arr_13 [i_0 + 1] [i_0] [i_1] [i_1] [i_1])))))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_15 ^= (max((arr_12 [i_6] [i_5] [i_6] [22] [i_6] [i_0 - 2] [i_5]), (((min(var_8, (arr_2 [i_5])))))));

                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_16 |= ((((((min(-51, -64))))) - ((max(var_5, (arr_18 [i_0] [i_0] [i_6]))))));
                                var_17 = (arr_8 [i_5] [i_1] [i_6] [i_5]);
                            }
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                var_18 = ((var_4 ? (min((arr_4 [i_1] [i_1]), ((30665 ? (arr_0 [i_0]) : var_3)))) : -var_10));
                                var_19 = (min(var_19, ((min(((((arr_6 [i_1]) ? (arr_3 [i_0] [i_1]) : var_10))), (arr_13 [i_5] [i_0] [i_5] [i_1] [i_0]))))));
                            }
                            for (int i_9 = 3; i_9 < 22;i_9 += 1)
                            {
                                var_20 = (((min((~-3832066937701527571), ((max(var_2, var_9))))) >> (((((min(-23337, var_10))) || (arr_23 [i_0 - 2] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                                var_21 &= (max(14, (((var_0 - var_10) ? ((var_10 + (arr_26 [i_0] [i_1] [i_1] [i_6] [i_9 + 1]))) : var_1))));
                            }
                            var_22 = (((~3832066937701527581) ? var_4 : ((90 ? (arr_11 [i_0] [i_0 + 1] [i_0] [i_0 - 3] [i_0 - 1]) : (min((arr_26 [i_0] [i_0] [i_5] [i_6] [i_5]), var_2))))));
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 0; i_10 < 19;i_10 += 1)
    {
        arr_30 [i_10] [i_10] = ((max((-31806 == var_4), (min((-2147483647 - 1), (arr_8 [i_10] [i_10] [i_10] [i_10]))))));
        var_23 -= ((19669 || ((min((-27461 < var_10), var_11)))));
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 19;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    {
                        var_24 &= var_7;

                        for (int i_14 = 0; i_14 < 19;i_14 += 1)
                        {
                            var_25 ^= (max((arr_11 [i_11 - 2] [i_11] [i_11] [i_12] [i_13]), (arr_25 [i_11 - 2] [i_11 - 2] [i_13] [i_13])));
                            var_26 = (min(3832066937701527601, (((~(arr_8 [i_11] [i_10] [i_11 - 1] [i_11]))))));
                            var_27 = ((8222891724809399970 % (((var_10 ? var_1 : (arr_36 [i_10] [i_10] [i_12] [i_14]))))));
                        }
                        var_28 = (832101470 | (arr_15 [i_11]));
                        var_29 = (min(var_29, (!var_11)));
                        arr_41 [i_10] [i_10] [i_13] = ((((((((arr_39 [i_10] [7] [i_11] [i_12] [i_13]) % (arr_6 [i_13]))) - (~57784889)))) ? 0 : -617026426));
                    }
                }
            }
        }
        arr_42 [i_10] [i_10] = ((var_7 ? (min((max(3832066937701527625, var_2)), -648928647)) : (--179)));
    }
    #pragma endscop
}
