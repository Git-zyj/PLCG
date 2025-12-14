/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((((min(var_0, var_1)) + ((var_8 ? var_5 : -394172987))))), ((var_0 - (max(var_0, var_8))))));
    var_11 ^= var_8;
    var_12 = ((((max(var_2, var_4))) ? var_4 : ((((min(1, var_1))) ? (-9223372036854775807 - 1) : 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_13 = (arr_1 [i_1 + 1]);
                    var_14 = (min(var_14, ((((((arr_4 [i_0]) % var_1)) < 1699015481)))));
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_9 [i_0] [i_1] [i_3] = (arr_1 [i_0]);
                    var_15 = (((var_0 - (arr_7 [i_1 - 2] [i_1] [i_1] [i_1]))));
                    arr_10 [10] [i_3] = ((var_3 - ((((arr_4 [i_1]) + 0)))));
                }
                var_16 -= -9223372036854775799;
            }
        }
    }
    var_17 |= (((var_3 ? var_9 : var_8)));
    #pragma endscop
}
