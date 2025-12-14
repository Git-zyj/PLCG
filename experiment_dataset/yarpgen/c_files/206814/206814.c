/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_14;
    var_17 = (min((min((max(var_0, var_9)), ((0 ? var_13 : var_9)))), ((var_10 ? (min(var_1, 63613)) : ((max(1924, 1943)))))));
    var_18 = ((!((min(((10642 ? 4398046511103 : 63596)), ((max(var_11, var_8))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        {
                            var_19 += (arr_4 [i_0] [1] [i_0]);

                            for (int i_4 = 0; i_4 < 10;i_4 += 1)
                            {
                                arr_11 [i_0] [i_1] [i_0] [i_4] [i_1] [9] = var_11;
                                var_20 = (min(var_3, ((48919 + (57344 + 205842513)))));
                                arr_12 [i_0] [i_1 + 1] [i_2] [i_0] [i_4] [i_1] [i_4] = ((((5524 & (~var_5)))) & (min(var_6, ((~(arr_1 [i_0]))))));
                                var_21 = (min(-2312430784251700226, ((min((arr_0 [i_1] [i_2 + 2]), var_11)))));
                            }
                            for (int i_5 = 3; i_5 < 6;i_5 += 1)
                            {
                                var_22 = (max(var_22, ((52516 | (~0)))));
                                var_23 = ((((!(var_5 && 1))) ? (var_5 + var_5) : (min((arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]), 3973007359))));
                                var_24 = (min(var_24, (((1073739776 ? 11 : 321959964)))));
                                arr_15 [i_1] [1] [i_5] [i_3] [i_2] [i_1] [i_1] = 63583;
                            }
                            for (int i_6 = 0; i_6 < 10;i_6 += 1)
                            {
                                var_25 = ((((min(65011712, (arr_7 [i_0] [i_1] [i_2])))) || (((arr_13 [i_0 - 1]) || (arr_3 [i_1 + 2])))));
                                var_26 = (((((min((arr_10 [i_1] [i_1] [i_2] [i_1] [i_2]), (arr_0 [i_0 - 1] [i_0 - 1]))) / (arr_4 [i_3 + 1] [i_2 + 2] [i_3 + 1]))) * (((min(16285, 1))))));
                            }
                        }
                    }
                }
                var_27 = (var_9 - 1);
            }
        }
    }
    var_28 &= var_3;
    #pragma endscop
}
