/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((-var_0 ? var_9 : (!-106))))));
    var_12 = 38984;
    var_13 = (min(var_13, ((-var_4 ? ((((!(!4294967295))))) : ((~((1 ? (-9223372036854775807 - 1) : var_8))))))));
    var_14 = ((((var_8 ? 8453362212487119739 : var_5)) % ((var_4 ? (min(63, 8453362212487119739)) : (!-67)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (((((46 ? 18446744073709551602 : 8453362212487119729)))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = ((((((9223372036854775797 ? 14160698191194827179 : 18446744073709551601)))) ? (21517 / 18446744073709551585) : ((~(var_2 - var_9)))));
                                var_17 &= ((-(((min(var_9, var_6))))));
                                var_18 = (min(var_18, var_7));
                                arr_14 [i_1] [i_0] [i_1] [i_3] [i_4 - 2] &= (((!-8453362212487119755) / ((((((var_9 ? 27 : -1887782977))) ? var_10 : (4294967291 != var_4))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
