/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += (((~var_15) ? ((var_6 ? var_2 : var_10)) : (((((((10858748027296013140 ? 1 : 27392))) && ((min(var_16, var_11)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [1] [i_1] = (~0);

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_0] [i_3] [4] = ((0 && (~1)));
                        arr_11 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = (arr_9 [i_1] [i_1] [i_1] [i_1]);
                        var_19 ^= (((((arr_1 [i_0] [i_1]) && (arr_6 [i_1] [i_2] [i_3]))) && 1));
                        var_20 = ((var_16 ? (((15775144945550213704 && (arr_8 [1] [i_1])))) : 1));
                        var_21 += (arr_1 [1] [i_1]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_15 [7] [i_1] [i_1] [i_1] [i_1] = (!(~var_17));
                        var_22 = (min(var_22, ((((~var_1) && 2524110613)))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_23 = -94;
                        var_24 = (min(var_24, (arr_17 [i_0])));
                        var_25 = (max(var_25, (((arr_8 [i_2 + 1] [i_2 + 2]) && 1254049461))));
                        arr_18 [i_2] [i_1] [i_2] [i_5] [i_1] [i_5] = (((arr_2 [i_2]) && -1));
                    }
                    var_26 = (min(var_26, (((!(arr_6 [i_0] [i_2 + 4] [i_0]))))));
                }
                var_27 = (max(var_27, (arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
