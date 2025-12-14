/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_14 = (min(var_14, ((((max(2237784969458194384, (((~(arr_0 [i_1])))))) % (((arr_8 [i_0 + 1] [i_0 - 2] [i_2]) | var_8)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((-(((max((arr_1 [i_2]), 235)) | 123))));
                    var_15 ^= var_0;
                }
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    arr_12 [i_1] [i_1] = (~var_4);
                    arr_13 [i_0 + 1] [i_0] |= (((((2372738812954884704 - 18446744073709551614) & (arr_4 [i_0 - 2] [i_0 + 1] [i_1]))) == ((((6359123589735137778 < ((((!(arr_0 [i_0])))))))))));
                }
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    var_16 = (((arr_0 [i_1]) ? (max((arr_2 [i_4 + 1] [i_4 - 2] [16]), (arr_2 [i_4 - 3] [i_4 + 4] [i_4]))) : (((((arr_11 [i_0] [i_1] [i_0] [i_1]) - (arr_0 [i_0 - 2])))))));
                    arr_16 [i_0] [i_1] [i_0] [i_0] |= 16208959104251357208;

                    for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                    {
                        arr_21 [i_1] [i_4 - 3] [i_1] [i_1] = (min((((arr_17 [i_0]) ? (var_0 < var_9) : var_7)), (((max(16208959104251357232, var_5)) & ((((!(arr_0 [i_4])))))))));
                        arr_22 [i_0 + 1] [16] [i_0] [i_1] = ((var_5 & (max((((var_4 / (arr_0 [i_0])))), (max(16208959104251357208, 18446744073709551615))))));
                        var_17 = (!16208959104251357228);
                    }
                    for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                    {
                        var_18 = var_6;
                        var_19 = (2211879856246141171 / 16074005260754666912);
                    }
                }
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_20 = ((-(max(16208959104251357225, 16506165418077361735))));
                                var_21 = (min(var_21, (arr_7 [i_0] [i_0] [i_7])));
                                var_22 = (min(var_22, ((max(-2, ((-((-(arr_3 [i_8]))))))))));
                                var_23 = (((((max(24, -7647388877984156245)) - (arr_23 [i_0 - 1] [i_1] [i_1] [1] [i_9]))) >= 4932));
                            }
                        }
                    }
                }
                var_24 += ((-(((((var_8 ? (arr_7 [i_0] [i_0 - 2] [i_0]) : var_10)) < (((-(arr_27 [i_0] [i_0] [i_0] [i_1])))))))));
            }
        }
    }
    var_25 = var_0;
    #pragma endscop
}
