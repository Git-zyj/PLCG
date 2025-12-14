/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207519
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(((-(arr_0 [i_1 - 1] [i_1 + 1]))), (max(((var_0 ? 1777104316 : 99)), (arr_0 [i_1 - 2] [i_1 - 1])))));
                var_11 = (min(var_11, var_8));
                var_12 = (0 + -var_8);
            }
        }
    }
    var_13 = var_7;
    #pragma endscop
}
