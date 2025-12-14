/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1 + 2] = -1195541928;
                var_19 = (min(((!(arr_3 [i_0] [i_0] [i_0]))), 1));
                var_20 = ((~(((!(arr_5 [i_0] [i_1 + 2] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [i_2] = (((~1) ^ (max((max((arr_1 [i_0]), var_2)), ((max(var_6, (arr_5 [i_0] [i_0] [i_3]))))))));
                            arr_15 [i_0] = (((!var_13) | ((6213921192243696199 ? (arr_9 [i_1 + 3]) : (arr_13 [i_1 + 2] [i_3 + 2])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (max(65535, 1));
        var_21 = (((((~(1 - 1)))) ? (((-467046015 & 0) | (((!(arr_17 [i_4])))))) : ((max(1, var_8)))));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_22 = ((+((1 ? (arr_12 [1] [i_5] [i_5] [i_5]) : (arr_12 [i_5] [i_5] [i_5] [i_5])))));

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            var_23 ^= (~2);
            arr_26 [2] [i_6] [i_5] = 65520;
            arr_27 [14] [14] [i_6] = ((var_12 != ((-var_13 ? (arr_4 [i_5] [i_6]) : var_12))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            var_24 = ((-5085253445869028223 < ((134217727 ? -1 : 1))));
            var_25 = var_16;
        }
        var_26 = (arr_21 [i_5]);
        /* LoopNest 2 */
        for (int i_8 = 1; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 20;i_11 += 1)
                        {
                            {
                                arr_42 [i_5] [i_9] [i_5] = ((!(((-60030 ? 0 : (max(var_11, (arr_5 [i_9] [i_9] [i_9]))))))));
                                arr_43 [i_9] = 1825303649951950448;
                                var_27 = (max(var_27, ((((!var_11) ? ((((~var_14) < (((arr_32 [i_9] [5]) ? var_14 : 50970))))) : (arr_38 [i_10]))))));
                                arr_44 [i_9] [0] [i_9 + 1] [i_9 + 1] [i_9 + 1] = ((((((((var_1 ? 1 : var_11))) ? 2147483647 : (~14576)))) ? (max(32767, 6052)) : 46356));
                                var_28 = (((var_6 ? var_15 : (arr_29 [i_5] [i_8]))));
                            }
                        }
                    }
                    arr_45 [i_9] [4] [i_9] = (((arr_29 [i_5] [i_5]) ? (402125378657117412 | 16621440423757601178) : var_7));
                }
            }
        }
        arr_46 [10] [10] = ((~(min(402125378657117408, (max((arr_0 [13]), -840766305))))));
    }
    #pragma endscop
}
