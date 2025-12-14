/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223151
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_6;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [10] [i_0] |= 3041123350;
        arr_3 [i_0] = var_10;
        arr_4 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 3; i_1 < 13;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            arr_11 [i_2] = (((((max(1253843945, 17962676030541976481)) >> (arr_5 [3]))) >> (((((arr_5 [i_1 + 3]) ? ((var_17 * (arr_10 [8]))) : (arr_0 [i_1] [i_1]))) - 1631306936))));
            arr_12 [i_1] [i_1] [i_2] = ((~(((arr_6 [i_1 - 3]) ? var_0 : var_3))));
            arr_13 [i_2] [i_2] [i_1] = ((((((((1253843945 ? (arr_9 [1] [8] [13]) : (arr_5 [i_1]))) + 2147483647)) >> ((var_17 ? (arr_7 [i_1]) : var_13)))) / var_1));
            arr_14 [i_1] [i_2] [i_1] = 1253843941;
        }
        for (int i_3 = 0; i_3 < 0;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                arr_19 [i_3] [i_3] [i_4] [12] = (arr_5 [i_4]);
                arr_20 [i_1] [i_3] = ((!(((((max(var_11, var_17))) ? var_15 : (arr_17 [12] [i_3 + 1] [1]))))));
                var_20 = (max(var_20, 41));
                var_21 = ((-(((arr_1 [i_1]) >> (var_12 - 374792481755122529)))));
            }
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            arr_31 [i_6] [i_6] [i_6] [14] [i_7] = var_0;
                            arr_32 [i_1] [i_6] [i_5] [i_6] [i_6] [i_6] = -var_11;
                            var_22 = (max(var_22, (((((((arr_6 [i_1 - 3]) / var_11))) ? (((arr_18 [i_1] [16] [0] [i_1]) >> ((var_17 >> (51 - 24))))) : (((var_7 * var_10) * (((max(136, var_8)))))))))));
                        }
                    }
                }
            }
            arr_33 [i_1] [i_1] [1] = ((((min(var_2, (arr_5 [i_3 + 1])))) >> (((!(arr_8 [i_3] [8] [i_3 + 1]))))));
        }
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                {
                    var_23 = (84 >> 18);
                    arr_39 [i_9] [i_1] [i_1] = ((((max(var_6, var_13))) ? var_17 : ((max((arr_35 [i_1]), var_15)))));
                    var_24 ^= ((((arr_21 [i_9 + 2] [i_1 - 2]) * var_14)));
                    var_25 = (min(var_25, (arr_37 [i_1] [i_9 + 2] [i_9 + 2])));
                }
            }
        }
        arr_40 [i_1] = var_6;
    }
    var_26 = ((var_18 ? -241 : ((((((var_10 >> (var_1 - 146)))) ? (var_8 * var_3) : var_5)))));
    var_27 = var_7;
    #pragma endscop
}
