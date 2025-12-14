/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = (min(var_13, (arr_1 [i_0])));
        var_14 = -1;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                var_15 |= arr_12 [i_1] [i_1] [10] [i_1];
                                arr_17 [i_1] [i_1] [i_1] [i_1] [18] [i_5] [i_1] &= (!var_1);
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] &= var_10;
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1)
                            {
                                var_16 = ((-(min(var_9, var_10))));
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = max(((+((var_11 ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : var_9)))), var_3);
                                arr_22 [i_4] = ((6337329855219167392 ? -27635 : (((arr_19 [i_6]) / (arr_19 [i_1])))));
                            }
                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_17 = (min(374357049, 37902));
                                arr_26 [i_1] [i_1] [22] [i_1] [i_4] [i_1] &= (arr_13 [i_4] [i_2] [i_2] [16]);
                            }
                            arr_27 [i_2] = ((max(var_9, ((min(374357049, 27635))))));

                            for (int i_8 = 3; i_8 < 21;i_8 += 1)
                            {
                                var_18 = ((((max(((var_4 ? 32 : var_5)), (arr_29 [i_8 - 2] [i_8 - 2] [i_8] [i_8 - 1] [i_8 + 4])))) ? var_0 : ((2060977893 ? 96 : 27361))));
                                arr_30 [i_1] [i_2] [i_1] [i_8] [18] = (((12109414218490384223 || (arr_24 [24] [i_8 + 3] [i_8] [i_8] [i_8 + 3]))));
                            }
                            for (int i_9 = 0; i_9 < 25;i_9 += 1)
                            {
                                var_19 = ((((((((max(1, var_7)))) <= var_2))) << (((max((arr_16 [i_1] [i_1] [i_3] [i_1] [i_4] [i_4] [i_9]), (min(-3505199142846181309, 1851)))) - 1911140426))));
                                arr_33 [i_1] [i_1] [i_1] [i_4] [i_1] [23] [i_1] = (arr_29 [2] [2] [2] [2] [i_9]);
                                arr_34 [i_1] = max(((63 ? 3830545543 : (-127 - 1))), (arr_12 [i_1] [i_1] [i_1] [i_1]));
                                var_20 = -125;
                            }
                            for (int i_10 = 0; i_10 < 25;i_10 += 1)
                            {
                                var_21 += (arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]);
                                arr_39 [2] [i_2] [i_2] [4] [20] = ((-(arr_38 [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] [i_10])));
                                var_22 = (max(var_22, var_4));
                            }
                            var_23 *= (arr_8 [i_2] [i_2]);
                        }
                    }
                }
                var_24 = ((18118 ? var_5 : (min((((arr_6 [i_1]) ? (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : 2147483647)), var_5))));
                arr_40 [i_2] = (~1006632960);
                var_25 = (!583217610);
                var_26 = (min(var_26, (((21366 ? (max(var_10, (arr_31 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((8796093022207 ? var_0 : var_6))))))));
            }
        }
    }
    var_27 = (min(var_27, var_5));
    #pragma endscop
}
