/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = var_1;

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_18 = 7039735320219259423;
            var_19 = (var_8 ? (arr_3 [i_1] [i_0]) : (arr_2 [i_0]));
            arr_4 [i_0] [i_1] &= 7039735320219259423;
            var_20 = (var_12 >> (11407008753490292195 - 11407008753490292163));
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_7 [i_2] [i_2 + 3] = -11407008753490292179;
            arr_8 [i_2] = arr_6 [i_2] [i_2 + 4] [i_2 + 1];
        }
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_21 = (!7039735320219259432);
        arr_12 [i_3] [7] = (max((arr_9 [i_3] [i_3]), ((45817 >> (7039735320219259425 - 7039735320219259414)))));
        arr_13 [i_3] = (arr_6 [i_3] [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
    {
        var_22 ^= var_12;
        arr_17 [i_4 + 1] [i_4 + 1] = ((((1695118443 ? 7039735320219259407 : var_15)) ^ 127));
    }
    for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
    {
        var_23 = (max(var_23, ((max(((~(arr_16 [i_5 + 1] [i_5 + 1]))), ((((var_0 ? (arr_15 [i_5] [i_5]) : -1995991884)))))))));
        var_24 = 7039735320219259425;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                {
                    arr_26 [8] [i_6] [i_5] = ((~(((-1995991884 && (arr_19 [i_5]))))));
                    arr_27 [i_5] [i_6] [i_5] = (i_5 % 2 == 0) ? ((((((!((max((arr_15 [i_6] [i_6]), var_3)))))) << (((max((arr_21 [i_7 - 1] [i_5]), ((var_14 ? (arr_16 [i_6 - 1] [i_6 + 1]) : (arr_25 [i_5] [i_6 - 1] [i_7 - 1] [i_7]))))) - 12748))))) : ((((((!((max((arr_15 [i_6] [i_6]), var_3)))))) << (((((max((arr_21 [i_7 - 1] [i_5]), ((var_14 ? (arr_16 [i_6 - 1] [i_6 + 1]) : (arr_25 [i_5] [i_6 - 1] [i_7 - 1] [i_7]))))) - 12748)) - 18446744073709549181)))));
                    arr_28 [i_5] [i_5] [i_5] [i_5 + 1] = (((~(arr_16 [i_6 + 1] [i_5 + 1]))) & var_0);
                    arr_29 [i_7 + 1] [i_5 + 1] [i_6 + 1] [i_5] = 1;
                }
            }
        }
    }
    var_25 = ((((var_3 << (((~var_11) - 473463793735114810)))) == ((((var_13 + 13804627125485512944) ? ((3682219566717942680 << (((-630184112 + 630184160) - 48)))) : ((min(45817, var_2))))))));
    #pragma endscop
}
