/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190715
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 -= var_5;
    var_21 = ((var_13 ? var_12 : (~-2126595281)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_22 = (max((((!(!var_15)))), (~3148132104)));

                /* vectorizable */
                for (int i_2 = 3; i_2 < 10;i_2 += 1)
                {
                    var_23 = ((-(arr_6 [i_2 + 3] [i_2 - 1] [i_2 + 3])));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_24 = ((+(((arr_5 [i_0] [i_1] [i_2]) ? var_7 : var_9))));
                                arr_12 [i_0] = (((((2126595292 ? (arr_0 [i_0] [i_2 - 1]) : var_6))) ? (arr_9 [i_2] [i_0]) : var_16));
                                arr_13 [i_0] = var_0;
                            }
                        }
                    }
                    var_25 = (((arr_0 [13] [13]) ? ((var_16 ? 1917056847 : 31)) : 158));
                }
                var_26 = (((((arr_0 [i_0] [i_1]) ? ((10 ? var_3 : (arr_10 [1]))) : (arr_0 [i_0] [0]))) >= (min((arr_7 [i_0]), -32751))));
            }
        }
    }
    var_27 = (((var_11 % var_5) / (max(((max(-2126595280, -812643751))), (min(20, var_9))))));
    #pragma endscop
}
