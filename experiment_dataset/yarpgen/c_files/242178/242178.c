/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (min(var_13, ((min(((4294967274 ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (arr_6 [i_0] [i_0] [i_2] [i_0]))), (arr_4 [i_1] [i_1] [i_1]))))));
                    var_14 = ((((((-2147483647 - 1) | (min(0, (arr_1 [i_1])))))) ? (((((!1) == (min(var_7, 4294967295)))))) : (((min(234881024, 133525634)) & (arr_1 [i_0])))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((var_5 << ((((arr_8 [i_0] [i_1] [i_2] [i_0] [i_3]) == (arr_0 [i_0]))))));
                        var_15 = var_8;

                        for (int i_4 = 3; i_4 < 21;i_4 += 1) /* same iter space */
                        {
                            var_16 *= var_8;
                            var_17 = var_8;
                        }
                        for (int i_5 = 3; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_2] [i_0] [i_0] [i_0] = (max(((-1121660161 | (arr_9 [i_0] [i_1] [i_1] [i_5 - 1] [i_0] [i_1]))), (((-(((!(arr_16 [i_0] [i_0] [i_0] [i_5 - 3] [i_5] [i_1])))))))));
                            var_18 = (arr_2 [i_0]);
                        }
                        for (int i_6 = 3; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            var_19 = ((~(((!(arr_21 [i_6] [i_3] [i_0] [i_0] [i_1] [i_0]))))));
                            arr_22 [i_0] [i_0] [i_2] = var_3;
                        }
                        var_20 = ((!((min((max((arr_4 [i_1] [i_2] [i_3]), 2147483647)), (1 | var_9))))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        var_21 = var_8;
                        arr_25 [i_0] [i_1] [i_0] [i_0] = ((!((((((arr_24 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]) + 2147483647)) << (((((arr_24 [i_0] [i_0] [i_2] [i_2] [i_2] [i_7]) ? var_4 : var_11)) - 3046857611)))))));
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 2; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 21;i_10 += 1)
                        {
                            {
                                var_22 = (arr_21 [i_9] [i_9] [i_10 - 2] [i_0] [i_0] [i_10 - 2]);
                                var_23 = ((arr_35 [i_8] [i_8] [i_8] [i_9 - 1] [i_10 + 1]) != var_3);
                            }
                        }
                    }
                    arr_36 [i_0] [i_1] = (arr_1 [i_8]);
                    arr_37 [i_0] [i_0] [i_0] = ((-((((arr_6 [i_0] [i_1] [i_8] [i_8]) < (arr_14 [i_0] [i_0] [i_1] [i_0] [i_8] [i_8]))))));
                    var_24 = ((-(arr_26 [i_0] [i_0] [i_0])));
                }
                for (int i_11 = 2; i_11 < 21;i_11 += 1)
                {
                    var_25 = (max(var_25, (arr_33 [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_26 ^= (min(-1121660161, (((!(arr_5 [i_0] [i_0] [i_0]))))));
                    arr_41 [i_11] [i_11 + 1] [i_11] [i_0] = (((max(31, (arr_16 [i_11] [i_11 + 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11]))) - (((820702713 + 51) ? 1 : -10))));
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 22;i_13 += 1)
                        {
                            {
                                var_27 += (min(1, -6603));
                                var_28 = ((((min((arr_24 [i_0] [i_1] [i_1] [i_1] [i_1] [i_0]), (((arr_15 [i_0] [i_0] [i_11] [i_0] [i_11] [i_13]) ? 16 : (arr_34 [i_0] [i_0] [i_0] [i_0] [i_0] [i_13] [i_13])))))) > ((14 ? 199 : ((min(var_5, 3903931668)))))));
                                var_29 = ((!((max(((0 ? -2147483636 : -1)), (arr_14 [i_12 + 1] [i_11] [i_12] [i_0] [i_13] [i_0]))))));
                                arr_47 [i_0] [i_0] [i_0] [i_0] [i_12] [i_13] [i_0] = (min(-10, var_3));
                            }
                        }
                    }
                }
                arr_48 [i_0] = ((~((((min(-1053144505, (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0]))) == (var_11 || 16384))))));
                arr_49 [i_0] = (((((var_11 ? (arr_43 [i_0] [i_0] [i_1]) : (arr_26 [i_0] [i_1] [i_1])))) ? (((arr_26 [i_1] [i_0] [i_0]) ? var_7 : var_3)) : ((max((-2147483647 - 1), (arr_39 [i_0] [i_1]))))));
            }
        }
    }
    var_30 = 660728901;
    #pragma endscop
}
