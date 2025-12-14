/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= 9223372036854775807;
    var_18 = (((max(7465400557156354538, 9223372036854775798))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((((+((max((arr_4 [i_0] [i_0]), var_2))))) ^ ((var_9 ? var_12 : ((min(var_8, (arr_5 [5] [i_0] [5]))))))));
                var_20 = (-9223372036854775807 - 1);
            }
        }
    }
    var_21 = ((-(((max(-9223372036854775790, var_16)) * var_9))));
    #pragma endscop
}
