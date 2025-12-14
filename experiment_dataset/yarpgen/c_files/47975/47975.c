/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_14 = (((((arr_0 [i_0]) <= var_12)) ? (((var_10 ? var_9 : ((var_10 ? var_0 : var_3))))) : (max(var_11, (((var_4 != (-32767 - 1))))))));
        arr_4 [12] [16] = ((~(((~var_5) ? (((arr_3 [i_0 + 2] [i_0 + 2]) << (((arr_3 [0] [i_0]) - 4421)))) : 1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_15 = (min(var_15, (((-(~var_10))))));
            var_16 = (((((!(arr_0 [i_0 - 1])))) != 1));
            var_17 += ((~(!var_3)));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = (((((!(((arr_9 [i_0] [i_2]) != var_8))))) << (((((arr_3 [i_2] [i_2]) - ((var_1 ? 1 : (arr_5 [i_0]))))) - 4434))));
            arr_13 [6] [6] [i_0 - 1] = ((~((15120712988907505769 * (arr_9 [i_0 - 3] [i_0 + 3])))));
            arr_14 [0] = (~(((max(1290300944, 18446744073709551615)))));

            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_24 [i_4] [i_2] [i_2] = ((~((var_6 ? (~91) : ((var_0 ? var_13 : 106))))));
                            arr_25 [11] [i_4] [i_4] [i_0] = ((+(((arr_0 [i_0 + 4]) ^ var_9))));
                        }
                    }
                }
                arr_26 [i_0] [i_3] [i_3] [i_2] = (((~var_4) << (-var_6 - 7472)));
                var_18 -= (min(((min((arr_6 [12]), var_6))), ((~(((arr_18 [1] [i_3] [i_2] [i_2] [1]) ? 12132505836579409018 : var_8))))));
            }
        }
        for (int i_6 = 3; i_6 < 16;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 16;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        {
                            arr_37 [i_9 + 1] [i_7] [i_7] [i_8 + 1] [i_9] = var_5;
                            var_19 = (((((var_5 ? (arr_10 [i_0 + 2] [1]) : (arr_18 [i_7] [i_7] [5] [5] [i_9])))) ? (((!var_2) ? (arr_7 [i_7] [i_0] [i_0]) : (((~(arr_19 [i_7] [i_7] [1] [i_8])))))) : (((((var_7 ? 1 : (arr_5 [i_7])))) ? ((var_0 ? var_13 : var_7)) : (~22)))));
                            var_20 = ((~(((arr_9 [i_8 - 1] [i_0 - 3]) | (arr_9 [i_8 - 1] [i_0 - 3])))));
                            arr_38 [i_0 - 1] [i_7] = (arr_34 [0] [i_6 - 2] [i_7] [i_6 - 2] [i_8 - 1] [i_9 + 1]);
                        }
                    }
                }
            }
            var_21 = (min(var_21, ((((((65535 << (-104 + 118)))) ? ((((min(246838565, var_5))) ? ((1 ? var_12 : (arr_11 [i_0] [i_6 + 1] [i_0]))) : ((((15120712988907505759 == (arr_29 [0] [i_0] [0]))))))) : var_4)))));
        }
        arr_39 [i_0] = ((var_13 ^ (max((arr_3 [i_0 - 1] [i_0]), (~1)))));
    }
    for (int i_10 = 0; i_10 < 25;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 25;i_13 += 1)
                {
                    {
                        var_22 -= var_2;
                        var_23 += (max(((18446744073709551600 ? var_7 : (~var_10))), (((!(arr_47 [i_13] [i_12] [1] [i_10]))))));
                    }
                }
            }
        }
        var_24 = ((var_2 == (arr_47 [i_10] [i_10] [i_10] [i_10])));
    }
    var_25 = var_12;
    #pragma endscop
}
