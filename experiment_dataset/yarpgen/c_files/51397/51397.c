/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51397
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_9 - 14122269589591136982);
    var_13 = (max(var_13, var_8));
    var_14 = (max(((var_10 ? var_2 : var_2)), (((((max(var_7, 14122269589591136982))) ? 251658240 : var_6)))));
    var_15 ^= (~14122269589591136982);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((arr_4 [i_0] [i_0] [i_0]) - (arr_4 [i_1] [i_1] [i_1])));
                arr_5 [i_0] [i_0] [i_0] = max(12, 8);
            }
        }
    }
    #pragma endscop
}
