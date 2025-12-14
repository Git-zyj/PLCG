/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, 1192143207));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = -var_10;
                            var_20 = (var_12 <= -1192143200);
                            var_21 *= 5101414109054192823;
                            var_22 = var_15;
                            var_23 &= ((arr_9 [i_1] [i_1] [i_1] [i_1] [i_2]) ? (((((5292398119108627313 ? (arr_5 [i_1]) : var_1))) | (arr_6 [i_0] [i_1] [i_2] [i_3]))) : (((max(1192143214, (arr_4 [i_2] [i_3]))) / ((((arr_3 [i_0] [i_0] [i_0]) ? var_11 : var_8))))));
                        }
                    }
                }
                arr_10 [i_0] [i_0] [i_1] = (!var_10);
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_24 = (arr_11 [i_4]);
        var_25 = (arr_11 [i_4]);
        var_26 = var_4;
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 24;i_7 += 1)
                {
                    {
                        arr_21 [i_6] = (arr_13 [i_4] [i_4]);
                        arr_22 [i_4] [i_4] [i_4] = var_14;
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_25 [i_8] = (-9223372036854775807 - 1);
        var_27 *= ((!(70 << 0)));
        arr_26 [i_8] = (((((~var_11) + 2147483647)) << (((max(((var_1 / (arr_20 [i_8] [i_8] [i_8] [i_8]))), ((max((arr_2 [i_8]), 1))))) - 1))));
    }
    var_28 = ((-(max(((max(var_11, 1970778400000136845))), (max(var_13, var_0))))));
    var_29 += (var_8 | var_9);
    #pragma endscop
}
