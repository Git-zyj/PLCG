/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-112 + -6455122112642812948);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_14 = var_2;
        arr_4 [i_0] = (((((-118 ? 136 : 255))) ? (((((arr_2 [i_0] [i_0]) || (arr_2 [i_0] [i_0]))))) : (((arr_3 [i_0]) ? var_1 : (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_15 = ((~var_6) ? (~-759150212) : var_8);
                            arr_17 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] = ((var_1 == (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                            arr_18 [i_4] = 58505;
                            arr_19 [i_4] [i_3] [i_2] [i_3] [i_0] |= (((arr_0 [i_0]) ? (151 || 0) : var_11));
                        }
                        var_16 = ((!(arr_5 [i_0] [i_0] [i_0])));
                    }
                }
            }
        }
        arr_20 [i_0] = ((var_1 & (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 11;i_8 += 1)
                {
                    {
                        arr_29 [i_5] [i_7] [i_7] [i_8 - 1] = (arr_24 [i_6] [i_8]);
                        arr_30 [i_5] [i_6] [i_5] [i_7] = (arr_10 [i_5] [i_6] [i_7] [i_7]);
                        var_17 = (((((((1445976552 ? (arr_13 [i_5] [i_5] [i_6] [i_7 - 1] [i_8 + 1]) : (arr_23 [i_7] [i_5]))) & (-6455122112642812922 ^ 6455122112642812971)))) ? ((-6455122112642812945 / (min(-6455122112642812945, (arr_0 [i_7 - 1]))))) : ((((((arr_7 [i_7] [i_8]) + var_10))) ? ((((arr_23 [i_5] [i_5]) ? var_11 : var_10))) : (((arr_14 [i_7] [i_7] [i_8 - 1] [i_8] [i_7] [i_7] [i_5]) ? var_6 : (arr_23 [i_7] [i_7])))))));
                    }
                }
            }
        }
        var_18 = (max(var_18, (((((((min((arr_21 [i_5]), 6455122112642812948))) ? ((3022953660 ? var_0 : 2)) : 7030)) | var_0)))));
    }
    #pragma endscop
}
