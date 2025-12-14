/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232278
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_16 = ((~((-(arr_1 [i_0])))));
                    var_17 = (-(min(var_4, -5577872636931362388)));
                }
            }
        }
    }
    var_18 = -var_14;
    var_19 = (max(var_19, ((((((((var_8 / var_15) / var_4)) + 9223372036854775807)) << ((((65535 << (var_14 - 5944182436781815070))) - 16)))))));
    #pragma endscop
}
