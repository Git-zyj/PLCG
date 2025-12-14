/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_16 = (((arr_1 [i_0 - 1]) ? ((31710 ? var_13 : (arr_1 [i_0 - 2]))) : (((arr_0 [i_0 - 2]) * (arr_1 [i_0 + 2])))));
        var_17 = (max(var_17, var_13));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_4 [i_0] = 31041;
            var_18 = (((arr_1 [i_1]) && 1));
            var_19 = -1249174674;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_20 = (4 * 3);
                        var_21 = (((arr_9 [i_3] [i_2 + 2] [i_2] [i_2 - 1]) ? -5715289015514296235 : 114));
                    }
                }
            }
        }
        var_22 = (min(var_22, (((((min(211, (arr_8 [i_0 + 1])))) ? (218259960 || 4294967273) : ((((arr_8 [i_0 + 2]) && 1776456955))))))));
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {
        var_23 = (max(var_23, (((1903964715 ? -107 : ((236 ? 458128004 : 1531379004)))))));
        arr_13 [i_4] = (max((min((arr_12 [i_4 + 1] [i_4]), var_14)), (min((arr_12 [i_4 + 1] [i_4 + 1]), 1))));
        var_24 = (arr_11 [i_4] [i_4]);
    }
    #pragma endscop
}
