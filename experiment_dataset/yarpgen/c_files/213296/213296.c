/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((108 > -2048) != (min(var_7, (arr_2 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                var_12 = (max(var_12, 2047));
            }
        }
    }
    var_13 = (min((min((min(var_3, var_8)), (((0 ? var_1 : var_9))))), -var_3));
    #pragma endscop
}
