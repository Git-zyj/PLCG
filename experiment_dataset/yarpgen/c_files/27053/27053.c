/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [16] = ((!(((arr_1 [i_0 - 1]) > ((((!(arr_5 [i_1])))))))));
                var_14 = (max(2139095040, (((arr_1 [i_1]) ? var_11 : -127))));
                var_15 = -41;
            }
        }
    }
    var_16 = (max(var_7, (max(var_3, var_10))));
    var_17 = (min(((~(var_0 + 3541090043))), ((max(-var_0, var_7)))));
    #pragma endscop
}
