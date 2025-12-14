/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 += (max(var_9, (((min((arr_0 [i_1]), (arr_0 [i_0])))))));
                        var_14 = var_10;
                    }

                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        var_15 -= (((arr_0 [i_2]) ? 171 : (-58 & var_4)));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = (arr_0 [i_0]);
                        arr_12 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = (arr_6 [i_0] [i_1] [i_1] [i_4]);
                    }
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] = 78;
                        var_16 = (min(((~(-1234270860 || 204582152))), var_4));
                        arr_17 [2] [i_1] [i_1] [i_1] [i_1] [2] = min((arr_0 [i_0]), (~214));
                    }
                    for (int i_6 = 3; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_20 [1] [i_6 - 1] [i_6 - 1] [i_6] = ((-(arr_2 [i_0] [i_1 + 1] [i_0])));
                        var_17 |= (arr_10 [i_1] [i_1]);
                        var_18 = ((((arr_9 [i_0] [i_6] [i_2]) ? ((var_1 ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : (arr_18 [i_1 - 2] [i_1 - 4] [i_2] [i_6 + 1]))) : (arr_2 [i_0] [i_0] [i_0]))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_6] = 11;
                            var_19 *= (arr_1 [i_2]);
                            arr_25 [7] [i_6] [6] [i_6] [i_7] = (min((arr_18 [i_0] [i_0] [i_0] [8]), (!var_6)));
                            arr_26 [i_0] [i_1] [11] [i_6] [1] [i_7] = 4090385137;
                            arr_27 [17] [i_6] [i_0] [17] [i_0] = max(((var_7 % (max(var_7, (arr_21 [i_0] [i_0] [i_2] [i_6] [i_0]))))), (-13192 % 183));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_6] [i_0] [i_0] [i_1] [i_0] [i_1] [i_6] = (max((((var_8 ? 1 : (arr_2 [i_6] [1] [i_2])))), ((((arr_18 [i_0] [i_1] [3] [i_8]) / var_10)))));
                            arr_31 [i_0] [i_0] [i_6] [i_6] [i_8] [i_6] = (-2586 - -13192);
                        }
                        var_20 = max(var_3, (min(((~(arr_7 [i_0] [i_1] [13] [i_6 + 1]))), -1)));
                    }
                    for (int i_9 = 3; i_9 < 18;i_9 += 1) /* same iter space */
                    {
                        var_21 -= (max((arr_3 [i_1]), ((var_0 | (var_8 & 18446744073709551610)))));
                        var_22 = (arr_14 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_23 -= var_9;
                                var_24 = ((!(((((min(var_4, (arr_4 [i_10] [i_1 - 1] [i_2] [i_1 - 1])))) ? (arr_7 [i_1 - 4] [i_2] [i_2] [i_11]) : (var_9 - var_8))))));
                                arr_42 [i_0] [i_0] [11] [i_2] [i_10] [i_11] = var_11;
                                arr_43 [i_11] [i_1] [i_2] [i_1] [i_11 - 1] = ((var_1 ? (((((((var_4 + 2147483647) >> (((arr_6 [i_0] [i_1] [i_10] [i_0]) - 3644942725))))) || ((max(-8428072289612056101, 73)))))) : (!-1173120776)));
                                var_25 -= (arr_9 [i_11] [i_11] [i_11]);
                            }
                        }
                    }
                    var_26 -= (((max((arr_23 [i_0]), (((var_9 >= (arr_4 [i_0] [i_1] [i_2] [i_0])))))) >= ((((((var_12 ? (arr_5 [i_0]) : (arr_0 [i_2])))) ? (arr_38 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2] [14]) : ((((arr_23 [i_0]) > (arr_33 [i_2] [19] [i_2] [i_1] [i_0])))))))));
                }
            }
        }
    }
    var_27 = (min(var_10, (min((min(-2192809483305631886, -2192809483305631888)), 8428072289612056101))));
    var_28 = var_6;
    #pragma endscop
}
