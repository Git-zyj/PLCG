/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (-((-(min(4568612391780573007, var_13)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((var_9 ? var_13 : var_1))));
                    var_16 = (min(var_16, 0));
                }
            }
        }
    }
    var_17 = 18446744073709551615;
    var_18 = var_9;
    #pragma endscop
}
