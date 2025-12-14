/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= 4294967295;
    var_20 = var_16;

    for (int i_0 = 1; i_0 < 10;i_0 += 1) /* same iter space */
    {
        var_21 = ((-((min((arr_1 [i_0 + 1] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1]))))));
        var_22 = (min(var_22, 4294967269));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 10;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 2; i_2 < 9;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    {
                        arr_13 [i_4] [i_3 - 1] [i_3 - 1] [i_2 + 2] [i_1 - 1] = 151;

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_23 ^= ((+(((arr_5 [i_2 - 2] [i_4 - 1]) ? 14151121445914713554 : -1054702740))));
                            arr_16 [i_5] [i_2 + 2] [i_3 - 1] [i_4 + 1] [i_5] [i_4] [i_2 + 1] = ((-(arr_2 [i_1 - 1] [i_1 + 1])));
                            var_24 -= ((4294967295 ? -4295622627794838061 : var_15));
                            var_25 = ((-(arr_1 [i_1 - 1] [i_1])));
                        }
                    }
                }
            }
            arr_17 [i_1] = ((((arr_15 [i_2 - 1] [i_2] [i_2 + 1] [i_2] [i_1] [i_1] [i_1]) ? (arr_9 [i_1] [i_1 - 1]) : var_6)));
        }
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            var_26 |= (arr_6 [i_1]);
            arr_20 [i_6 - 2] [i_1 - 1] = (arr_10 [i_6 - 2] [i_6 - 1] [i_6] [i_6 + 1]);
        }
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    {
                        arr_28 [i_9] [i_9] [i_8] [i_7] [i_9] [i_1 + 1] |= -4294967295;
                        var_27 = (((arr_18 [i_7 - 1] [i_1 + 1]) ? (!1) : (((!(arr_12 [i_1] [i_8] [i_8] [i_9]))))));
                    }
                }
            }
            var_28 = (((arr_2 [i_7 - 1] [i_1]) ? (arr_8 [i_1 - 1]) : (((arr_2 [i_1] [i_7 - 1]) ? (arr_27 [i_1] [i_7] [i_7] [i_7]) : var_9))));
            var_29 = (arr_6 [i_7]);
            var_30 -= var_1;
            arr_29 [i_7] = (((arr_8 [i_1 + 1]) ? (arr_24 [i_7] [i_7] [i_7 - 1] [i_7]) : var_13));
        }
        arr_30 [i_1] [i_1 + 1] &= (arr_7 [i_1 - 1]);
    }
    for (int i_10 = 1; i_10 < 10;i_10 += 1) /* same iter space */
    {
        var_31 = (((35966 ? (arr_27 [i_10] [8] [i_10] [i_10 - 1]) : (arr_11 [i_10 - 1] [i_10 + 1]))));
        var_32 = var_15;
        arr_34 [i_10] = 232569902203036317;
    }
    #pragma endscop
}
