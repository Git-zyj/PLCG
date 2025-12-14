/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = min(30394, 105);
    var_18 = ((var_0 || ((((min(30394, 4294967283))) && (30394 && var_13)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 = (max(var_19, ((((((!(arr_0 [i_0])))) >> (((!(arr_1 [19])))))))));
        arr_2 [i_0] = (min((!654289370), 5556));
        var_20 += 114;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_21 = (arr_1 [i_0]);
            arr_7 [i_0] [15] [i_0] = ((!(!-96)));
            var_22 |= 83;
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    {
                        var_23 = (max(var_23, (((0 & (~18446744073709551608))))));
                        arr_16 [i_0] [i_2] [i_3 - 3] [i_2] [i_2] [i_2] = arr_3 [i_0];
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        arr_21 [i_2] [i_5] [i_2] [i_2] = ((1 & (arr_18 [i_6] [i_6] [i_6])));
                        arr_22 [i_2] [1] [i_5] [i_5] [i_5] [i_5] = (((65520 % 1) / var_14));
                    }
                }
            }
            var_24 |= ((((-1 ? 2605450760 : -1)) << 12));
            arr_23 [i_0] [i_2] = 0;
            var_25 -= (arr_4 [i_0]);
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 20;i_7 += 1)
    {
        var_26 = (~136);
        /* LoopNest 3 */
        for (int i_8 = 2; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_32 [i_7] [i_10] [i_9] [i_8 - 1] [i_7] [i_7] = (arr_27 [20] [i_9] [i_7]);
                        var_27 = (~5535);
                        var_28 = (((30379 >= 3635) ? ((268435455 >> (18446744073709551608 - 18446744073709551600))) : 1784583550));
                        var_29 = (var_9 > 40990);
                    }
                }
            }
        }
        arr_33 [i_7] = var_12;
    }
    for (int i_11 = 4; i_11 < 13;i_11 += 1)
    {
        var_30 = ((-((~((var_4 ? 5564 : (arr_3 [9])))))));
        arr_36 [i_11] = (max(65520, 1));
    }
    #pragma endscop
}
