/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 262143;
    var_16 = (min((((((1008 ? var_0 : var_4))) ? (min(262155, 18446744073709289473)) : var_0)), ((((max(1150203630, -123)) / (var_9 || 16270543909946139204))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_17 ^= -1150203631;
                    var_18 = var_11;
                    var_19 *= ((48 || ((min(18446744073709289461, 35)))));
                    arr_8 [i_2] [i_2 - 1] [15] [i_2] = ((max(((var_0 ? 18446744073709289461 : var_12), 3061767886813483916))));
                }
            }
        }
    }
    var_20 = (min(var_20, ((((262147 >= 262154) ? (min(((min(var_6, var_0))), ((var_9 ? 18446744073709289472 : var_0)))) : (((var_2 ? 1 : (!var_14)))))))));
    #pragma endscop
}
