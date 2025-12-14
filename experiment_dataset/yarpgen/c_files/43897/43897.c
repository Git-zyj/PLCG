/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = (max(var_11, ((max((arr_2 [i_0]), (max((((var_8 ? var_1 : var_9))), var_6)))))));
        arr_3 [i_0] = (((arr_0 [i_0]) ? (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : var_7)) : (((((arr_0 [i_0]) < 8))))));
        var_12 = var_0;
    }
    var_13 &= ((-(((((var_9 ? var_1 : var_1))) ? 1 : ((var_9 ? var_9 : var_4))))));

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((-((((max(1161755439, (arr_5 [i_1]))) >= -18)))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_14 = (arr_13 [i_1] [i_1] [i_1]);
                    var_15 = (min(var_15, (((var_7 / (((((4831 ? -1069265859 : (arr_6 [i_1])))) ? (max(var_7, 1161755444)) : 1161755440)))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_18 [1] [1] [i_4] = ((~(max(var_4, -1069265859))));
                                var_16 = (((arr_4 [i_1] [i_2]) << (((((!var_3) ? ((((!(arr_4 [i_1] [i_1]))))) : (((arr_7 [i_3]) ? (arr_15 [i_1] [i_4] [i_1] [i_1]) : var_5)))) - 4294967266))));
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_1] = (((((arr_7 [i_1]) || (arr_7 [i_1]))) ? (((((arr_7 [0]) != (arr_7 [i_1]))))) : (arr_7 [i_1])));
        arr_20 [i_1] = ((-(max((arr_14 [i_1] [i_1] [i_1] [i_1]), -var_5))));
    }
    for (int i_6 = 1; i_6 < 20;i_6 += 1)
    {
        var_17 = (max(var_17, ((((arr_22 [i_6]) == var_0)))));
        arr_25 [i_6] [i_6] = 1023;
        arr_26 [i_6] = ((var_8 ? (arr_24 [i_6 - 1] [i_6 + 2]) : ((-(~var_3)))));
    }
    #pragma endscop
}
