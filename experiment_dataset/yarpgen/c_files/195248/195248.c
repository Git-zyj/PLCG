/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= ((+(min((var_12 / -6589878099692393245), (min(var_14, var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                arr_8 [i_0] = (max(((((var_10 ? 6589878099692393238 : -124)))), ((min(var_7, (arr_7 [0] [i_1]))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] = (((!-6589878099692393230) >> (((6584064362114458598 || var_1) ? (!-6589878099692393245) : (max(-6589878099692393274, var_1))))));
                    var_16 = (min(((-6589878099692393270 ? 18446744073709551615 : 6589878099692393245)), (arr_3 [i_0])));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_17 = ((((var_14 / (-127 - 1)))));
                    var_18 = (min(((((((var_5 == (arr_3 [i_0]))))) * ((var_2 ? (arr_5 [i_0 + 2] [i_0]) : var_10)))), ((((((var_6 ? var_11 : var_5))) ? var_8 : 122)))));
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, ((max((((222 + ((-(arr_22 [8])))))), var_2)))));
                                var_20 = 0;
                                var_21 = var_3;
                            }
                        }
                    }
                    var_22 = (min((((((-127 - 1) ? var_5 : 17)) & ((var_12 ? (arr_2 [4] [i_0]) : 9)))), ((var_14 ^ (var_8 ^ var_2)))));
                }

                for (int i_7 = 1; i_7 < 8;i_7 += 1)
                {
                    var_23 = ((!(((max(35, var_9))))));
                    var_24 = (max((min((arr_25 [i_0 + 1] [i_1 - 1] [i_7 - 1]), (min(var_11, var_10)))), 1259));
                    arr_27 [i_0] [i_0] [i_0] [i_0] = (((-((max(var_12, var_14))))));
                }
                for (int i_8 = 0; i_8 < 10;i_8 += 1)
                {
                    var_25 -= 28;
                    var_26 = (((((-((var_13 ? (arr_21 [i_0] [i_1] [i_8] [i_8] [i_1] [7]) : var_14))))) ? ((((arr_0 [i_0]) ? var_8 : 13))) : ((((max((arr_26 [6] [i_0]), var_5)))))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 6;i_9 += 1)
                    {
                        for (int i_10 = 4; i_10 < 9;i_10 += 1)
                        {
                            {
                                var_27 = (-(min(((((var_12 + 2147483647) >> (18446744073709551594 - 18446744073709551581)))), (max(var_2, var_14)))));
                                var_28 = (max((((-127 - 1) ? var_11 : (max((arr_29 [1] [1] [i_8]), 15)))), var_11));
                            }
                        }
                    }
                }
                for (int i_11 = 2; i_11 < 9;i_11 += 1)
                {
                    arr_40 [i_0] = ((((((max(47, var_3))) ? (arr_4 [i_0 + 2] [i_0 - 1] [i_0]) : 119)) % (max((arr_4 [i_1 + 2] [i_1] [i_0]), var_13))));
                    var_29 = (((((((arr_9 [i_0] [i_1 + 1] [i_11]) != (arr_9 [i_0] [i_1 + 2] [i_11 + 1]))))) * (18446744073709551564 - 105)));
                }
                var_30 = (((11632669411339076643 || 32) ? var_4 : ((4355216751132109335 ? (max(62683, var_2)) : (((var_11 ? var_10 : 113)))))));
            }
        }
    }
    #pragma endscop
}
