/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [17] [i_1] [17] = (((!var_2) < (((arr_2 [i_0]) % (arr_2 [i_0])))));
                arr_6 [11] = (arr_4 [i_0] [1] [i_0]);
                var_16 = (((((var_6 ? (arr_1 [i_0]) : (arr_2 [i_0])))) ? (max(3461557898562631785, -3461557898562631816)) : (var_6 * var_0)));
            }
        }
    }
    #pragma endscop
}
