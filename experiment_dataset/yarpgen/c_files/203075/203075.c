/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 ^= ((-((max(var_2, (!var_5))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_15 = (((((((min(var_8, var_1))) ? ((var_9 ? var_9 : var_4)) : (var_8 <= var_8)))) ? ((((var_2 ? var_0 : var_2)))) : var_11));
                    var_16 = (max(((max(var_0, (var_10 < var_10)))), (min(((var_4 ? var_9 : var_6)), ((var_1 ? var_7 : var_3))))));
                }
            }
        }
    }
    var_17 = (((min(var_8, var_7)) & (((((max(var_11, var_8))) ? (47909 / 32767) : (var_6 / var_9))))));
    #pragma endscop
}
