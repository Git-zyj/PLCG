/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_5));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_12 = (max(var_12, (arr_0 [i_0] [i_0])));
        arr_2 [i_0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 *= (((arr_8 [i_2] [i_1 + 1] [i_1 + 1] [i_0]) == (arr_8 [i_3] [i_1 + 1] [i_1 + 1] [i_0])));
                        var_14 *= (((arr_3 [i_1 + 1] [i_1 + 1]) % (((arr_7 [i_1 + 1] [i_2] [8] [i_3]) ? 32767 : -32767))));
                    }
                }
            }
        }
        arr_9 [i_0] = (((arr_1 [i_0]) ? ((var_8 ? -32756 : var_0)) : (arr_6 [i_0] [i_0])));
        arr_10 [i_0] = ((-(arr_6 [i_0] [i_0])));
    }
    for (int i_4 = 1; i_4 < 21;i_4 += 1)
    {
        var_15 &= ((arr_12 [i_4]) - (((min(var_1, var_2)))));
        var_16 -= (arr_11 [i_4] [18]);
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        var_17 += ((65535 ? 4294967295 : 52));
        arr_18 [11] = ((!(((var_8 ? (arr_1 [i_5]) : var_4)))));
    }
    var_18 = (min((((min(4184107538, 12405)) | (~var_1))), (2291142041 < 30568)));
    var_19 = var_2;

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_7 + 1] [i_6] = (arr_20 [i_7 - 1]);
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 16;i_10 += 1)
                        {
                            {
                                var_20 = (((max((arr_4 [i_7 - 1] [i_9] [i_10]), (~var_9))) % var_8));
                                var_21 += ((~(min((arr_6 [i_7 - 1] [i_7]), (arr_3 [i_7 - 2] [i_7 - 2])))));
                                var_22 |= (arr_3 [i_7 + 1] [i_7]);
                            }
                        }
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_11 = 0; i_11 < 16;i_11 += 1)
        {
            var_23 += (((-32765 || 34968) ? (((var_2 ? 1324335993 : var_8))) : var_0));
            var_24 = (min(var_24, (((-var_0 < (((var_0 ? var_10 : (arr_1 [i_6])))))))));
            var_25 -= ((var_7 ? (arr_23 [i_6] [i_11] [i_11]) : (arr_23 [i_11] [i_6] [i_6])));
        }
        /* vectorizable */
        for (int i_12 = 4; i_12 < 15;i_12 += 1)
        {
            arr_44 [i_6] [i_12] [i_6] = ((343903839 ? -32760 : -28459));
            arr_45 [i_6] = (var_8 | (arr_5 [i_6] [i_12 - 3] [i_12 + 1]));
        }
        var_26 = var_1;
        var_27 = (min(var_27, (arr_40 [0])));
        var_28 += ((-3907 == (arr_29 [0] [0])));
    }
    #pragma endscop
}
