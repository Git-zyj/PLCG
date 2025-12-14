/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40821
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0 - 1] [i_1] [i_1] = 18446744073709551611;
                var_14 = (arr_2 [i_0]);
                var_15 = var_1;
            }
        }
    }
    var_16 &= ((var_0 ? (min((1 || var_12), var_2)) : var_1));
    #pragma endscop
}
