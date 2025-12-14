/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_20 ^= ((var_6 ? (((arr_4 [i_1 + 1]) ? 1 : -4867322755400974327)) : (((min(var_10, 191))))));
                var_21 |= ((+(min((arr_1 [i_1]), var_18))));
                var_22 = ((((((min(-20595, 14100660155584543792)) <= 9223372036854775807))) >= 32767));
            }
        }
    }
    var_23 |= var_4;
    #pragma endscop
}
