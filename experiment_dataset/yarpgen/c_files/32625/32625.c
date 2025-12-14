/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-(max(var_11, var_4))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_15 = (((arr_6 [i_0]) | (((var_9 * (arr_13 [i_2] [i_2 + 3]))))));
                        var_16 = var_9;
                        var_17 = (max(var_17, ((4398042316800 ? ((-(((arr_13 [6] [6]) + var_11)))) : (arr_2 [4])))));
                        var_18 = -var_6;
                    }
                }
            }
        }
        var_19 = (((~(arr_13 [12] [i_0]))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    {
                        var_20 = ((((min(var_4, (arr_6 [1]))))) - 127);
                        var_21 *= (max((((var_1 < 0) % (arr_21 [13] [i_5] [i_4] [13]))), (var_10 < var_3)));
                        var_22 ^= ((-(arr_17 [i_0] [i_0] [2] [i_6])));
                    }
                }
            }
        }
    }
    var_23 ^= var_7;
    var_24 = (max(var_24, ((((!var_10) && (((var_3 ? -2194087141367312353 : var_13))))))));
    var_25 = var_13;
    #pragma endscop
}
