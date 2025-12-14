/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((((((var_1 & (arr_2 [i_0] [i_0 - 1])))) ? (!var_5) : ((var_10 ? 2029128365 : (arr_1 [i_0 - 1]))))) / (min((((var_6 | (arr_1 [i_0])))), -2029128364))));
        arr_4 [0] &= ((!(((2265838931 ? (2029128365 < 1) : (48 % 9093614041612471882))))));
        var_19 &= var_18;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 10;i_4 += 1)
                {
                    {
                        arr_16 [i_4] [i_2 + 1] [2] = (max((--2029128365), (max(((var_13 ? var_8 : 6292394918540948839)), (arr_5 [i_1])))));

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_20 = (min(var_20, (((var_10 ? ((var_8 ? (arr_12 [i_3 - 3] [i_4 - 1] [i_4 - 1] [i_3 - 3]) : (arr_12 [i_1] [i_4 - 1] [i_3] [i_3 - 1]))) : (((-9093614041612471910 ? ((max(var_0, var_11))) : ((-10 ? (arr_8 [i_5]) : (arr_5 [6])))))))))));
                            arr_19 [i_4] [i_4] = ((+(((arr_5 [i_2 + 3]) ? (arr_5 [i_2 - 1]) : (arr_5 [i_2 + 3])))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_22 [i_4] [i_2 + 1] [i_2 + 2] [i_2 + 3] [i_2 + 1] = (max((arr_12 [i_1] [i_1] [i_3 + 1] [i_4 + 1]), (min((arr_10 [i_6] [4] [i_3 - 2]), var_3))));
                            var_21 = (max(((~(arr_18 [i_4 - 1] [i_4] [i_4] [i_4]))), (!186)));
                        }
                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            arr_26 [i_4] [i_4] [i_4] [i_4] [i_2] [i_1] = min(var_14, 90);
                            arr_27 [5] [i_4] [i_3 - 1] = (((max(var_4, -4)) + (max((~7993744148338603705), (~10452999925370947910)))));
                            var_22 = (((18446744073709551591 ? ((((arr_14 [2]) ? -909558699 : (arr_15 [i_1] [6])))) : var_9)));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            var_23 *= (arr_14 [2]);
                            var_24 = -5;
                        }
                    }
                }
            }
        }
        var_25 = ((((max((min(2265838931, 64905)), (~7)))) ? (max((10452999925370947926 > 2029128365), ((1818725055 ? (arr_12 [i_1] [10] [i_1] [i_1]) : var_11)))) : ((((((10452999925370947910 ? 0 : 3154234637))) ? (-9 <= var_18) : (((arr_24 [6] [i_1] [i_1] [4] [i_1]) >> 0)))))));
    }
    var_26 -= 1555948143;
    #pragma endscop
}
