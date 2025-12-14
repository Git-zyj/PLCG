/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35849
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_10 = (min(var_7, ((max(var_8, ((var_5 ? (arr_5 [1] [18]) : var_4)))))));
                    var_11 *= var_2;
                    arr_8 [16] [i_1] [18] = ((621760974 ? 119 : -109));
                    var_12 = (arr_2 [3]);
                }
            }
        }
    }
    var_13 = (max((((((var_5 ? var_5 : -124))) ? var_0 : -2147483647)), ((var_1 ? ((109 ? var_9 : var_4)) : var_8))));
    var_14 = var_1;
    #pragma endscop
}
