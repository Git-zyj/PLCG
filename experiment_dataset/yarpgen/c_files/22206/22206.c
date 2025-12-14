/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_5 ? var_9 : var_10));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 -= 0;
                    var_13 = (max((((arr_1 [i_2]) ? 10251231043922463347 : (arr_1 [i_0]))), (max(8195513029787088276, (arr_1 [i_2])))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_14 = (max((arr_8 [2] [2] [i_2] [i_2] [i_2] [i_3]), var_8));
                        var_15 = (max(121, (max(10251231043922463347, 10251231043922463347))));
                    }
                    var_16 ^= ((((arr_1 [i_0]) <= (max((arr_9 [i_2] [i_0] [i_0] [i_0]), (arr_1 [i_1]))))));
                }
            }
        }
        var_17 = (!var_6);
        var_18 = (((!8195513029787088269) ? (((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) : var_1));
    }
    var_19 = (min(var_19, (18446744073709551602 < 9223372036854775807)));
    var_20 = max((((((var_0 ? 251 : 895196905150191)) >> ((var_6 ? var_9 : -512))))), var_8);
    #pragma endscop
}
