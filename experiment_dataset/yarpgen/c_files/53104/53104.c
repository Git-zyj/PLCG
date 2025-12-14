/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((~var_6) * var_14))) ? (((127 % 1) - (max(var_8, 8621)))) : (((((min((-2147483647 - 1), var_12))) ? var_1 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_18 *= (arr_2 [i_0] [i_0] [i_0]);

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_19 += (((((var_5 | (arr_6 [i_2 - 2] [i_2 + 1] [6])))) ? (arr_6 [i_2 - 2] [i_2 - 1] [1]) : ((~(arr_6 [i_2 - 1] [i_2 + 1] [10])))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (min((arr_0 [i_0] [i_1]), (arr_3 [i_0] [i_1])));
                    arr_8 [i_0] = var_11;
                    arr_9 [i_2] [i_0] = 10029;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    arr_12 [i_0] [i_1] = var_12;
                    var_20 = (arr_1 [i_1 + 2]);
                }
                var_21 -= arr_0 [i_0] [i_1];
                arr_13 [i_0] [i_0] [i_0] = var_11;

                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_22 = (max(var_22, (arr_14 [i_0] [i_0] [i_0 + 1])));
                    arr_16 [i_0] [i_0] [i_4] [i_0] = (((((arr_10 [i_0]) ? (arr_5 [i_0] [i_1] [i_1] [i_0]) : var_16)) < 28227));
                    arr_17 [i_0] [i_0] = (((arr_4 [i_0 + 1]) ? (arr_0 [i_0 - 1] [i_1 + 1]) : (var_16 | var_15)));
                    var_23 -= (((((arr_6 [i_0] [i_0] [i_4]) ? (arr_2 [i_4] [i_1] [i_0]) : var_3)) >= var_4));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        var_24 = (max(var_24, 19617));
                        arr_22 [i_0] = (((((var_11 && 1) > ((~(arr_2 [i_1] [i_5] [i_6]))))) ? (arr_3 [i_0] [i_0 - 1]) : -8475349049502979920));
                    }
                    arr_23 [i_1] [i_1] [i_5] [i_0] = var_7;
                    var_25 = var_9;
                    var_26 = var_16;
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    arr_27 [i_0] [i_1] [i_7] [i_0] = ((44680 ? var_11 : -22210));
                    var_27 = (var_1 || -44);
                }
            }
        }
    }
    var_28 = var_13;
    var_29 |= var_13;
    var_30 = var_13;
    #pragma endscop
}
