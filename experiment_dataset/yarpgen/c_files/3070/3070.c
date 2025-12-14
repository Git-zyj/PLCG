/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((((-4647512799014357277 ? var_7 : (-2147483647 - 1))))) * ((((min(20611, 42791))) ? (!var_0) : var_6))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_14 = (var_3 % var_11);
                    var_15 = (var_1 ? (arr_5 [1] [0] [9]) : ((var_6 / (arr_3 [i_0] [i_2 - 1]))));
                }
            }
        }
    }
    var_16 ^= 7523361541314753957;
    #pragma endscop
}
