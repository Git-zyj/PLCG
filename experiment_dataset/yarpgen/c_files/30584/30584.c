/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0 + 2] [i_0 + 2] = (min((19 < var_10), (~var_16)));
                var_20 = (max(var_20, ((((((1 ? 1 : -1))) - var_13)))));
                var_21 -= ((!(arr_5 [i_1 + 1] [i_0 + 1] [i_0])));
                var_22 = (max(var_22, (((~(((arr_2 [i_0] [i_0 + 2]) ? (min(1, var_6)) : (~1))))))));

                for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
                {
                    var_23 = (max((((var_0 ? -4066698483452014233 : var_3))), ((1 ? (arr_5 [i_0 + 3] [i_1 - 1] [i_2]) : var_11))));
                    arr_9 [i_1] = (min(1, (1 && 11147494960903349965)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_24 |= (((arr_8 [2] [2] [8] [i_1 + 1]) * (!1)));
                        var_25 = ((((88871318125831339 != (arr_11 [i_0] [i_1] [i_2] [i_0]))) ? (arr_3 [i_0] [9] [i_2]) : 1));
                        var_26 = (var_14 >> (arr_8 [i_0 - 1] [i_1] [i_2] [8]));
                    }
                    for (int i_4 = 2; i_4 < 13;i_4 += 1)
                    {
                        var_27 -= ((~(!var_6)));
                        var_28 = (((((arr_11 [i_4] [i_4] [i_4 - 2] [i_4]) - 1549245056)) != (((1 && (8181 || 9160))))));
                        var_29 = (min((((((var_8 - (arr_0 [i_1])))) ? (arr_2 [i_4 - 2] [i_0 + 1]) : ((max(var_18, var_16))))), ((min(-101, (arr_11 [i_4] [13] [i_0 + 2] [i_4 + 3]))))));
                    }
                    var_30 = 137436856320;
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_31 = (min(var_31, (-23289 + 18446744073709551612)));
                    arr_17 [i_0 + 3] [i_5] [i_5] [i_0 + 3] = (((min(var_6, (arr_2 [i_1 + 1] [i_1 - 1]))) ^ (((arr_2 [i_1 - 1] [i_1 - 1]) | (arr_13 [i_0 + 1] [i_1 - 1])))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    var_32 = (min(((((arr_20 [i_7] [i_8]) ? (max(var_13, 1)) : (~var_14)))), (arr_18 [i_8])));
                    var_33 = ((max((max(-1821085713, var_12)), (1549245045 / -137436856317))) * ((((max(var_17, (arr_23 [i_6] [i_7] [i_6] [i_8])))))));
                }
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 16;i_9 += 1)
                {
                    for (int i_10 = 1; i_10 < 14;i_10 += 1)
                    {
                        {
                            var_34 &= (!(((var_6 ? (var_7 && 65510) : (((!(arr_19 [i_7]))))))));
                            var_35 = (((!(((arr_19 [i_9]) && (arr_20 [5] [i_6]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
