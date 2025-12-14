/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_18 = (min(var_18, ((!(((~(-2147483647 - 1))))))));
        var_19 = (max(var_19, (arr_2 [i_0])));

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] [i_1] [i_1] = (((arr_3 [i_1] [i_1]) && (!2147483647)));
                    arr_13 [i_0] [i_1] [i_1] = ((((((arr_11 [i_0]) & 2147483647))) ? ((((arr_4 [i_0] [8] [8]) % 6692))) : (arr_5 [i_0] [i_1] [i_0])));
                    arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (arr_10 [i_1] [9] [i_2] [i_3] [15] [9]);
                }
                arr_15 [i_1] [i_1] [i_2] [i_1] = (arr_7 [i_0] [i_0] [13]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                arr_18 [i_1] = ((0 ? (arr_0 [i_1]) : (arr_2 [i_0])));
                arr_19 [i_1] [i_1] [15] [i_4] = ((!(((~(-2147483647 - 1))))));
            }
            arr_20 [i_1] = (((arr_9 [i_0] [i_1] [5] [i_1]) ? (arr_6 [i_0] [i_1]) : var_8));
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_24 [i_5] = arr_4 [i_0] [i_5] [i_5];
            arr_25 [i_0] |= 1254522429929784704;
            var_20 -= (-2147483647 - 1);
            arr_26 [i_5] = (((((var_7 ? 6697 : 1))) + 1254522429929784708));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_32 [i_6] [i_6] [i_6] = ((~((-((min(19, 6697)))))));
            var_21 -= 0;
        }

        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            var_22 = 1;
            var_23 = (max(var_23, -6697));
            var_24 *= (-(arr_5 [i_6] [i_8] [i_6]));
            arr_35 [i_6] = (!6709);
        }
        var_25 = (min(((15 ? (arr_11 [i_6]) : (arr_11 [i_6]))), -10794));
    }
    var_26 = ((!var_14) + -6123767737861013006);

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        arr_38 [i_9] = (min((~var_3), var_6));
        var_27 -= max(((~(arr_36 [13] [i_9]))), ((max(1, (arr_36 [i_9] [i_9])))));
    }
    #pragma endscop
}
