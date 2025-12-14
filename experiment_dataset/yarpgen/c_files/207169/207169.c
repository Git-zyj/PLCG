/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_10 = (arr_0 [i_0]);
        var_11 = ((~((-(arr_0 [i_0])))));
        var_12 = (min(var_12, (((((((!(arr_1 [i_0]))))) % var_7)))));
        arr_2 [i_0] = (8450590144524960494 && (arr_0 [i_0]));

        for (int i_1 = 2; i_1 < 21;i_1 += 1) /* same iter space */
        {
            var_13 = (((arr_4 [i_1 - 1] [i_1 - 1]) ? (arr_4 [i_1 + 1] [i_1 - 1]) : (arr_4 [i_1 - 2] [i_1 + 1])));
            var_14 = ((!(((arr_0 [i_0]) && var_6))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_1 + 1] [i_1] [i_2] [i_3] = (((arr_8 [i_3] [i_3] [i_2] [i_1] [i_0]) && 10));
                        var_15 = (((235 ? var_1 : var_6)));
                    }
                }
            }
        }
        for (int i_4 = 2; i_4 < 21;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                arr_15 [i_5] [i_5] [i_5] = ((~(arr_6 [i_0] [i_5])));
                var_16 = var_6;
                arr_16 [i_0] [i_5] [i_5] = (var_1 ^ var_2);
                var_17 = (arr_4 [i_4 - 1] [i_0]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_23 [i_0] [i_4] [i_5] [i_6] [i_5] [i_7] = var_6;
                            var_18 = var_9;
                        }
                    }
                }
            }
            var_19 = -13658;
            var_20 = (arr_22 [i_0] [i_4] [i_0] [i_4 - 2]);
            var_21 = ((((arr_21 [i_0] [i_0] [i_0] [i_4 - 2] [i_4 + 1] [i_4] [i_4]) ? 3976687569 : 47)));
            arr_24 [i_4] [i_0] [i_0] = (arr_21 [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4]);
        }
    }
    for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_22 = var_2;
        arr_27 [i_8] = 95;
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 6;i_9 += 1) /* same iter space */
    {
        var_23 = 2146573360;
        var_24 = (arr_1 [i_9 + 4]);
        var_25 = ((~((~(arr_22 [i_9 + 3] [i_9] [i_9] [i_9])))));
    }
    for (int i_10 = 1; i_10 < 6;i_10 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_11 = 0; i_11 < 10;i_11 += 1)
        {
            arr_36 [i_10 + 4] [i_10] [i_11] = (arr_6 [i_10 + 3] [i_11]);
            var_26 ^= (((arr_19 [i_10 - 1] [16]) + ((var_6 ? var_5 : (arr_14 [i_10] [i_10])))));
        }
        var_27 = (max(var_27, ((max(-3221867820665020104, ((((((69 ^ (arr_3 [i_10])))) ? (~-10) : ((min((arr_26 [i_10 + 1] [i_10 + 1]), var_2)))))))))));
        var_28 = (arr_5 [i_10 + 2] [i_10 + 1] [i_10] [i_10 + 4]);
    }
    var_29 *= var_1;
    var_30 = var_7;
    var_31 = (min(((((var_8 ? var_2 : var_5)) - -160)), var_3));
    var_32 = (~-var_2);
    #pragma endscop
}
