/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246150
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((((!(((1 ? var_1 : var_13)))))) <= ((var_5 ? 1 : var_13)))))));
    var_16 = (((((var_8 ? ((46096 ? 8070450532247928832 : 8009)) : ((min(var_10, var_6)))))) ? (((65534 | 19) ? var_10 : (var_2 ^ var_5))) : (((46096 - var_12) ? 228899457 : (var_4 - var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (arr_3 [i_0] [i_0]);
                var_17 ^= (((((1 * (arr_1 [i_1] [i_1])))) ? (arr_3 [i_0] [i_1]) : ((1024 ? 1 : 1))));
            }
        }
    }
    #pragma endscop
}
