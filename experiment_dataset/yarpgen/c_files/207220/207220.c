/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= (((((min(32767, 32767)))) ? (((var_0 ? (max(1956, var_17)) : 0))) : (max((max(var_1, 112)), 112))));
    var_19 ^= (((-51435 + 2147483647) << ((((10987 ? (var_4 >= var_0) : -1929)) - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] [i_2] = 117;
                    var_20 = ((32767 << (18938 - 18934)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_21 = 127;
                                arr_14 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] &= 124;
                                var_22 -= (arr_0 [i_2] [i_3]);
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 24;i_5 += 1)
                    {
                        var_23 = var_17;
                        arr_18 [i_0] [i_2] [i_2] [i_2] [i_5] &= ((((((arr_16 [11] [24] [i_5 + 1] [i_1 - 2]) ? (arr_16 [i_0] [i_1 - 1] [i_5 - 2] [i_1 - 2]) : (arr_6 [20] [i_0] [i_5 + 1])))) ? (min((arr_17 [i_1] [i_1 - 4] [i_5 + 1] [i_1 - 3] [9]), (arr_17 [i_0] [i_0] [i_5 + 1] [i_1 - 3] [i_2]))) : (((max(-125, -125))))));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        arr_22 [i_2] = 108662829;

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_24 = ((min((((var_1 ? -1967 : 28))), (arr_19 [20]))) % 127);
                            var_25 = ((((((min((arr_21 [i_1] [i_7] [i_1] [i_2] [i_7]), -1963))) ? (arr_16 [i_0] [i_1] [i_2] [i_2]) : 44938)) << (32119 - 32105)));
                            var_26 ^= 15717;
                        }
                        arr_26 [i_2] [i_2] [i_2] [i_2] = (max((((arr_2 [24] [i_1 + 1]) >> (((arr_4 [i_6] [i_2]) + 6)))), (-1963 >= 37069)));
                        var_27 = 245;
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
                    {

                        for (int i_9 = 3; i_9 < 22;i_9 += 1) /* same iter space */
                        {
                            var_28 &= (arr_29 [i_9 - 2] [13] [i_9] [i_1 - 2]);
                            var_29 = (min((!15469), ((-14090959038064927903 ? ((~(arr_21 [i_0] [i_0] [i_0] [i_0] [12]))) : 40903))));
                            var_30 += ((((!((max(3041106877, -21012))))) ? -1960 : 25));
                            var_31 = ((((((arr_27 [i_0] [i_9 - 3]) ? ((var_11 ? 113 : var_10)) : ((20597 ? 68 : (arr_12 [i_9 + 2] [22] [i_8] [i_2] [5] [i_0])))))) ? (arr_9 [i_0] [i_0] [3]) : (arr_1 [i_0])));
                            arr_35 [i_0] [i_9] [i_2] [i_0] [i_9] &= ((~(((((-127 ? -1915 : 121))) ? (arr_6 [14] [i_2] [i_2]) : (49545 || 20699)))));
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 22;i_10 += 1) /* same iter space */
                        {
                            var_32 ^= ((125 ? ((46597 ? -126 : (arr_7 [i_0] [i_8] [i_10]))) : (((arr_10 [1] [i_1] [i_2] [i_8] [1]) & 11471))));
                            arr_38 [i_0] [i_1 - 2] [i_2] [i_2] [i_2] [i_10 - 1] = (arr_0 [i_1] [i_8]);
                            var_33 ^= var_0;
                            var_34 -= ((((!(arr_5 [i_1] [i_1] [i_1]))) ? (41 != -25477) : ((1132 ? 13120 : var_11))));
                            arr_39 [14] [4] [i_2] &= ((!(((var_11 + (arr_28 [i_10]))))));
                        }
                        for (int i_11 = 3; i_11 < 22;i_11 += 1) /* same iter space */
                        {
                            var_35 = 250;
                            var_36 ^= (((((~(arr_21 [i_11 - 1] [i_1 - 2] [i_1] [i_1 - 4] [i_1])))) ? (arr_41 [14] [i_1 + 1] [i_11 + 3]) : var_11));
                            var_37 = (!1128893389);
                        }
                        arr_42 [24] [i_1] [i_1] [i_1 - 4] [i_1] [i_1] = (!28953);
                    }
                    var_38 &= (arr_32 [0] [0] [19] [i_1] [i_1] [i_2] [19]);
                }
                var_39 = var_17;
            }
        }
    }
    #pragma endscop
}
