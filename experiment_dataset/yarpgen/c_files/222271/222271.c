/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222271
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((-(min(var_4, 18446744073709551615))))) ? -0 : (0 / var_3)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_16 = (max(var_16, -var_8));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_17 = var_3;
                    var_18 = (((1 ? -16060 : 0)));
                }
                var_19 |= ((~((((arr_3 [2]) & 11994)))));
            }
        }
    }
    #pragma endscop
}
