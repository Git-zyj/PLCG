/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        var_18 = (((((!var_12) ? (arr_4 [i_1] [i_2] [i_3]) : (((~(arr_5 [i_3] [i_1] [i_0])))))) <= var_3));
                        var_19 = min((max(98304, ((247 ? var_6 : 939907050)))), (((arr_6 [i_0] [i_1] [i_2] [i_3]) ? ((939907055 ? 18446744073709551615 : (arr_5 [i_0] [8] [i_0]))) : (((101 ? (arr_4 [i_0] [i_1] [i_0]) : (arr_3 [i_1] [i_1] [i_1])))))));
                        arr_11 [i_0] [i_1] [i_0] [i_3] = 939907030;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_20 = var_14;
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_4] = max((((var_4 >= (arr_10 [i_1] [i_4])))), var_2);
                        var_21 = var_14;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            var_22 = (max(var_22, ((((((var_2 ? var_4 : (arr_12 [i_0])))) ? (var_9 + 2) : ((253 ? var_0 : var_11)))))));
                            var_23 = ((~((0 >> (((arr_0 [8] [i_1]) - 569649924))))));
                            arr_21 [i_0] &= var_8;
                            var_24 *= -1;
                            var_25 = (((arr_14 [i_0] [8] [8] [i_0] [i_0] [i_0]) & (arr_19 [i_6])));
                        }
                        for (int i_7 = 2; i_7 < 8;i_7 += 1)
                        {
                            arr_25 [i_0] = (~var_16);
                            arr_26 [i_0] [i_1] = (arr_9 [i_0] [1] [i_5] [i_0]);
                        }
                        arr_27 [i_0] [i_0] [i_0] = (arr_24 [i_0] [i_1] [i_2] [i_0] [i_5]);
                        var_26 += (arr_3 [i_1] [i_5] [i_2]);
                        arr_28 [i_0] [i_0] [i_0] [i_0] [1] = (((((var_0 ? 233 : var_5))) ? ((~(arr_10 [11] [i_1]))) : var_11));
                    }
                    var_27 = (max(var_27, var_11));
                    var_28 = (min(var_28, (((((max((arr_5 [i_0] [i_1] [3]), (arr_18 [i_0] [i_1] [i_2])))) ? (((((var_15 ? var_0 : var_14))) ? ((min((arr_8 [i_0]), (arr_5 [i_0] [i_1] [10])))) : -var_0)) : ((((((arr_3 [i_0] [i_0] [i_0]) + (arr_5 [i_0] [i_1] [5])))) ? ((255 ? var_12 : (-32767 - 1))) : (arr_14 [i_2] [i_1] [i_1] [1] [i_2] [i_2]))))))));
                    var_29 = (max(var_29, ((min(var_0, (max(var_2, ((((arr_8 [i_0]) ? var_0 : (arr_10 [i_0] [i_1])))))))))));
                }
            }
        }
    }
    var_30 = 3355060241;
    #pragma endscop
}
