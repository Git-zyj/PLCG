/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191077
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((((9223372036854775807 ? -13213002 : -9223372036854775807))) ? (!1) : var_10))) ? (((!var_8) ? var_6 : (max(var_10, var_4)))) : (min((var_14 / var_4), (((var_13 ? var_13 : var_6)))))));
    var_17 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_18 = ((((-(((arr_8 [2] [i_1] [i_2] [i_0]) ? var_1 : (arr_1 [i_0]))))) == (((35505 % ((var_9 ? -101 : (arr_3 [i_3 - 2]))))))));
                            var_19 = (((arr_0 [i_0]) + ((((min(var_4, (arr_8 [i_3] [i_2] [i_1] [3])))) ? ((var_12 ? var_8 : var_7)) : 1))));
                        }
                    }
                }
                var_20 = (min(var_20, ((((arr_7 [i_0] [i_0] [i_0 - 3] [1] [4] [i_0]) ? ((min((arr_2 [i_0] [i_1] [i_1]), (max(var_13, var_13))))) : -var_3)))));
            }
        }
    }
    var_21 = (((((-9223372036854775798 ? var_14 : var_15) + var_0))));
    #pragma endscop
}
