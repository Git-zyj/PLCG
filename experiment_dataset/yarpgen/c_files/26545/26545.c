/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26545
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_19 += ((((((arr_0 [18]) / ((((arr_2 [i_0]) ? -71 : 22121)))))) ? (arr_2 [i_0]) : (max((arr_2 [i_0]), -7708249503525753732))));
        var_20 = (max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])));
        var_21 = 44327;
        arr_3 [i_0] [i_0] = ((-(arr_1 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [8] &= var_11;
        arr_8 [3] = ((((var_11 ? ((9223372036854775782 ? var_11 : 7708249503525753731)) : (var_18 && 1)))) ? 10713 : 0);
        arr_9 [i_1] = min((arr_4 [i_1]), (arr_0 [i_1]));
        var_22 = (((~var_6) ? (((((((((-127 - 1) + 2147483647)) >> (9223372036854775782 - 9223372036854775770)))) & ((var_10 & (arr_5 [i_1])))))) : ((((((arr_2 [i_1]) & 30491))) ^ (((arr_6 [i_1]) ? 54817 : var_5))))));
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        var_23 = ((-(arr_18 [i_2] [i_3] [i_4 + 1] [i_5])));
                        var_24 = (3787729702083946022 ? (arr_15 [i_3 - 1]) : (0 % 1));
                    }
                }
            }
        }
        arr_19 [i_2] = (((((var_14 ? ((var_12 ? var_6 : (arr_18 [i_2] [i_2] [i_2] [i_2]))) : (arr_18 [i_2] [i_2] [i_2] [i_2])))) ? 1 : (((((7708249503525753731 ? 7708249503525753725 : var_5))) ? (arr_18 [i_2] [i_2] [i_2] [i_2]) : (13686 + -51)))));
        var_25 = (max(var_25, (((((((((arr_12 [i_2]) + 2147483647)) << (((((arr_16 [i_2] [i_2] [i_2]) + 7849626610866641019)) - 14))))) ? (~10838) : 22998)))));
    }
    var_26 = 7708249503525753733;
    var_27 = var_16;
    var_28 = var_14;
    var_29 = ((((-7708249503525753732 ? 21788 : ((219 ? 220 : 246)))) + var_8));
    #pragma endscop
}
