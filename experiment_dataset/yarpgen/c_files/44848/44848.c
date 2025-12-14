/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = (min(117, (-9223372036854775807 - 1)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_14 [i_0] [i_0] = var_9;
                        arr_15 [i_0] [i_0] [7] [i_0] [i_3] [8] = (var_12 < var_8);
                        var_13 |= (~var_10);
                    }
                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 20;i_5 += 1)
                        {
                            arr_23 [20] [20] [i_0] [i_0] [i_4 + 2] [i_4 - 1] [18] = (((var_12 || var_3) > var_10));
                            arr_24 [i_0] [i_1] [i_0] [i_4 - 2] = (var_7 / var_5);
                            arr_25 [i_2] |= (var_9 ^ var_8);
                            var_14 = -10781;
                            var_15 = var_5;
                        }
                        var_16 *= ((var_10 / (max(var_9, var_3))));
                    }
                    arr_26 [i_0] [1] [1] [1] = (~50);
                    var_17 = ((!(((var_8 ? (min(var_12, var_10)) : (((var_3 ? var_4 : var_12))))))));
                    var_18 ^= (~(min(((var_5 << (var_7 - 1822390800))), -var_11)));
                }
            }
        }
    }
    var_19 = (max(var_19, ((((~var_3) / var_0)))));
    var_20 = ((!((max(var_9, var_3)))));
    #pragma endscop
}
