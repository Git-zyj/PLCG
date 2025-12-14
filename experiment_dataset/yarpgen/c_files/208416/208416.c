/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((var_5 << ((((var_11 ? var_2 : var_6)) - 71)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 11;i_3 += 1)
                {
                    {
                        var_16 -= (arr_3 [i_3]);
                        arr_9 [i_0] [i_3 - 2] = -var_0;
                    }
                }
            }
            arr_10 [i_0] [i_0] [i_1 + 2] = var_1;
            arr_11 [i_0] [i_0] = var_14;
        }
        for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
        {
            var_17 = ((!(((var_3 ? var_1 : (arr_3 [i_4 - 1]))))));
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_21 [i_0] [i_6] = (((1 + var_11) ? (((arr_2 [i_0]) - ((var_10 ? var_12 : var_8)))) : ((((((max(var_7, var_8))) || (((var_12 ? var_4 : (arr_3 [i_0]))))))))));
                            arr_22 [i_0] [i_0] [i_0] [i_6] [i_6] = var_4;
                        }
                        var_18 = ((-((var_4 / ((var_9 ? var_8 : var_4))))));
                        arr_23 [i_0] [i_6] [i_6] [i_0] [i_0] = (((((arr_20 [i_0] [i_4 + 1] [i_5] [i_5] [i_6] [i_0]) & (var_2 / var_5))) < (((var_4 ? (arr_18 [i_6] [i_5] [i_0] [i_4 + 1] [i_0] [i_0]) : ((var_4 ? (arr_4 [i_6]) : 18010000462970880)))))));
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 14;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 14;i_11 += 1)
                    {
                        {
                            var_19 *= (((((-106 || (arr_7 [i_0])))) & (var_9 << 1)));
                            var_20 = ((min(((var_14 << (var_0 + 40))), (((arr_6 [i_0] [i_0]) - var_5)))));
                            var_21 &= ((-((var_12 / (arr_12 [i_0] [i_10] [i_11])))));
                        }
                    }
                }
            }
            var_22 = var_4;
        }
        arr_36 [i_0] = var_9;
    }
    var_23 = var_9;
    #pragma endscop
}
