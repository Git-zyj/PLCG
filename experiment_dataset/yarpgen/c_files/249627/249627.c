/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249627
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
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (arr_3 [i_0])));
                    var_17 -= (min(((-(arr_2 [i_2 + 1] [i_0]))), (arr_2 [i_2 - 1] [i_2])));
                    var_18 = (min((arr_4 [i_0] [i_1] [i_2]), 4539628424389459968));
                    var_19 = ((-(arr_4 [i_0] [i_1] [i_0])));
                }
            }
        }
    }
    var_20 = (min(var_20, (((var_15 ? (((var_6 ? (1 * var_14) : ((var_9 ? 27869 : var_6))))) : ((var_7 ? (min(8, 29)) : var_5)))))));
    var_21 -= ((~(min(((min(var_6, var_11))), -var_2))));
    var_22 &= var_11;
    #pragma endscop
}
