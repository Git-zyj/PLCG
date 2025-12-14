/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_8 ? 19030 : var_12)) >> ((((86 << (var_6 - 6610481370497604704))) - 1409019))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_18 = ((!((min(((min(var_10, var_16))), (min(var_11, var_13)))))));
        arr_2 [i_0] = -1685900263120204510;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_5 [i_1] = ((!((((var_11 ? var_4 : var_15))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_19 -= ((var_11 ? var_14 : 32000));
            var_20 = 8197537388948860225;
        }
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            arr_12 [2] [i_3] [i_3] = (min((min(((min(var_8, 5971010184325908225))), 7350015319775581834)), 23));
            arr_13 [i_1] [i_3 - 2] [i_3] = (min((min((max(var_6, var_4)), -1)), (((((min(var_0, 77))) && 4294967295)))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 3; i_5 < 10;i_5 += 1)
            {
                var_21 = (max(var_21, 1));
                var_22 = (max(var_0, var_1));
            }
            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = (min(var_23, (-var_16 - var_11)));
                var_24 = var_14;
                var_25 = var_11;
                var_26 = (min(var_26, var_14));
            }
            arr_21 [5] [i_4] [i_4] = -120;
            var_27 = ((((((~((max(var_10, var_16))))) + 2147483647)) >> (var_3 - 3881741322)));
        }
    }
    for (int i_7 = 3; i_7 < 12;i_7 += 1)
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 12;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 11;i_10 += 1)
                {
                    {
                        arr_34 [i_10] [i_8] [i_9] [0] = 150;
                        var_28 = 0;
                        var_29 = (min(var_29, (((((((((54721 << (var_13 - 4052033471)))) ? -107 : 427480671))) ? ((((max(1998651281, var_6))) ? var_0 : (min(var_1, var_6)))) : (((((var_7 ? var_7 : 1))) ? -0 : ((8154921510844619898 ? 16751215790915256954 : var_1)))))))));
                    }
                }
            }
        }
        var_30 = (min(0, ((((var_3 ? var_13 : var_11))))));
    }
    var_31 |= var_10;
    var_32 = (max((max(var_16, ((var_15 ? var_10 : var_13)))), (!var_13)));
    #pragma endscop
}
