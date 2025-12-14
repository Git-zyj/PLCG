/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -1027704983;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_15 = ((~((-(arr_0 [i_0] [i_0])))));
                var_16 = (~38656);
            }
        }
    }
    var_17 = (-var_3 ^ var_6);
    var_18 ^= ((var_0 ? (-1027704983 - 1) : (max((max(var_7, var_9)), (var_13 || var_5)))));
    #pragma endscop
}
