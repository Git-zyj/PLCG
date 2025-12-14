/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (+((var_3 | ((var_0 << (((var_7 + 6295803784728575764) - 47)))))));
        arr_4 [i_0] = ((var_3 ? -2017460577 : (((var_5 ^ -118237946630515078) + (var_5 > var_5)))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_10 = ((-(!var_9)));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] = (((((~(1 / var_3)))) | (min((min(var_0, var_0)), -var_9))));
                        var_11 = (max(var_11, ((max(((((var_3 ^ var_1) ? 62631 : var_5))), var_7)))));
                        var_12 = (arr_12 [4] [i_3] [4] [i_1]);
                    }
                }
            }
        }
        var_13 = (max(var_13, ((((((((var_6 > var_3) | ((var_8 ? var_7 : (arr_7 [i_1]))))) + 9223372036854775807)) << (var_1 - 199))))));
    }
    var_14 = ((var_3 ? ((~(4294967294 << 2))) : (((var_5 % (~var_9))))));
    var_15 = ((-(((var_2 ? var_3 : var_1)))));
    #pragma endscop
}
