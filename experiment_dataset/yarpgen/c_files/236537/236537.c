/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_13 = -var_7;
                var_14 = (max(var_14, (((~(((!(arr_1 [i_0] [i_0 - 1])))))))));
            }
        }
    }
    var_15 &= var_8;
    var_16 = var_8;
    var_17 = ((((((min(var_9, var_4))) > var_4)) ? -6241 : (((!(((var_6 >> (var_4 - 71)))))))));
    var_18 ^= -1056558817;
    #pragma endscop
}
